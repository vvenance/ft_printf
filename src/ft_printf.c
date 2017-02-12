/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 15:19:31 by vvenance          #+#    #+#             */
/*   Updated: 2016/06/14 15:19:40 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	init_attr(t_attr *attr)
{
	ft_bzero(attr->attributes, 6);
	ft_bzero(attr->flags, 7);
	attr->fieldwidth = 0;
	attr->dot_prec = 0;
	attr->precision = -1;
}

int			ft_printf(const char * restrict format, ...)
{
	va_list	ap;
	t_attr	attr;
	int		i;

	i = -1;
	va_start(ap, format);
	while (format[++i] != '\0')
	{

		if (format[i] == '%')
		{
			init_attr(&attr);
			i += find_conversion(format, i, &attr);
		}
		else
			ft_putchar(format[i]);
	}
	va_end(ap);
	return (ret);
}