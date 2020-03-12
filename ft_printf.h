/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/30 17:45:29 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/30 17:45:40 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

typedef struct	s_print
{
	void		(*tabfunction[9])(va_list q, char * w, int * e);
	char		tabindex[10];
	char		*flags;
	int			i;
	int			tmpindex;
	int			len;
}				t_print;

char			*fill_alloc(char c, int j);
void			init_struct(t_print *base);
int				ft_printf(const char *src, ...);
int				is_minus(char *o_flags, int j);
char			*move_minus(char *str, int j);
char			*wi_nb(char *str, char *o_flags, int index, int zero);
char			*pre_nb(char *str, char *o_flags, int preci);
char			*minus_nb(char *str, char *o_flags, int preci);
void			ft_char(va_list my_list, char *o_flags, int *o_len);
void			ft_str(va_list my_list, char *o_flags, int *o_len);
void			ft_address(va_list my_list, char *o_flags, int *o_len);
void			ft_nbr(va_list my_list, char *o_flags, int *o_len);
void			ft_unsnbr(va_list my_list, char *o_flags, int *o_len);
void			ft_hexa(va_list my_list, char *o_flags, int *o_len);
void			ft_hexabig(va_list my_list, char *o_flags, int *o_len);
void			ft_percent(va_list my_list, char *o_flags, int *o_len);
int				findindex(char *tab, char element);
int				is_valid_type(char c, char *set);
char			*flags_formater(va_list my_list, char *o_flags);
int				ext_param(char *o_flags, char type);
int				ext_width(char *o_flags);
int				ext_zero(char *o_flags);
void			ft_putandfree(char *str, int *o_len);
int				ft_idontknow(char *o_flags, int j);

#endif
