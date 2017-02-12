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

int		ft_printf(const char * restrict format, ...)
{
	va_list args;
	unsigned int ret;
	void *vide;

	vide = va_start(args, format);
	ret = 3;
	printf("%s\n", (char *)vide);
	return (ret);
}