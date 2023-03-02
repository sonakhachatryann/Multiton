#include <iostream>

#include "Multiton.h"

int main() {

	Multiton* m1 = Multiton::get_instance();
	m1->set_check(1);
	std::cout << m1->get_check() << std::endl;
	Multiton* m2 = Multiton::get_instance();
	m2->set_check(2);
	std::cout << m2->get_check() << std::endl;
	Multiton* m3 = Multiton::get_instance();
	m3->set_check(3);
	std::cout << m3->get_check() << std::endl;
	Multiton* m4 = Multiton::get_instance();
	m4->set_check(4);
	std::cout << m4->get_check() << std::endl;
	Multiton* m5 = Multiton::get_instance();
	std::cout << m5->get_check() << std::endl;
	Multiton* m6 = Multiton::get_instance();
	std::cout << m6->get_check() << std::endl;

	return 0;
}