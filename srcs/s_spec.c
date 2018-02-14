/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_spec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 08:21:18 by abbenham          #+#    #+#             */
/*   Updated: 2018/02/14 11:58:46 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

size_t	s_spec(va_list ap, const char *format, t_mark mk)
{
	size_t len;
	
	len = s_display(va_arg(ap, char *), mk);
	return (len);
}
