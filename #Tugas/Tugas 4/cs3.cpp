#include <iostream>
#include <sstream> 

using namespace std;

int main() {
    int rows = 5; // Jumlah baris segitiga
    int sum = 0;
    for (int i = 1; i <= rows; i++) {
        sum += 2 * i;
        stringstream ss;
        ss << "2";
        for (int j = 2; j <= i; j++) {
            ss << " + " << 2 * j;
        }
        cout << ss.str() << " = " << sum << endl;
    }

    return 0;
}


