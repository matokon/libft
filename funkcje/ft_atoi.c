/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:02:11 by mokon             #+#    #+#             */
/*   Updated: 2024/12/05 15:07:49 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int cons;
	int result;

	result = 0;
	cons = 0;
	while (*str >= 9 && *str <= 13 || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			cons += 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * cons);
}