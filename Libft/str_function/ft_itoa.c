/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:55:46 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:56:05 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_countnb(int n)
{
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	len++;
	return (len);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	nbr;

	nbr = n;
	size = ft_countnb(n);
	if (!(str = (char *)ft_calloc(sizeof(char), size + 1)))
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	--size;
	while (nbr >= 10)
	{
		str[size--] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	str[size] = nbr + 48;
	return (str);
}
