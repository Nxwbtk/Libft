/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:48:53 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/06 05:48:53 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	sc_len;
	size_t	result;
	size_t	i;
	char	*sc;

	result = 0;
	i = 0;
	sc = ((char *)src);
	d_len = ft_strlen(dst);
	sc_len = ft_strlen(sc);
	if (size > d_len)
		result = sc_len + d_len;
	else
		result = sc_len + size;
	while (d_len < size)
	{
		dst[d_len] = sc[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (result);
}
