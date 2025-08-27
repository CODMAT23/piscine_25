/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahuet <mahuet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:24:53 by mahuet            #+#    #+#             */
/*   Updated: 2025/08/20 11:58:21 by mahuet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}
void	ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a < 99)
    {
        b = a + 1;
        while (b < 100)
        {
            ft_putchar(a / 10 + '0');
            ft_putchar(a % 10 + '0');
            ft_putchar(' ');
            ft_putchar(b / 10 + '0');
            ft_putchar(b % 10 + '0');
            if (a != 98 || b != 99)
            {
                write(1, ", ", 2);
            }
            b++;
        }
        a++;
    }
}
