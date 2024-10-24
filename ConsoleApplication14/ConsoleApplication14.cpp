
#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int latte = 0;
    int americano = 0;

    
        int water, milk;

        cout << "Введите количество воды в мл: ";
        cin >> water;

        cout << "Введите количество молока в мл: ";
        cin >> milk;
        
        while (true) {
        
        string coffee;
        cout << "Выберите напиток (1 - americano, 2 - latte): ";
        cin >> coffee;

        if (coffee == "1") {
            if (water >= 300) {
                water -= 300;
                americano++;
                cout << "Ваш напиток готов." << endl;
            }
            else {
                cout << "Недостаточно воды для приготовления американо." << endl;
                break;
            }
        }
        else if (coffee == "2") {
            if (water >= 30 && milk >= 270) {
                water -= 30;
                milk -= 270;
                latte++;
                cout << "Ваш напиток готов." << endl;
            }
            else {
                cout << "Недостаточно ингредиентов для приготовления латте." << endl;
                break;
            }
        }
        else {
            cout << "Неверный выбор напитка." << endl;
        }

        cout << "***Отчёт*** " << endl;
        cout << "Ингредиентов осталось: " << endl;
        cout << "Вода " << water << " мл" << endl;
        cout << "Молоко " << milk << " мл" << endl;
        cout << "Кружек американо приготовлено: " << americano << endl;
        cout << "Кружек латте приготовлено: " << latte << endl;
    }

   
}
