/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:55:00 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:55:06 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dest;
	const char		*srce;
	char			*srcetemp;
	char			*desttemp;

	srce = src;
	dest = dst;
	if (src == NULL && dst == NULL && len != 0)
		return (0);
	if (dest < srce)
	{
		while (len--)
			*dest++ = *srce++;
	}
	else
	{
		srcetemp = (char *)srce + (len - 1);
		desttemp = dest + (len - 1);
		while (len--)
			*desttemp-- = *srcetemp--;
	}
	return (dst);
}
