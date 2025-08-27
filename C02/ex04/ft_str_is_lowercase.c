/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:25:21 by mahuet            #+#    #+#             */
/*   Updated: 2025/08/21 17:53:10 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	i;
	int	is_lowercase;

	i = 0;
	is_lowercase = 1;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			is_lowercase = 1;
			i++;
		}
		else
		{
			is_lowercase = 0;
			return (is_lowercase);
		}
	}
	return (is_lowercase);
}
