/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:52:23 by auguyon           #+#    #+#             */
/*   Updated: 2018/12/10 18:57:21 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i != n && *src)
	{
		*dest++ = *src++;
		i++;
	}
	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}
	return (dest - i);
}
