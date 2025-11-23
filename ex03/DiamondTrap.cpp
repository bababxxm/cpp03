/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:12:27 by sklaokli          #+#    #+#             */
/*   Updated: 2025/11/23 23:28:40 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap() {
	name = "Default";
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << name << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(), ScavTrap(), FragTrap() {
	name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << name << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other ) {
	ClapTrap::operator=( other );
	name = other.name;
	std::cout << "DiamondTrap " << name << " has been copied." << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap " << name << " has been destroyed." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other ) {
	ClapTrap::operator=( other );
	name = other.name;
	return ( *this );
}

void	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void ) const {
	std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
