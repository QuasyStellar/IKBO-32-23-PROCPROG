#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    cout << "Введите буквы английского алфавита:\n";
    cin >> str;
    for (int i = 0; i < str.size(); i+=1)
    {
        for (int c = 0; c < str.size() - 1; c+=1)
        {
            if (str[c] > str[c + 1]) 
            {
                int a = str[c]; // замена свапа
                str[c] = str[c + 1]; // замена свапа
                str[c + 1] = a;   // замена свапа
            }
        }
    }
    cout << "\nВыводим буквы в алфавитном порядке: \n" << str << "\n\n";
}
