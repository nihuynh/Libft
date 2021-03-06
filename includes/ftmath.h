/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 01:09:18 by nihuynh           #+#    #+#             */
/*   Updated: 2019/06/19 01:14:59 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATH_H
# define FTMATH_H

int		ft_abs(int value);
float	ft_absf(float value);
int		ft_btw(int value, int a, int b);
int		ft_min(int a, int b);
float	ft_minf(float x, float y);
int		ft_max(int a, int b);
float	ft_maxf(float x, float y);
int		ft_clamp(int value, int low, int high);
float	ft_clampf(float value, float low, float high);
float	ft_btwf(float value, float limit1, float limit2);

#endif
