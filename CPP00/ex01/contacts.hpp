/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:22:23 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 13:22:24 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>
#define st std::string

class contacts {
	private :
		st Fname;
		st Sname;
		st Nname;
		st Pnumber;
		st Dsecret;
	public :
		contacts();
		st getterFname();
		st getterSname();
		st getterNname();
		st getterPnumber();
		st getterDsecret();

		void setterFname(st Fame);
		void setterSname(st Same);
		void setterNname(st Name);
		void setterPnumber(st phone);
		void setterDsecret(st secret);
	~contacts();
};

#endif
