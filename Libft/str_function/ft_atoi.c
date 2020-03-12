/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:55:35 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:56:05 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_isspace(int c)
{
	if ((c > 8 && c < 14) || (c == 32))
		return (TRUE);
	return (FALSE);
}

int			ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	neg = FALSE;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = TRUE;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	return (neg ? -nb : nb);
}
