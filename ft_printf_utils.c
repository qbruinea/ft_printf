/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf_utils.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:58:59 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:59:18 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int		findindex(char *tab, char element)
{
	int index;

	index = 0;
	while (tab[index] != 0)
	{
		if (tab[index] == element)
			return (index);
		index++;
	}
	return (-1);
}

int		is_valid_type(char c, char *set)
{
	int j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (j);
		++j;
	}
	return (-1);
}

char	*fill_alloc(char c, int size)
{
	char	*str;
	int		j;

	str = 0;
	j = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (j < size)
		str[j++] = c;
	str[j] = '\0';
	return (str);
}

char	*insert_string(char *dest, int pos, char *seed)
{
	char	*bef;
	char	*aft;
	char	*tmp;
	char	*tmp2;

	bef = ft_substr(dest, 0, pos);
	aft = ft_substr(dest, pos + 1, ft_strlen(dest) - pos + 1);
	tmp = ft_strjoinfree(bef, seed, seed);
	tmp2 = ft_strdup(tmp);
	free(tmp);
	tmp = ft_strjoinfree(tmp2, aft, tmp2);
	free(bef);
	free(aft);
	return (tmp);
}

char	*flags_formater(va_list my_list, char *o_flags)
{
	int		j;
	char	*tmp;
	char	*tmp2;

	j = -1;
	tmp = 0;
	while (o_flags[++j])
	{
		if (o_flags[j] == '*')
		{
			tmp = ft_itoa(va_arg(my_list, int));
			tmp2 = ft_strdup(o_flags);
			free(o_flags);
			o_flags = insert_string(tmp2, j, tmp);
			free(tmp2);
		}
	}
	return (o_flags);
}
