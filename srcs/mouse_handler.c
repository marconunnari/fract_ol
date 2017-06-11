/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 16:57:13 by mnunnari          #+#    #+#             */
/*   Updated: 2017/06/10 17:00:53 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		mouse_handler(int button, int x, int y, void *param)
{
	(void)param;
	ft_printfnl("muouse_handler: button %d, x %d, y %d", button, x, y);
	return (0);
}
