/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_lifetime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 01:54:39 by nihuynh           #+#    #+#             */
/*   Updated: 2019/03/15 20:27:07 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** doit ut_lifetime.c ../libft.a -I../includes
*/

#include <stdlib.h>
#include <stdio.h>
#include "lifetime.h"

void	test_normal_case(void)
{
	t_lt	*lt __attribute__((cleanup(lt_destroy)));
	int		*tab;
	int		*tab1;
	int		*tab2;
	int		*tab3;

	lt = NULL;
	tab = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	tab1 = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	tab2 = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	tab3 = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
}

void	test_normal_detatch(void)
{
	t_lt	*lt __attribute__((cleanup(lt_destroy)));
	int		*tab;
	int		*tab1;
	int		*tab2;

	lt = NULL;
	tab = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	tab1 = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	tab2 = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	lt_detach(&lt, tab1);
	lt_detach(&lt, tab);
	lt_detach(&lt, tab2);
	free(tab);
	free(tab1);
	free(tab2);
}

void	test_detatch_empty_lt(void)
{
	t_lt	*lt __attribute__((cleanup(lt_destroy)));
	int		*tab;
	int		*tab1;

	lt = NULL;
	tab = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	tab1 = malloc(256 * sizeof(int));
	lt_detach(&lt, tab1);
}

void	test_double_destroy(void)
{
	t_lt	*lt __attribute__((cleanup(lt_destroy)));
	int		*tab;
	int		*tab1;

	lt = NULL;
	tab = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	tab1 = lt_add(&lt, malloc(256 * sizeof(int)), free, EXIT_ONFAIL);
	if (lt_destroy(&lt))
		printf("error durring destruct of the lt\n");
}

int		main(void)
{
	test_normal_case();
	test_normal_detatch();
	test_detatch_empty_lt();
	test_double_destroy();
	while (42)
		;
	return (0);
}
