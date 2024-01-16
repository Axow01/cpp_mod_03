/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:20:27 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/16 15:13:25 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

int	main(void) {
	FragTrap	j("Jean");

	j.takeDamage(24);
	j.attack("Roberto");
	j.beRepaired(10);
	j.highFivesGuys();
	return (0);
}
