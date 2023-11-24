#include <iostream>



int monks[600][3] = { 0 };
int teachers[600] = { 0 };

using namespace std;
void findTeacher(int monkNumber) {
    if (monkNumber == 1) {
        cout << "1 - Святой Павел\n";
        return;
    }

    int teacher = teachers[monkNumber];
    if (teacher == 0) {
        cout << monkNumber << " – не монах\n";
    }
    else {
        cout << monkNumber << " – монах, его учитель ";
        findTeacher(teacher);
    }
}

int findCommonTeacher(int monk1, int monk2) {
    int teacher1 = monk1;
    int teacher2 = monk2;

    while (teacher1 != teacher2) {
        if (teacher1 == 0 || teacher2 == 0) {
            cout << ((teacher1 == 0) ? monk1 : monk2) << " – не монах\n";
            return 0;
        }

        if (teacher1 > teacher2) {
            teacher1 = teachers[teacher1];
        }
        else {
            teacher2 = teachers[teacher2];
        }
    }
    cout << monk1 << " и " << monk2 << " – оба монахи, и их общий учитель " << teacher1 << endl;
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите кол-во строк исходных данных: ";
    cin >> n;
    cout << "Введите монаха и его учеников:\n";
    for (int i = 0; i < n; ++i) {
        int monk, child1, child2, child3;
        cin >> monk >> child1 >> child2 >> child3;
        monks[monk][0] = child1;
        monks[monk][1] = child2;
        monks[monk][2] = child3;

        if (child1 != 0) teachers[child1] = monk;
        if (child2 != 0) teachers[child2] = monk;
        if (child3 != 0) teachers[child3] = monk;
    }

    int q;
    cout << "Введите кол-во строк варианта: ";
    cin >> q;
    cout << "Введите вариант задания и входные данные для него:\n";
    for (int i = 0; i < q; ++i) {
        int code, monk1, monk2;
        cin >> code;

        if (code == 1) {
            cin >> monk1;
            findTeacher(monk1);
        }
        else if (code == 2) {
            cin >> monk1 >> monk2;
            findCommonTeacher(monk1, monk2);
        }
    }
}
