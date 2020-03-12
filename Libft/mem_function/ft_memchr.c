/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:54:48 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:55:06 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;

	str = (unsigned const char *)s;
	while (n-- != 0)
	{
		if (*str == (unsigned char)c)
			return ((void*)str);
		str++;
	}
	return (NULL);
}
