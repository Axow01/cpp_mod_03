/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:32:42 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 13:25:42 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << _name << " just initialised!" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy._name) {
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	*this = copy;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " now in gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << _name << " just been destroyed!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}
