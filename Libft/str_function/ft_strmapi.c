/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:56:22 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:56:52 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (s == NULL)
		return (NULL);
	if (!(str = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
