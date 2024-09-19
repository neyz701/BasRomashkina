// Мячин Валентин БАС 2 вариант 9
#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "rus");

    int price, discount;

    cout << "Введите цену товара в рублях:\nцена = ";
    cin >> price;

    switch (price / 1000){
        case 0:
            discount = 5;
            break;
        case 1:
            discount = 7;
            break;
        case 2:
            discount = 9;
            break;
        default:
            discount = 10;
            break;
    }

    cout << "Скидка на данную сумму товара составляет " << discount << "%" << endl;

    return 0;
}
