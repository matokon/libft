/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:30:45 by mokon             #+#    #+#             */
/*   Updated: 2024/12/05 17:46:38 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{

        while ((*s1 && *s2) && n--)
        {
            if (*s1 != *s2)
            {
                return (*s1 - *s2);
            }
            *s1++;
            *s2++;
        }
        return (0);

}

// int	main(void)
// {
// 	printf("%d", ft_strncmp("abec", "abdc", 4));
// }