#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); 
    float h, R, r, l;                   //определяем переменные
    cout << "Введите высоту, радиус основания и вершины в формате 'h R r': "; //запрос ввода пользователя
    cin >> h >> R >> r;
    l = sqrt((R - r) * (R - r) + (h * h)); //образующая конуса
    cout << "Обьем конуса = " << (1.0 / 3.0) * 3.141592 * h * (pow(R, 2) + (R * r) + pow(r, 2)) << " площадь поверхности = " << 3.141592 * (R*R + (R+r)*l+r*r);
}
