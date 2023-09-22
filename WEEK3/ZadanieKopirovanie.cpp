#include <iostream>
#include <fstream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string str;
	ofstream file;
	file.open("textfile.txt");
	file << "Запись в файл"<< endl;
	file << "еЩЕ ЗАпИсь";
	file.close();
	char buff;
	ifstream files("textfile.txt");
	if (files.is_open()) {
		while (getline(files, str)) {
			cout << str << endl;
		}
		files.close();
	}
	else {
		cout << "Файл не был открыт из-за ошибки";
	}
}
