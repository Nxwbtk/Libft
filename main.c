/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:36:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/22 21:35:49 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char	*dest = "tripouille";

	//printf("%s\n", &dest[1]);
	printf("%s\n", ft_strrchr(dest, 't'));
	return (0);
}
