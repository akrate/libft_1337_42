/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:21:31 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/08 18:18:15 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *node1 = ft_lstnew("a");
// 	t_list *node2 = ft_lstnew("s");
// 	t_list *node3 = ft_lstnew("d");
// 	t_list *node4 = ft_lstnew("ff");
// 	t_list *node5 = ft_lstnew("g");
// 	node1 ->next = node2;
// 	node2 ->next = node3;
// 	node3 ->next = node4;
// 	node4 ->next = NULL;

// 	ft_lstadd_front(&node1,node5);
// 	t_list *lst = node2;
// 	while (lst != NULL)
// 	{
// 			printf("%s\n",(char *)lst -> content);
// 			lst = lst ->next;
// 	}
// 	// printf("%s\n",lst -> content);
// 	// printf("%s\n",lst -> next -> content);
// }