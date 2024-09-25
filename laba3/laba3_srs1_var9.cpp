// Мячин Валентин БАС 2 вариант 9
#include <iostream>
#include <locale>
#include <cmath>


using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int a, b;

    cout << "Введите числа А и В:\nA = ";
    cin >> a;
    cout << "В = ";
    cin >> b;

    if (a > b) {
        cout << "По условию задачи А не может быть больше В!" << endl;
        return 1;
    }

    while (a <= b) {
        cout << pow(b, 3) << endl;
        --b;
    }

    return 0;
}

/*
Test 1:
Введите числа А и В:
A = -10
В = -5
-125
-216
-343
-512
-729
-1000

Test 2:
Введите числа А и В:
A = 3
В = 2
По условию задачи А не может быть больше В!

Test 3:
A = 1
В = 7
343
216
125
64
27
8
1
 */
