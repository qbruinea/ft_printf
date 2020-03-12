/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 14:52:48 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 14:52:58 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long q;

	q = n;
	if (q < 0)
	{
		ft_putchar_fd('-', fd);
		q = -q;
	}
	if (q < 10)
		ft_putchar_fd(q + '0', fd);
	else
	{
		ft_putnbr_fd(q / 10, fd);
		ft_putnbr_fd(q % 10, fd);
	}
}
