/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:22:17 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 13:22:19 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"


contacts::contacts() {

}
contacts::~contacts() {

}

void contacts::setterFname(st Fame) {
	Fname = Fame;
}
void contacts::setterSname(st Same) {
	Sname = Same;
}
void contacts::setterNname(st Name) {
	Nname = Name;
}
void contacts::setterPnumber(st phone) {
	Pnumber = phone;
}
void contacts::setterDsecret(st secret) {
	Dsecret = secret;
}
st contacts::getterFname() {
	return (Fname);
}
st contacts::getterSname() {
	return (Sname);
}
st contacts::getterNname() {
	return (Nname);
}
st contacts::getterPnumber() {
	return (Pnumber);
}
st contacts::getterDsecret() {
	return (Dsecret);
}
