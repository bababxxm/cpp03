/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:12:29 by sklaokli          #+#    #+#             */
/*   Updated: 2025/11/23 23:18:18 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:

		std::string	name;

	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& other );
		~DiamondTrap( void );

		DiamondTrap&	operator=( const DiamondTrap& other );

		void	attack( const std::string& target );
		void	whoAmI( void ) const;

};

#endif
