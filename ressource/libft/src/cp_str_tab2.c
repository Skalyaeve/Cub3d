/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cp_str_tab2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <constantasg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 03:56:20 by anguinau          #+#    #+#             */
/*   Updated: 2022/07/04 23:01:08 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int putstr_in_tab(char *src, char **dst)
{
        int i;

        i = -1;
        while (src[++i])
                continue;
        *dst = malloc(sizeof(char) * i + 1);
        if (!*dst)
                return (0);
        (*dst)[i] = '\0';
        i = -1;
        while (src[++i])
                (*dst)[i] = src[i];
        return (1);
}

char **cp_str_tab2(char **src)
{
        char **dst;
        int i;

        i = -1;
        while (src[++i])
                continue;
        dst = malloc(sizeof(char *) * (i + 1));
        if (!dst)
                return (NULL);
        dst[i] = NULL;
        i = -1;
        while (src[++i])
        {
                if (!putstr_in_tab(src[i], &dst[i]))
                {
                        while (--i >= 0)
                                free(dst[i]);
                        free(dst);
                        return (NULL);
                }
        }
        return (dst);
}
