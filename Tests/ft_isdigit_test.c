/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:40 by atran             #+#    #+#             */
/*   Updated: 2024/11/08 17:42:17 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isdigit_test(void)
{
	assert(ft_isdigit('a') == 0);
	assert(ft_isdigit('9') == 1);
	assert(ft_isdigit(200) == 0);
	assert(ft_isdigit(0) == 0);
	assert(ft_isdigit('0') == 1);
	assert(ft_isdigit('A') == 0);
	printf("PASS\n");
}
