/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:29:04 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/11 15:31:54 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}
// int main()
// {
// 	t_list *node1 = ft_lstnew("a");
// 	t_list *node2 = ft_lstnew("b");
// 	t_list *node3 = ft_lstnew("c");
// 	t_list *node4 = ft_lstnew("d");
// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = NULL;
// 	ft_lstadd_back(&node1,node4);
// 	printf("%s",ft_lstlast(node1)-> content);
// }