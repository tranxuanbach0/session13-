#include <iostream>
using namespace std;

int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int so1, so2;
    cout << "Nhap so thu nhat: ";
    cin >> so1;
    cout << "Nhap so thu hai: ";
    cin >> so2;

    int ucln = timUCLN(so1, so2);
    cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la: " << ucln << endl;

    return 0;
}

