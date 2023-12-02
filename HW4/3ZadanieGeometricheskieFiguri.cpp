#include <iostream>
#include <cmath>

using namespace std;

float rectangle(float length, float width) {
    return length * width;
}

float triangle(float st1, float st2, float st3) {
    float p = (st1 + st2 + st3) / 2.0f;
    return sqrt(p*(p-st1)*(p-st2)*(p-st3));
}

float circle(float radius) {
    return 3.14 * pow(radius, 2);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    float area = 0;
    cout << "Выберите фигуру для вычисления площади:" << endl;
    cout << "1. Прямоугольник" << endl;
    cout << "2. Треугольник" << endl;
    cout << "3. Круг" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        float length, width;
        cout << "Введите длину и ширину прямоугольника: ";
        cin >> length >> width;
        if (length > 0 and width > 0) {
            area = rectangle(length, width);
        }
        else {
            cout << "Некорректные значения";
        }
        break;
    case 2:
        float st1, st2, st3;
        cout << "Введите все стороны треугольника: ";
        cin >> st1 >> st2 >> st3;
        if (st1 > 0 and st2 > 0 and st3 > 0 and st1 + st2 > st3 and st1 + st3 > st2 and st2 + st3 > st1) {
            area = triangle(st1, st2, st3);
        }
        else {
            cout << "Некорректные значения";
        }
        break;
    case 3:
        float radius;
        cout << "Введите радиус круга: ";
        cin >> radius;
        if (radius > 0) {
            area = circle(radius);
        }
        else {
            cout << "Некорректные значения";
        }
        break;
    default:
        cout << "Неверный выбор." << endl;
        return 1;
    }
    if (area){
    cout << "Площадь выбранной фигуры: " << area << endl; 
    }
}
