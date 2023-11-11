#include <iostream>

using namespace std;

// Function to calculate the Cukerman number
int cukermanNumber(int n) {
    if (n == 0) return 1;

    int result = 0;
    for (int k = 0; k < n; ++k) {
        result += cukermanNumber(k) * cukermanNumber(n - 1 - k);
    }

    return result;
}

// Function to print Cukerman numbers in the specified range
void printCukermanNumbers(int start, int end) {
    cout << "Cukerman numbers in the range [" << start << ", " << end << "]: ";
    for (int i = start; i <= end; ++i) {
        cout << cukermanNumber(i) << " ";
    }
    cout << endl;
}

int main() {
    int start, end;

    // Input the range
    cout << "Enter the starting value of the range: ";
    cin >> start;
    cout << "Enter the ending value of the range: ";
    cin >> end;

    // Print Cukerman numbers in the specified range
    printCukermanNumbers(start, end);

    return 0;
}
