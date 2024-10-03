// Мячин Валентин БАС2 9 вариант
#include <iostream>
#include <locale>


using namespace std;

int main() {

    int dot = 0, max=5;

    for (int i = 0; i < 5; ++i, ++dot, --max) {
        for (int j = 0; j < dot; ++j) { cout << ".."; }
        for (int j = 1; j <= max; ++j) {
            cout << j;
            if (j != max) { cout << '.'; }
        }
        cout << endl;
    }

    return 0;
}
