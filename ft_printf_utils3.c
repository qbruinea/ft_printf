/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf_utils3.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/30 17:46:03 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/30 17:46:06 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_idontknow(char *o_flags, int j)
{
	if (is_valid_type('%', o_flags))
	{
		while (o_flags[j] == '-' || o_flags[j] == '0')
			++j;
	}
	else
	{
		while (o_flags[j] == '-')
			++j;
	}
	--j;
	return (j);
}
