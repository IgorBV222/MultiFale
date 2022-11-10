//structures.cpp
#include "structures.h"
#include <iostream>

void show_person(person& P){
	std::cout << "Имя: " << P.name << '\n';
	std::cout << "Возраст: " << P.age << '\n';
	std::cout << "Должность: " << P.position << '\n';
	std::cout << "Зарплата: " << P.salary << '\n';
}
