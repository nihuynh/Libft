/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btwf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 01:14:10 by nihuynh           #+#    #+#             */
/*   Updated: 2019/06/19 01:15:30 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

float	ft_btwf(float value, float limit1, float limit2)
{
	return (value >= fminf(limit1, limit2) && value <= fmaxf(limit1, limit2));
}
