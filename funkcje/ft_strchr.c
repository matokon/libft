/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:43:21 by mokon             #+#    #+#             */
/*   Updated: 2024/12/05 17:23:30 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strchr( const char * str, int z )
{
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i] == (char)z) 
            return ((char *)(str + i));
        i++;
    }
    return (NULL);
}

// int main()
// {
//     printf("%s",ft_strchr("jasdasasdgg",97));
// }