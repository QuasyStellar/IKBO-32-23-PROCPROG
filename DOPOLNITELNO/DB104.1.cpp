#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int choice;
    cout << "Выберите режим ввода данных:\n";
    cout << "1. Ввести данные вручную\n";
    cout << "2. Прочитать данные из файла\n";
    cin >> choice;

    int n;
    cout << "Кол-во предметов: ";
    cin >> n;

    string*** zapis = new string**[2];
    for (int i = 0; i < 2; ++i) {
        zapis[i] = new string*[6];
        for (int j = 0; j < 6; ++j) {
            zapis[i][j] = new string[n];
        }
    }

    if (choice == 1) {
        ofstream outputFile("input.txt");
        outputFile << n;
        for (int i = 0; i < 2; ++i) {
            string name, bdate, purs, term, group, marks;
            cout << "Введите через пробел имя, дату рождения, год поступления, курс, группу: ";
            cin >> zapis[i][0][0] >> zapis[i][1][0] >> zapis[i][2][0] >> zapis[i][3][0] >> zapis[i][4][0];
            outputFile << zapis[i][0][0]<< ":"<< zapis[i][1][0] << ":"<<zapis[i][2][0]<< ":" << zapis[i][3][0] << ":"<<zapis[i][4][0] << ":";
            cin.get();

            for (int j = 0; j < n; ++j) {
                cout << "Введите все годовые оценки за предмет " << j + 1 << " через пробел: ";
                getline(cin, zapis[i][5][j]);
                outputFile << zapis[i][5][j] << ":";
            }
        outputFile << endl;
        }
        outputFile.close();

    } else if (choice == 2) {
        ifstream inputFile("input.txt");
        if (!inputFile.is_open()) {
            cout << "Ошибка при открытии\n";
            return 1;
        }

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 5; ++j) {
                getline(inputFile, zapis[i][j][0], ':');
            }

            for (int j = 0; j < n; ++j) {
                getline(inputFile, zapis[i][5][j], ':');
            }
            inputFile.ignore();
        }

        inputFile.close();
    } else {
        cout << "Некорректный выбор.\n";
        return 1;
    }

    cout << "Имя\t| Дата рождения\t| год поступления\t| курс\t| группа\t| ";
    for (int i = 0; i < n; i++) {
        cout << "Предмет " << i << "\t\t|";
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < 2; ++i) {
        cout << zapis[i][0][0] << "\t|" << zapis[i][1][0] << "\t\t|" << zapis[i][2][0] << "\t\t\t|" << zapis[i][3][0] << "\t|" << zapis[i][4][0] << "\t|";
        for (int j = 0; j < n; ++j) {
            cout << zapis[i][j + 5][0] << "\t\t|";
        }
        cout << endl;
    }

    cout << "Отличники:\n";
    for (int i = 0; i < 2; ++i) {
        int sum;
        bool flag = true;
        for (int j = 0; j < n; ++j) {
            for (int c =0; c < zapis[i][5][j].size(); c++) {
                if (isdigit(zapis[i][5][j][c])) {
                    if (zapis[i][5][j][c] != '5') {
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
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            delete[] zapis[i][j];
        }
        delete[] zapis[i];
    }
    delete[] zapis;

    return 0;
}
