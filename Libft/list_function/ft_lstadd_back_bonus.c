/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:53:55 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:54:01 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (*alst == NULL && new == NULL)
		return ;
	if (*alst)
	{
		temp = ft_lstlast(*alst);
		temp->next = new;
	}
	else
		*alst = new;
}
