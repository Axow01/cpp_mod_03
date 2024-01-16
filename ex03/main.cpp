/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:20:27 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 16:10:42 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

int	main(void) {
	DiamondTrap	dd("jeanbon");

	dd.attack("bob");
	dd.takeDamage(10);
	dd.whoAmI();
	return (0);
}
