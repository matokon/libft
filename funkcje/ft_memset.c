/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:38:19 by mokon             #+#    #+#             */
/*   Updated: 2024/12/04 14:28:50 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)ptr;
	while (i < num)
	{
		str[i] = value;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	s[5] = "abcde";

// 	memset(&s, '0000', 3);
// 	printf("%s", s);
// 	return (0);
// }
