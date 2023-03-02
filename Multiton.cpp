#include "Multiton.h"

int Multiton::objects_count = 0;
int Multiton::size = 4;
std::map<int, Multiton*> Multiton::instances;

Multiton* Multiton::get_instance() {
	if (objects_count >= 0 && objects_count < size) {
		instances[objects_count] = new Multiton();
	}
	return instances[objects_count++ % size];
}

int Multiton::get_check() const {
	return check;
}

void Multiton::set_check(int obj) {
	check = obj;
}