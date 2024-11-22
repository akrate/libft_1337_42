/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:19:18 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/11 15:34:04 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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
// 	node4 ->next = node5;
// 	node5 ->next = NULL;
// 	printf("%s\n",ft_lstlast(node1)-> content);
// }