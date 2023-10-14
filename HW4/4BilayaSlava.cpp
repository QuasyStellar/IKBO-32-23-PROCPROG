#include <iostream>

using namespace std;
int main()
{
    for (int i = 0; i < 13; ++i)
    {
        if (i < 7) {
            if (0 == i % 2) {
                for (int j = 0; j < 8; ++j)
                {
                    cout << "   *";
                }
                for (int j = 0; j < 58; ++j)
                {
                    cout << "=";
                }
                cout << endl << endl ;
            }
            else {
                for (int j = 0; j < 8; ++j)
                    cout << "*   ";
                for (int j = 0; j < 58; ++j)
                {
                    cout << "=";
                }
                cout << endl << endl;
            }
        }
        else {
            for (int j = 0; j < 90; ++j)
                {
                    cout << "=";
                }
            cout << endl << endl;
        }
    }
}
