/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:46:00 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:31:22 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	lst = ft_lstnew("today!");
	first = ft_lstnew("day");
	second = ft_lstnew("a wondeful");
	third = ft_lstnew("What");
	ft_lstadd_front(&lst, first);
	ft_lstadd_front(&lst, second);
	ft_lstadd_front(&lst, third);
	printf("ft_lstsize = %d\n", ft_lstsize(lst));
	while (lst)
	{
		printf("%s\n", lst->content);
			lst = lst->next;
	}
	return (0);
} */
