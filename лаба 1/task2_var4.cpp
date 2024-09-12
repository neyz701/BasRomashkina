#include <locale>
#include <iostream>
#include <cmath>


// ��������� �������� � ��� ���������
const float pi = 3.14159265359;

int main() {

	// ������������� ����������� ����� ������� �� �������
	std::setlocale(LC_ALL, "rus");

	// ��������� ���������� ��� ������� z1 u z2 � ���� a
	float z1;
	float z2;
	float a;

	// ��������� �� ������� �������� ���� a
	std::cout << "������� �������� ���� a � ��������:" << std::endl;
	std::cin >> a;

	// ������� �������� ������ (4 �������)
	z1 = (std::sin(2 * a) + std::sin(5 * a) - std::sin(3 * a)) / (std::cos(a) + 1 - 2 * std::sin(2 * a) * std::sin(2 * a));
	z2 = (2 * std::sqrt(2) * std::cos(a) * sin(pi / 4 + 2 * a));

	// ������� ������������ �������� � �������
	std::cout << "Z1 = " << z1 << std::endl;
	std::cout << "Z2 = " << z2 << std::endl;
	
	return 0;
}