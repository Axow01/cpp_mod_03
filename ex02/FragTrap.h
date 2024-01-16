/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:42:19 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 14:50:34 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_FRAGTRAP
# define H_FRAGTRAP

# include "ScavTrap.h"

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);

		FragTrap	&operator=(const FragTrap &rhs);

		void	highFivesGuys(void);
	private:
};

#endif
