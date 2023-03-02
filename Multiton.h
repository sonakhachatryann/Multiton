#ifndef MULTITON_H
#define MULTITON_H

#include <map>

class Multiton {
private:
	Multiton() = default;

public:
	static Multiton* get_instance();
	int get_check() const;
	void set_check(int);

public:
	int check;

private:
	static std::map<int, Multiton*> instances;
	static int objects_count;
	static int size;
};

#endif //MULTITON_H