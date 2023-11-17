#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int n;
    cout << "Кол-во предметов: ";
    cin >> n;
    string*** zapis = new string * *[2];
    for (int i = 0; i < 2; ++i) {
        zapis[i] = new string * [6];
        for (int j = 0; j < 6; ++j) {
            zapis[i][j] = new string[n];
        }
    }

    for (int i = 0; i < 2; ++i) {
        string name, bdate, purs, term, group, marks;
        cout << "Введите через пробел имя, дату рождения, год поступления, курс, группу: ";
        cin >> zapis[i][0][0] >> zapis[i][1][0] >> zapis[i][2][0] >> zapis[i][3][0] >> zapis[i][4][0];
        cin.get();

        for (int j = 0; j < n; ++j) {
            cout << "Введите все годовые оценки за предмет " << j + 1 << " через пробел: ";
            getline(cin, zapis[i][5][j]);
        }
    }

    cout << "Имя\t| Дата рождения\t| год поступления\t| курс\t| группа\t| ";
    for (int i = 0; i < n; i++) {
        cout << "Предмет " << i << "\t\t|";
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < 2; ++i) {
        cout << zapis[i][0][0]<< "\t|" << zapis[i][1][0] << "\t\t|" << zapis[i][2][0] << "\t\t\t|" << zapis[i][3][0] << "\t|" << zapis[i][4][0] << "\t|";
        for (int j = 1; j <= n; ++j) {
            cout << zapis[i][5][j-1] << "\t\t|";
        }
        cout << endl;
    }
    cout << "Отличники:\n";
    for (int i = 0; i < 2; ++i) {
        int sum;
        bool flag = true;
        for (int j = 0; j < n; ++j) {
            for (char c : zapis[i][5][j]) {
                if (isdigit(c)) {
                    if (c != '5') {
                        flag = false;
                    }
                }
            }
        }
        if (flag) {
            cout << zapis[i][0][0] << "\t|" << zapis[i][1][0] << "\t\t|" << zapis[i][2][0] << "\t\t\t|" << zapis[i][3][0] << "\t|" << zapis[i][4][0] << "\t|";
            for (int j = 1; j <= n; ++j) {
                cout << zapis[i][5][j - 1] << "\t\t|";
            }
            cout << endl;
        }
    }
}
