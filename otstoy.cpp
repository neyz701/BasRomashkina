// Мячин Валентин БАС2 вариант 9
#include <iostream>
#include <locale>


using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    double sum = 0;
    int n, sign = -1;

    cout << "Введите количество элементов n:\nn = ";
    cin >> n;

    for(int i = 1; i <= n; ++i) {

        sum += (double)sign / (i * i * (i + 3));
        sign *= -1;
    }

    cout << fixed;
    cout.precision(10);

    cout << "Сумма ряда = " << sum << endl;

    return 0;
}
/*
---------------------------------I
Test 1:

Введите количество элементов n:
n = 1
Сумма ряда = -0.2500000000
---------------------------------I
Test 2:

Введите количество элементов n:
n = 2
Сумма ряда = -0.2000000000
---------------------------------I
Test 3:

n = 0
Сумма ряда = 0.0000000000
---------------------------------I
 */
