/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:17:03 by atrujill          #+#    #+#             */
/*   Updated: 2022/05/12 13:13:12 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
