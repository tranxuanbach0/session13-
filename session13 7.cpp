#include <iostream>
using namespace std;

void taoMaTran(int hang, int cot, int **maTran) {
    cout << "Nhap cac gia tri cho ma tran:\n";
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cout << "Nhap phan tu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> maTran[i][j];
        }
    }
}

void inMaTran(int hang, int cot, int **maTran) {
    cout << "\nMa tran vua nhap la:\n";
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cout << maTran[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int hang, cot;
    cout << "Nhap so hang: ";
    cin >> hang;
    cout << "Nhap so cot: ";
    cin >> cot;

    int **maTran = new int *[hang];
    for (int i = 0; i < hang; i++) {
        maTran[i] = new int[cot];
    }

    taoMaTran(hang, cot, maTran);
    inMaTran(hang, cot, maTran);

    for (int i = 0; i < hang; i++) {
        delete[] maTran[i];
    }
    delete[] maTran;

    return 0;
}

