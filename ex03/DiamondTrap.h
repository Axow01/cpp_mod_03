/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:21:09 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 16:07:39 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_DIAMONDTRAP
# define H_DIAMONDTRAP

# include "FragTrap.h"
# include "ScavTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap {
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap(void);

		DiamondTrap	&operator=(const DiamondTrap &rhs);

		void	attack(const std::string &target);
		void	whoAmI(void);
	private:
		std::string	_name;
};

#endif
