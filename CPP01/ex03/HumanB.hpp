/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:49 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:38:50 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include <iostream>
#include <string>
#include "weapon.hpp"

#define st_ std::string

class HumanB {
	private:
		st_		name;
		Weapon	*weapon;
	public:
		HumanB();
		HumanB( st_ nm );
		void	attack();
		void	setWeapon( Weapon &weapon );
		~HumanB();
};

#endif
