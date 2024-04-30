#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;

    // Loop untuk menghitung 10 deret bilangan genap
    for(int i = 2; i <= 20; i += 2) {
        jumlah += i;
        cout << i;
        if (i != 20) {
            cout << " + ";
        }
    }

    cout << " = " << jumlah << endl;

    return 0;
}

