/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:07:01 by kmohamma          #+#    #+#             */
/*   Updated: 2019/06/03 13:29:56 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if (s && *s && f && *f)
		while (*s)
			f(i++, s++);
}
