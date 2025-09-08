/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:16:00 by mahuet            #+#    #+#             */
/*   Updated: 2025/09/07 12:59:49 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char	*str = "hello world";
	char	*res = ft_strdup(str);
//	char	*res2 = strdup(str);

	printf("Source: %s | %p\n", str, str);
	printf("Felix Tries: %s | %p\n", res, res);
//	printf("Control: %s | %p\n", res2, res2);
	return 0;
}