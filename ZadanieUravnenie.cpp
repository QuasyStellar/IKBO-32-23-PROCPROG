#include <iostream>


using namespace std;

int main()
{
    float b, c;
    cin >> b >> c;
    if (b != 0) {
        cout << -c / b << endl;
    }
    else if (c != 0) {
        cout << "Null" << endl;
    }
    else {
        cout << "A" << endl;
    }
}
