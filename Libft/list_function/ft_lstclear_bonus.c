/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:53:17 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:53:47 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*begin;
	t_list	*list;

	begin = *lst;
	while (begin)
	{
		list = begin->next;
		ft_lstdelone(begin, del);
		begin = list;
	}
	*lst = 0;
}
