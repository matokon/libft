/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:23:28 by mokon             #+#    #+#             */
/*   Updated: 2024/12/05 16:42:38 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i = 0;

    if (size <= dst_len)
        return size + src_len;

    while (src[i] != '\0' && dst_len + i < size - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    
    return dst_len + src_len;
}

