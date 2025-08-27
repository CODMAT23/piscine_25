/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:12:08 by mahuet            #+#    #+#             */
/*   Updated: 2025/08/22 14:26:18 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	if (to_find[d] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while (str[c + d] == to_find[d])
		{
			if (to_find[d + 1] == '\0')
				return (&str[c]);
			d++;
		}
		d = 0;
		c++;
	}
	return (0);
}
