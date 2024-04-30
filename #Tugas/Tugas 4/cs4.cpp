#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int rows = 5; // Jumlah baris segitiga
    int product = 1;
    for (int i = 1; i <= rows; i++) {
        product *= 2 * i - 1;
        stringstream ss;
        ss << "1";
        for (int j = 2; j <= i; j++) {
            ss << " * " << 2 * j - 1;
        }
        cout << ss.str() << " = " << product << endl;
    }

    return 0;
}

