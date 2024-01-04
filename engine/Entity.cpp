#include "Header.h"
#include "Entity.h"



void Entity::print_id(){
	std::cout << this->id.entity_id << std::endl;
	std::cout << this->id.gen_id << std::endl;
}

int Entity::incr_gen() {
	this->id.gen_id++;
	std::cout << this->id.gen_id << std::endl;
	return this->id.gen_id;
}

Entity::~Entity() {
	std::cout << this->id.entity_id << std::endl;
	std::cout << this->id.gen_id << std::endl;
	std::cout << "Entity was deleted" << std::endl;
}

Entity::Entity(entity::id _id) {
	id = _id;
	std::cout << this->id.entity_id << std::endl;
	std::cout << this->id.gen_id << std::endl;
	std::cout << "Entity was created" << std::endl;
			
}

