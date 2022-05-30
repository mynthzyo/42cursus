/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:23:45 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:29:29 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list	*p;
	t_list	*p1;
	t_list	*p2;
	t_list	*nbc;
	nbc = ft_lstnew("Bitcoin ");
	p = ft_lstnew("es ");
	p1 = ft_lstnew("libertad ");
	p2 = ft_lstnew("!");
	p->next = p1;
	p1->next = p2;
	p2->next = NULL;
	ft_lstadd_front(&p, nbc);
	while (p)
	{
		printf("%s", p->content);
		p = p->next;
	}
} */

/*Adds the element ’new’ at the beginning of the list.*/
