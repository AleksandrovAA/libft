/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:29:52 by ngale             #+#    #+#             */
/*   Updated: 2019/09/21 20:18:16 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*ptr;
	int				n;
	unsigned char	sign;

	ptr = (unsigned char *)str;
	n = (int)len;
	sign = (unsigned char)c;
	while (n--)
	{
		if (*ptr == sign)
			return (ptr);
		ptr++;
	}
	return (0);
}
