/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:22:06 by mahuet            #+#    #+#             */
/*   Updated: 2025/08/21 17:53:12 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			is_numeric = 1;
			i++;
		}
		else
		{
			is_numeric = 0;
			return (is_numeric);
		}
	}
	return (is_numeric);
}
