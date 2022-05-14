#include <iostream>
#include <iomanip>
#include "Header.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Matrix matr(5);
    Matrix m;
    cout << matr;
    cin >> m;
    cout << m << endl;
    Matrix n = m * 5;
    cout << n << endl;
    Matrix t = n + m;
    cout << t << endl;
    return 0;
}