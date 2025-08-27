/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:13:40 by mahuet            #+#    #+#             */
/*   Updated: 2025/08/21 17:53:08 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;
	int	is_uppercase;

	i = 0;
	is_uppercase = 1;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			is_uppercase = 1;
			i++;
		}
		else
		{
			is_uppercase = 0;
			return (is_uppercase);
		}
	}
	return (is_uppercase);
}
