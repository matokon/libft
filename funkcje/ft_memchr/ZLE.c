/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZLE.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:53:03 by mokon             #+#    #+#             */
/*   Updated: 2024/12/05 19:13:19 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *e;
	e = (char *)s;
	size_t i;
	i = 0;
	while (e[i] != '\0' && --n)
	{
		if (e[i] == (unsigned char)c)
		{
			return ((void *)(e + i));
		}
		i++;
	}
	return (NULL);
}

///ZLE