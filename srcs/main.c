/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 22:00:10 by mnunnari          #+#    #+#             */
/*   Updated: 2017/06/10 19:38:01 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		start(char *fractal)
{
	(void)fractal;
	void			*mlx;
	void			*win;
	void			*imageptr;
	t_image			image;

	mlx = mlx_init();
	win = mlx_new_window(mlx, SW, SW, "Fract'ol");
	imageptr = mlx_new_image(mlx, SW, SW - 1);
	image.img = mlx_get_data_addr(imageptr, &image.bpp, &image.linesize, &image.endian);
	drawline(image, (t_point){10, 10, 10}, (t_point){100, 100, 100});
	mlx_put_image_to_window(mlx, win, imageptr, 0, 0);
	mlx_key_hook(win, key_handler, NULL);
	mlx_mouse_hook(win, mouse_handler, NULL);
	mlx_loop(mlx);
}

int				main(int argc, char **argv)
{
	if (argc != 2)
		ft_printf("usage: fdf fractal\n");
	else
		start(argv[1]);
}
