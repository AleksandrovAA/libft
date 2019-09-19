/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:14:54 by ngale             #+#    #+#             */
/*   Updated: 2019/09/14 20:21:58 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *st1, const char *st2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}