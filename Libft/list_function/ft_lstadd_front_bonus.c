/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_front_bonus.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:53:59 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:54:01 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst)
	{
		new->next = (*alst);
		*alst = new;
	}
	else
	{
		new->next = NULL;
		*alst = new;
	}
}
