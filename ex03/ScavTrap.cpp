/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:20:14 by sklaokli          #+#    #+#             */
/*   Updated: 2025/11/23 23:28:37 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created." << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other ) {
	std::cout << "ScavTrap " << _name << " has been copied." << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other ) {
	ClapTrap::operator=( other );
	std::cout << "ScavTrap " << _name << " has been assigned." << std::endl;
	return ( *this );
}

void	ScavTrap::attack( const std::string& target ) {
	if ( _energyPoints == 0 || _hitPoints == 0 ) {
		std::cout << "ScavTrap " << _name << " cannot attack." << std::endl;
	}
	else {
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << _name << " has been destroyed." << std::endl;
}
