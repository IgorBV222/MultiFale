//functions.h
#pragma once

//Сумма двух чисел
double sum_AB(double A, double B);

//Вывод массива в консоль
void show_arr(int arr[], const int length);

//Модуль числа
template <typename T>
T absolute(T num) { //шаблонные функции описываются сразу в заголовочном файле
	return num < 0 ? -num : num;
}
//inlain описываются тоже здесь