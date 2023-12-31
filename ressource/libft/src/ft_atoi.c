/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <constantasg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:56:48 by anguinau          #+#    #+#             */
/*   Updated: 2022/06/30 01:40:07 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

long long ft_atoi(const char *nptr)
{
        long long nbr;
        int neg;
        int i;

        nbr = 0;
        neg = 1;
        i = 0;
        if (nptr[i] == '-')
        {
                neg *= -1;
                i++;
        }
        while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
        {
                nbr *= 10;
                nbr += (long long)nptr[i] - 48;
                i++;
        }
        return (nbr * neg);
}
