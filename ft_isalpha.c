/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:56:56 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/05 19:43:15 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)

{
	if ((c <= 'z' && c >= 'a') || (c <= 'A' && c >= 'A'))
		return (1);
	return (0);
}