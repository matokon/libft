/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:11:08 by mokon             #+#    #+#             */
/*   Updated: 2025/01/05 15:15:02 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char * strrchr( const char * str, int ch )
{
    int i;
    i = ft_strlen(str);
    if(ch == 0)
        return ((char *)str + i);
    while(i >= 0)
    {
        if(str[i] == (char)ch) 
            return ((char *)(str + i));
        i--;
    }
    return (NULL);
}
