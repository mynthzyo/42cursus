/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:37:56 by avilchez          #+#    #+#             */
/*   Updated: 2022/05/31 15:23:05 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_until_new_line(int fd, char *file_content)
{
	int		n_read_bytes;
	char	buffer[BUFFER_SIZE + 1];
	char	*aux;

	if (!file_content || !ft_strchr(file_content, '\n'))
	{
		n_read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_read_bytes > 0)
		{
			buffer[n_read_bytes] = '\0';
			if (file_content)
			{
				aux = ft_strjoin(file_content, buffer);
				free(file_content);
				file_content = aux;
			}
			else
				file_content = ft_strjoin("", buffer);
			file_content = read_until_new_line(fd, file_content);
		}
	}
	return (file_content);
}

static char	*get_up_to_new_line(char **file_content, char *after_new_line)
{
	char	*next_line;
	char	*new_file_content;
	int		after_new_line_len;
	int		file_content_len;

	file_content_len = ft_strlen(*file_content);
	after_new_line_len = ft_strlen(after_new_line);
	next_line = ft_strjoin("", *file_content);
	next_line[file_content_len - after_new_line_len + 1] = '\0';
	new_file_content = ft_strjoin("", after_new_line + 1);
	new_file_content[after_new_line_len - 1] = '\0';
	free(*file_content);
	*file_content = new_file_content;
	return (next_line);
}

char	*get_next_line(int fd)
{
	static char	*files_content[OPEN_MAX];
	char		*aux;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	files_content[fd] = read_until_new_line(fd, files_content[fd]);
	if (!files_content[fd])
		return (NULL);
	if (!ft_strlen(files_content[fd]))
	{
		free(files_content[fd]);
		files_content[fd] = NULL;
		return (NULL);
	}
	aux = ft_strchr(files_content[fd], '\n');
	if (aux)
		return (get_up_to_new_line(&files_content[fd], aux));
	aux = ft_strjoin("", files_content[fd]);
	free(files_content[fd]);
	files_content[fd] = NULL;
	return (aux);
}

int	main(void)
{
	char	*line;
	int	fd = open("prueba.txt", O_RDONLY);
	int	i;

	i = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
//		free(line);		
		line = get_next_line(fd);	
		i++;
	}
	system("leaks a.out");
	return (0);
}
