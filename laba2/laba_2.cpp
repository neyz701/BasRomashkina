// Мячин Валентин БАС 2 вариант 9

#include <iostream>
#include <locale>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "rus");
    
    int k;
    
    cout << "Введите достоинство карты k:\nk = ";
    cin >> k;
    
    
    
    switch (k){
        case 6:
            cout << "шестёрка" << endl;
            break;
        case 7:
            cout << "семёрка" << endl;
            break;
        case 8:
            cout << "восьмёрка" << endl;
            break;
        case 9:
            cout << "девятка" << endl;
            break;
        case 10:
            cout << "десятка" << endl;
            break;
        case 11:
            cout << "валет" << endl;
            break;
        case 12:
            cout << "дама" << endl;
            break;
        case 13:
            cout << "король" << endl;
            break;
        case 14:
            cout << "туз" << endl;
            break;
        
        default:
            cout << "Карта с таким достоинством не существует" << endl;
    }

    return 0;
}

/*
 * Test 1:
 Введите достоинство карты k:
 k = 6
 шестёрка
 
 * Test 2:
 Введите достоинство карты k:
 k = 7
 семёрка
 
 * Test 3:
 Введите достоинство карты k:
 k = 8
 восьмёрка

 * Test 4:
 Введите достоинство карты k:
 k = 9
 девятка
 
 * Test 5:
 Введите достоинство карты k:
 k = 10
 десятка
 
 * Test 6:
 Введите достоинство карты k:
 k = 11
 валет
 
 * Test 7:
 Введите достоинство карты k:
 k = 12
 дама
 
 * Test 8:
 Введите достоинство карты k:
 k = 13
 король
 
 * Test 9:
 Введите достоинство карты k:
 k = 14
 туз
 
 * Test 10:
 Введите достоинство карты k:
 k = 654
 Карта с таким дос�оинством не существует
 */
