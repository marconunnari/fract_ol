/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 16:59:16 by mnunnari          #+#    #+#             */
/*   Updated: 2017/06/12 19:43:37 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft.h"
# include "mlx.h"

# define SW 800

typedef	struct	s_point
{
	int			x;
	int			y;
	int			z;
}				t_point;

typedef	struct	s_rect
{
	int			swap;
	int			dx;
	int			dy;
	int			ix;
	int			iy;
}				t_rect;

typedef	struct	s_image
{
	char		*img;
	int			bpp;
	int			linesize;
	int			endian;
}				t_image;

int				key_handler(int keycode, void *param);
void			fill_rect(t_image image, t_point p1, t_point p2, int color);
void			fill_pixel(t_image img, int x, int y, int color);
int				mouse_handler(int button, int x, int y, void *param);
#endif
