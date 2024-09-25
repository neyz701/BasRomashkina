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
    
    /*
     * Пока А <= B выводим куб В и уменьшаем В на 1
     */
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
A = 0
В = 6
216
125
64
27
8
1
0

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
