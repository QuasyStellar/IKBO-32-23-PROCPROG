#include <iostream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //определение переменных
    char t;
    bool d, s, l;
    //запрос ввода пользователя
    cout << "Сейчас день? (Y/N): ";
    cin >> t;
    //обработка введенного значения
    if (tolower(t) == 'y') { d = 1; }
    else if (tolower(t) == 'n') { d = 0; }
    else {
        cout << "Некорректный ввод";
        return 0;
    }
    cout << "Шторы раздвинуты? (Y/N): ";
    cin >> t;
    //обработка введенного значения
    if (tolower(t) == 'y') { s = 1; }
    else if (tolower(t) == 'n') { s = 0; }
    else {
        cout << "Некорректный ввод";
        return 0;
    }
    cout << "Лампа включена? (Y/N): ";
    cin >> t;
    //обработка введенного значения
    if (tolower(t) == 'y') { l = 1; }
    else if (tolower(t) == 'n') { l = 0; }
    else {
        cout << "Некорректный ввод";
        return 0;
    }
    //формула определяющая освещение комнаты
    if ((d * s) + l){
        cout << "Сейчас светло";
    }
    else {
        cout << "Сейчас темно";
    }
}
