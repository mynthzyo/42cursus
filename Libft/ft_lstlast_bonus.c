/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:37:38 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:30:22 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
	printf("ft_lstlast = %s\n", ft_lstlast(lst)->content);
	while (lst)
	{
		printf("%s\n", lst->content);
			lst = lst->next;
	}
	return (0);
} */

/*Returns the last element of the list.*/
