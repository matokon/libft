/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:17:56 by mokon             #+#    #+#             */
/*   Updated: 2025/01/05 18:44:02 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t num)
{
	size_t i;
	i = 0;
	char *p1;
	char *p2;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (i < num)
	{
		if (p1[i] != p2[i])
		{
			return ((unsigned char)p1[i] - (unsigned char)p2[i]);
		}
		i++;
	}
	return (0);
}