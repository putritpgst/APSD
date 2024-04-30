#include <iostream>

int main() {
    int n = 5; // Jumlah baris segitiga
    int sum = 0; // Total hasil

    for (int i = n; i >= 1; --i) {
        int multiplier = 10; // Bilangan yang akan dikurangi
        int lineSum = 0; // Total untuk setiap baris

        for (int j = 0; j < i; ++j) {
            std::cout << multiplier;
            lineSum += multiplier;
            if (j < i - 1) {
                std::cout << " + ";
            }
            multiplier -= 2;
        }
        sum += lineSum;
        std::cout << " = " << lineSum << std::endl;
    }
    std::cout << "----------" << std::endl;
    std::cout << sum << std::endl; // Menampilkan jumlah total tanpa kata "Total"

    return 0;
}

