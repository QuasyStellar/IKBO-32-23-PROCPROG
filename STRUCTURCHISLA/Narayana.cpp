#include <iostream>

using namespace std;

int narayanaTriangle(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return narayanaTriangle(n-1, k-1) + narayanaTriangle(n-1, k) + narayanaTriangle(n-1, k+1);
    }
}

int main() {
    const int numRows = 10;

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << narayanaTriangle(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
