/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:56:02 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:56:05 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1);
	if (!(dest = (char*)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	ft_memcpy(dest, s1, len);
	return (dest);
}
