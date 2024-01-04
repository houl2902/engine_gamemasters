#include "Header.h"
#include "Entity.h"


Entity* create_entity(entity::id id) {
	Entity* temp_ent = new Entity{ id };
	return temp_ent;
}

int main(){
	entity::id id{ 20,45 };
	Entity* ent;
	ent = create_entity(id);
	ent->incr_gen();
	ent->print_id();
	delete ent;
	
}