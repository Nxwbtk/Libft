/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:36:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/21 22:07:46 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char	dest[90] = "Heeello";

	printf("%s", ft_strrchr(dest, 'e'));
	return (0);
}
