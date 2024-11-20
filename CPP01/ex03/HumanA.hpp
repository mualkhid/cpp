/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:34 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:38:35 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include <iostream>
#include <string>
#include "weapon.hpp"

#define st_ std::string

class HumanA {
	private:
		st_		name;
		Weapon	&weapon;
	public:
		HumanA( st_ nm, Weapon &weapon );
		void	attack();
		~HumanA();
};

#endif
