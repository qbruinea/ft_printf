/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiter_bonus.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:53:26 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:53:47 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;
	t_list	*list;

	temp = lst;
	while (temp)
	{
		list = temp->next;
		(*f)(temp->content);
		temp = list;
	}
}
