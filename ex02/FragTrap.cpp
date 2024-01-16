/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:42:28 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 14:58:49 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " initialized!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy._name) {
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	*this = copy;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << _name << " just been destroyed!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " wants to high fives!" << std::endl;
}
