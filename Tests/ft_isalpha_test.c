/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:40 by atran             #+#    #+#             */
/*   Updated: 2024/11/08 17:41:42 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isalpha_test(void)
{
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('9') == 0);
	assert(ft_isalpha(200) == 0);
	assert(ft_isalpha(0) == 0);
	assert(ft_isalpha('A') == 1);
	printf("PASS\n");
}
