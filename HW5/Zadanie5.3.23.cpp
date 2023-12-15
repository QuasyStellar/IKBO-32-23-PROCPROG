#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void openf() {
    ifstream fin;
    string lines, soglas = "бвгджзйклмнпрстфхцчшщbcdfghjklmnpqrstvwxz";
    char letters[41][2], maxConsonant = letters[0][0];
    int linesc, maxCount = letters[0][1];
    for (int i = 0; i < 41; ++i) {
        letters[i][0] = soglas[i];
        letters[i][1] = 0;
    }
    fin.open("textinput.txt");
    if (fin.is_open()) {
        while (getline(fin, lines)) {
            for (char c : lines) {
                for (int i = 0; i < 41; ++i) {
                    if (c == letters[i][0] || tolower(c) == letters[i][0]) {
                        letters[i][1]++;
                        break;
                    }
                }
            }
        }


        for (int i = 1; i < 41; ++i) {
            if (letters[i][1] > maxCount) {
                maxCount = letters[i][1];
                maxConsonant = letters[i][0];
            }
        }
        cout << "Наиболее часто встречающаяся согласная буква: " << maxConsonant << " Количество вхождений: " << maxCount << endl;
    }
    else {
        cout << "Произошла ошибка при открытии файла." << endl;
    }
    fin.close();
}

void createf() {
    string lines, soglas = "бвгджзйклмнпрстфхцчшщbcdfghjklmnpqrstvwxz";
    char letters[41][2], maxConsonant = letters[0][0];
    int linesc, maxCount = letters[0][1];
    ofstream fout;
    ifstream fin;
    for (int i = 0; i < 41; ++i) {
        letters[i][0] = soglas[i];
        letters[i][1] = 0;
    }
    fout.open("textinput.txt");
    cout << "Введите кол-во строк которые будут записаны: ";
    cin >> linesc;
    cin.get();
    if (fout.is_open()) {
        for (int i = 1; i <= linesc; i++) {
            getline(cin, lines);
            fout << lines << "\n";
        }
    }
    else {
        cout << "Произошла ошибка";
    }
    fout.close();
    fin.open("textinput.txt");
    if (fin.is_open()) {
        while (getline(fin, lines)) {
            for (char c : lines) {
                for (int i = 0; i < 41; ++i) {
                    if (c == letters[i][0] || tolower(c) == letters[i][0]) {
                        letters[i][1]++;
                        break;
                    }
                }
            }
        }
        

        for (int i = 1; i < 41; ++i) {
            if (letters[i][1] > maxCount) {
                maxCount = letters[i][1];
                maxConsonant = letters[i][0];
            }
        }
        cout << "Наиболее часто встречающаяся согласная буква: " << maxConsonant << " Количество вхождений: " << maxCount << endl;
    }
    else {
        cout << "Произошла ошибка при открытии файла." << endl;
    }

    fin.close();
}

int main() {
    setlocale(LC_ALL, "");
    char ans;
    cout << "Открыть файл или создать? o/c: ";
    cin >> ans;
    switch (ans) {
    case 'o': openf(); break;
    case 'c': createf(); break;
    default: cout << "Неверный ввод";
    }
}
