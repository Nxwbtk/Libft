/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:10:30 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/04 18:26:35 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}
