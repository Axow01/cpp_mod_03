/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:24 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 12:18:48 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << " just been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ptr): _name(ptr._name), _hitPoints(ptr._hitPoints), _energyPoints(ptr._energyPoints), _attackDamage(ptr._attackDamage) {
	*this = ptr;
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (_hitPoints > 0 && _energyPoints > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	unsigned int	realAmount = amount;

	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage!" << std::endl;
	if (amount > _hitPoints)
		realAmount = _hitPoints;
	_hitPoints -= realAmount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ClapTrap " << _name << " repaired itself, " << amount << " hit points added!" << std::endl;
		_hitPoints += amount;
	}
}

void	ClapTrap::setAttackDamage(unsigned int amount) {
	_attackDamage = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount) {
	_energyPoints = amount;
}

void	ClapTrap::setHitPoints(unsigned int amount) {
	_hitPoints = amount;
}

void	ClapTrap::changeName(std::string name) {
	_name = name;
}
