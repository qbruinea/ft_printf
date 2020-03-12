/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoinfree.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:57:07 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:57:13 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strjoinfree(char *s1, char *s2, char *strfree)
{
	char	*dest;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!(s1) && !(s2))
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(dest = ft_calloc(sizeof(char), (len + 1))))
		return (FALSE);
	i = -1;
	while (s1[++i])
		dest[i] = s1[i];
	j = 0;
	while (s2[j])
		dest[i++] = s2[j++];
	free(strfree);
	return (dest);
}
