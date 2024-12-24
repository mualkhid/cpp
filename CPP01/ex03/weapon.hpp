/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:39:09 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/07 20:26:02 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#define st_ std::string

class Weapon {
	private :
		st_ type;
	public :
		Weapon();
		Weapon( st_ name );
		const st_& getType();
		void	setType( st_ setter);
};

#endif
