/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:49:18 by mahuet            #+#    #+#             */
/*   Updated: 2025/09/07 15:45:03 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	cal_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		total_len;
	int		i;

	if (size == 0)
	{
		ret = malloc(sizeof(char));
		ret[0] = '\0';
		return (ret);
	}
	total_len = cal_total_len(size, strs, sep);
	ret = malloc(sizeof(char) * (total_len + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	ret[0] = '\0';
	while (i < size)
	{
		ft_strcat(ret, strs[i]);
		if (i < size - 1)
			ft_strcat(ret, sep);
		i++;
	}
	return (ret);
}

/*#include <stdio.h>

int	main(void)
{
	char *strs[4] = {"Hello", "World", "!", "Youpi"};
	char *sep = "-";
	char *ret;

	ret = ft_strjoin(4, strs, sep);
	printf("%s\n", ret);
	free(ret);
	return (0);
}*/
