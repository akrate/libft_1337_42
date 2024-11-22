/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:01:08 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/08 18:19:14 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
// 	int o = ft_lstsize(node1);
// 	printf("%d\n",o);
// }