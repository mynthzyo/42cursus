/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:40:32 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:28:29 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}

/* int	main(void)
{
	t_list	*p;
	t_list	*p1;
	t_list	*p2;
	t_list	*nbc;
	nbc = ft_lstnew("(LAST)");
	p = ft_lstnew("1 ");
	p1 = ft_lstnew("2 ");
	p2 = ft_lstnew("3 ");
	p->next = p1;
	p1->next = p2;
	p2->next = NULL;
	ft_lstadd_back(&p, nbc);
	while (p)
	{
		printf("%s", p->content);
		p = p->next;
	}
} */

/* lstadd_back will add the element 'new' (second argument) to the end of
	 * (lst). *new is the address of a pointer to the element to be added to
	 * the list. If there's nothing in lst, new will be assigned to it. Else,
	 */

/*Adds the element ’new’ at the end of the list.*/
