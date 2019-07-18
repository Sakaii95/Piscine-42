/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 00:43:10 by tmarx             #+#    #+#             */
/*   Updated: 2019/07/17 23:37:51 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <fcntl.h>

int		ft_atoi(char *str);
void	ft_putstr(int chan, char *str);
void	ft_display_stdin(int char_count);
#endif