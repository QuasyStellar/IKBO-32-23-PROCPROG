#include <iostream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
//определение переменных
    float b, c;
//запрос ввода пользователя
    cout << "Введите числа b и c в формате 'b c' для решения уравнения bx+c = 0: ";
    cin >> b >> c;
//проверка Исключающая деление на 0
    if (b != 0) {
//проВерка для предотврАщения вывода -0
        if (c == 0) { cout << "Для b = " << b << " и c = " << c << " x = " << 0 << endl; }
        else {
            cout << "Для b = " << b << " и c = " << c << " x = " << -c / b << endl; }
    }
//проверка возможНых исходов при b=0
    else if (c != 0) {
        cout << "Для b = " << b << " и c = " << c << " корней нет" << endl;
    }
    else {
        cout << "Для b = " << b << " и c = " << c << " x - любое число" << endl;
    }
}
