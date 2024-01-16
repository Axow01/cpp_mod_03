/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:20:27 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 12:26:43 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main(void) {
	ClapTrap	jean("Jean");
	ClapTrap	bob("Bob");

	jean.setAttackDamage(2);
	bob.setAttackDamage(4);
	bob.attack("Roberto");
	bob.takeDamage(7);
	bob.beRepaired(20);
	jean.takeDamage(9);
	jean.attack("Pablo");
	jean.takeDamage(20);
	jean.attack("Marc"); // Should not attack because dead.
	jean.beRepaired(10); // Should not repair because dead.
	return (0);
}
