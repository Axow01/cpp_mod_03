/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:20:27 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 14:45:52 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

int	main(void) {
	ClapTrap	jean("Jean");
	ClapTrap	bob("Bob");
	ScavTrap	test("bobby");


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
	test.takeDamage(10);
	test.attack("testTarget");
	test.beRepaired(500);
	test.takeDamage(250);
	test.attack("Jean");
	return (0);
}
