/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zoom.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmurovec <jmurovec@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/26 16:19:00 by jmurovec      #+#    #+#                 */
/*   Updated: 2021/10/27 14:03:59 by jmurovec      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "fractol.h"

int	zoom_in(t_window *w)
{
//	if (w->key[FORW] == TRUE)
	printf(" zoom in...  \n");

	w->range.min_real *= 0.9;
	w->range.max_real *= 0.9;
	w->range.min_imgn *= 0.9;
	w->range.max_imgn *= 0.9;

	draw_image(w);
	return (0);
}

int	zoom_out(t_window *w)
{

//	if (w->key[BACKW] == TRUE)
	printf("zoom out... \n");

	w->range.min_real /= 0.9;
	w->range.max_real /= 0.9;
	w->range.min_imgn /= 0.9;
	w->range.max_imgn /= 0.9;

	draw_image(w);
	return (0);
}

