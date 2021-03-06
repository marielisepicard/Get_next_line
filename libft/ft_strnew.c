/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:36:08 by mpicard           #+#    #+#             */
/*   Updated: 2018/12/21 16:05:25 by mpicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(new, size);
	new[size] = '\0';
	return (new);
}
