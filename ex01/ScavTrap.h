/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:31:34 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 13:10:10 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_SCAVTRAP
# define H_SCAVTRAPa

# include "ClapTrap.h"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);

		ScavTrap			&operator=(const ScavTrap &rhs);

		void	guardGate(void);
		void	attack(const std::string &target);
	private:
};

#endif
