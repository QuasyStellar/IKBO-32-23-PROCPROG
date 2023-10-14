#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    double A[3][4] = {
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0} };
    double B[4][2] = {
        {1.2, 0.5},
        {2.8, 0.4},
        {5, 1},
        {2, 1.5} };
    double C[3][2] = { 0 };
    int maxProd = 0;
    int minProd = 0;
    double maxMoney = 0;
    double minMoney = 10000000;
    double maxComss = 0;
    double minComss = 10000000;
    double sumMoney = 0;
    double sumComss = 0;
    double allMoney = 0;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 2; y++) {
            for (int i = 0; i < 4; i++) {
                C[x][y] += A[x][i] * B[i][y];
            }
        }
    }

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 2; y++) {
            cout << C[x][y] << "         ";
        }
        cout << endl;
    }

    for (int x = 0; x < 3; x++) {
        if (C[x][0] > maxMoney) {
            maxProd = x + 1;
            maxMoney = C[x][0];
        }
        if (C[x][0] < minMoney) {
            minProd = x + 1;
            minMoney = C[x][0];
        }
    }
    cout << "Продавец " << maxProd << " выручил больше всего денег с продажи: " << maxMoney << endl;
    cout << "Продавец " << minProd << " выручил меньше всего денег с продажи: " << minMoney << endl;

    maxProd = 0;
    minProd = 0;
    for (int x = 0; x < 3; x++) {
        if (C[x][1] > maxComss) {
            maxProd = x + 1;
            maxComss = C[x][1];
        }
        if (C[x][1] < minComss) {
            minProd = x + 1;
            minComss = C[x][1];
        }
    }
    cout << "Продавец " << maxProd << " Получил наибольшие комиссионные " << maxComss << endl;
    cout << "Продавец " << minProd << " Получил наименьшие комиссионные " << minComss << endl;

    for (int x = 0; x < 3; x++) {
        sumMoney += C[x][0];
    }
    cout << "Общая сумма: " << sumMoney << endl;

    for (int x = 0; x < 3; x++) {
        sumComss += C[x][1];
    }
    cout << "Сумма коммисионных: " << sumComss << endl;

    for (int x = 0; x < 3; x++) {
        allMoney += C[x][0] + C[x][1];
    }
    cout << "Общая сумма денег, прошедших через руки продавцов: " << allMoney << endl;
}
