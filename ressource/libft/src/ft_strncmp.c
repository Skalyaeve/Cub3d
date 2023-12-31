/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <constantasg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 03:52:49 by anguinau          #+#    #+#             */
/*   Updated: 2022/06/15 03:53:35 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int ft_strncmp(char *src, char *to_find, int n)
{
        int i;

        i = 0;
        while (i < n && src[i] && to_find[i] && src[i] == to_find[i])
                i++;
        if (i == n || !to_find[i])
                return (1);
        return (0);
}
