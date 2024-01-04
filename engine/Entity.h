#pragma once
#include "Header.h"


class Entity 
{
public:
	entity::id id;
	void print_id();
	int incr_gen();
	~Entity();
	Entity(entity::id _id);
};