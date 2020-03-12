/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:54:44 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:55:06 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srce;

	if (src == NULL && dst == NULL && n != 0)
		return (NULL);
	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	i = 0;
	while (srce[i] != (unsigned char)c && i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	if (srce[i] == (unsigned char)c)
	{
		dest[i] = srce[i];
		return (dst + i + 1);
	}
	return (NULL);
}
