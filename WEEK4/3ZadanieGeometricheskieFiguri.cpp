#include <iostream>
#include <cmath>

using namespace std;

float rectangle(float length, float width) {
    return length * width;
}

float triangle(float base, float height) {
    return 0.5f * base * height;
}

float circle(float radius) {
    return 3.14 * pow(radius, 2);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    float area;
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
        area = rectangle(length, width);
        break;
    case 2:
        float base, height;
        cout << "Введите основание и высоту треугольника: ";
        cin >> base >> height;
        area = triangle(base, height);
        break;
    case 3:
        float radius;
        cout << "Введите радиус круга: ";
        cin >> radius;
        area = circle(radius);
        break;
    default:
        cout << "Неверный выбор." << endl;
        return 1;
    }
    cout << "Площадь выбранной фигуры: " << area << endl;
}
