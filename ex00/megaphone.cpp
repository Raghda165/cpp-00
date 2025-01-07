/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:42:32 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/09 13:57:35 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int ac ,char **av)
{
	int i;
	int j;
	char c;
	j = 1;
	if (ac == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (j != ac)
	{
		i = 0;
		while (av[j][i])
		{
			c = std::toupper(av[j][i]);
			std::cout<< c ;
			i++;
		}
		j++;
	}
}