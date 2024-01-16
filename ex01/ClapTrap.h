/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:31:24 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 12:48:33 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CLAPTRAP
# define H_CLAPTRAP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ptr);
		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &rhs);

		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	setAttackDamage(unsigned int amount);
		void	setEnergyPoints(unsigned int amount);
		void	setHitPoints(unsigned int amount);
		void	changeName(std::string name);
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
