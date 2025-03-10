#include "Serialize.hpp"

Serializer::Serializer( void ) {
	
}

Serializer::Serializer( const Serializer &cpy ) {
	(void)cpy;
}

uintptr_t Serializer::serialize(Data* ptr) {
	if (!ptr)
		return (std::cout << "Error" << std::endl, 0);
	uintptr_t	casting;
	casting = reinterpret_cast<uintptr_t>(ptr);
	return (casting);
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data	*data;
	data = reinterpret_cast<Data*>(raw);
	return (data);
}

Serializer::~Serializer( void ) {
	
}