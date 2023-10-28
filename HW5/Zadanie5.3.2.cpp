#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void openf() {
    ifstream fin;
    string lines;
    int sdv;
    cout << "Введите на какое кол-во символовы свдинуты: ";
    cin >> sdv;
    fin.open("textinput.txt");
    if (fin.is_open()) {
        while (getline(fin, lines)) {
            for (int i = 0; i <= lines.size(); i++) {
                if (lines[i] >= 'A' && lines[i] <= 'Z') {
                    lines[i] = (lines[i] - 'A' + sdv) % 26 + 'A';
                }
                else if (lines[i] >= 'a' && lines[i] <= 'z') {
                    lines[i] = (lines[i] - 'a' + sdv) % 26 + 'a';
                }
                else {
                    lines[i] = lines[i];
                }
            }
            cout << lines << endl;
        }
    }
    else {
        cout << "Произошла ошибка";
    }
    fin.close();
}

void createf() {
    string lines;
    int linesc, sdv;
    ofstream fout;
    ifstream fin;
    fout.open("textinput.txt");
    cout << "Введите кол-во строк которые будут записаны: ";
    cin >> linesc;
    cout << "Введите на какое кол-во символов свдинуть: ";
    cin >> sdv;
    cin.get();
    if (fout.is_open()) {
        for (int i = 1; i <= linesc; i++) {
            getline(cin, lines);
            for (int i = 0; i <= lines.size(); i++) {
                if (lines[i] >= 'A' && lines[i] <= 'Z') {
                    lines[i] = (lines[i] - 'A' + sdv) % 26 + 'A';
                }
                else if (lines[i] >= 'a' && lines[i] <= 'z') {
                    lines[i] = (lines[i] - 'a' + sdv) % 26 + 'a';
                }
            }
            fout << lines << "\n";
        }
    }
    else {
        cout << "Произошла ошибка";
    }
    fout.close();
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
