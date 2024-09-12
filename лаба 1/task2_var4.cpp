#include <locale>
#include <iostream>
#include <cmath>


// Объявляем значение п как константу
const float pi = 3.14159265359;

int main() {

	// Устанавливаем локализацию языка системы на русский
	std::setlocale(LC_ALL, "rus");

	// Объявляем переменные под функции z1 u z2 и угол a
	float z1;
	float z2;
	float a;

	// Принимаем из консоли значение угла a
	std::cout << "Введите значение угла a в радианах:" << std::endl;
	std::cin >> a;

	// Считаем значения формул (4 вариант)
	z1 = (std::sin(2 * a) + std::sin(5 * a) - std::sin(3 * a)) / (std::cos(a) + 1 - 2 * std::sin(2 * a) * std::sin(2 * a));
	z2 = (2 * std::sqrt(2) * std::cos(a) * sin(pi / 4 + 2 * a));

	// Выводим получившиеся значения в консоль
	std::cout << "Z1 = " << z1 << std::endl;
	std::cout << "Z2 = " << z2 << std::endl;
	
	return 0;
}