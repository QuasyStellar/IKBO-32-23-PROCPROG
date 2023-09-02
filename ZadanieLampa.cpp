#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool d, s, l;
    cin >> d >> s >> l;
    if ((d == 1) and (s == 0)) {
        cout << "Light";
    }
    else if ((d == 1) and (l == 0)) {
        cout << "Dark";
    }
    else if (l == 1) {
        cout << "Light";
    }
    else {
        cout << "Dark";
    }
}