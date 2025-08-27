/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:26:43 by mahuet            #+#    #+#             */
/*   Updated: 2025/08/21 17:42:07 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			is_printable = 1;
			i++;
		}
		else
		{
			is_printable = 0;
			return (is_printable);
		}
	}
	return (is_printable);
}
