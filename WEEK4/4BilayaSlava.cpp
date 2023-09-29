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
                    std::cout << "  *";
                }
                cout << " ==========================================" << endl << "                                                                   " << endl;
            }
            else {
                std::cout << " ";
                for (int j = 0; j < 8; ++j)
                    std::cout << "*  ";
                cout << "==========================================" << endl << "                                                                   " << endl;
            }
        }
        else {
            cout <<  "===================================================================" << endl << "                                                                   " << endl;
        }
    }
}
