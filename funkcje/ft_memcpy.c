/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:31:09 by mokon             #+#    #+#             */
/*   Updated: 2024/12/04 15:59:51 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void * ft_memcpy( void * destination, const void * source, size_t num )
{
    size_t i;
    i = 0;
    char *dest;
    char  *sour;

	dest = (char *)destination;
    sour = (char *)source;
    while (num != 0)
    {
        dest[i] = sour[i];
        num--;
        i++;
    }
    return dest;
}
// int main()
// {
//     int s = 1234;
//     char d[20] = "1234";
//     memcpy(&s,&d,3);
//     printf("%d ,%s\n", s, d);
//     return 0;
// }