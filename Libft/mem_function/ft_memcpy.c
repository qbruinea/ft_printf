/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:54:57 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:55:06 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srce;

	if (dst == NULL && src == NULL && n != 0)
		return (NULL);
	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dest);
}
