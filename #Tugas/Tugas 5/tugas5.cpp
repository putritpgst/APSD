#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk membagi array dan mengembalikan indeks pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot diambil dari elemen terakhir
    int i = (low - 1); // Indeks dari elemen terkecil

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++; // Tingkatkan indeks dari elemen terkecil
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Fungsi untuk mengurutkan array dengan QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi adalah indeks partisi, arr[p] adalah di posisi yang benar
        int pi = partition(arr, low, high);

        // Memisahkan elemen sebelum partisi dan setelah partisi
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}

