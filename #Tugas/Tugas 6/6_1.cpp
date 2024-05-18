#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    char nim[5];
    char nama[15];
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
    char nilaiHuruf;
};

char hitungNilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 80) return 'A';
    else if (nilaiAkhir >= 70) return 'B';
    else if (nilaiAkhir >= 56) return 'C';
    else if (nilaiAkhir >= 47) return 'D';
    else return 'E';
}

void tampilkanTabel(vector<Mahasiswa> &mahasiswaList) {
    cout << left << setw(4) << "| No" 
         << left << setw(18) << "| Nama Mahasiswa" 
         << left << setw(11) << "| Nilai UTS" 
         << left << setw(11) << "| Nilai UAS" 
         << left << setw(13) << "| Nilai Akhir" 
         << left << setw(14) << "| Nilai Huruf |" 
         << endl;
    cout << "|----|----------------|----------|----------|------------|-------------|" << endl;

    for (size_t i = 0; i < mahasiswaList.size(); ++i) {
        cout << "| " << left << setw(3) << i + 1
             << "| " << left << setw(15) << mahasiswaList[i].nama
             << "| " << left << setw(9) << mahasiswaList[i].nilaiUTS
             << "| " << left << setw(9) << mahasiswaList[i].nilaiUAS
             << "| " << left << setw(11) << mahasiswaList[i].nilaiAkhir
             << "| " << left << setw(11) << mahasiswaList[i].nilaiHuruf << " |" 
             << endl;
    }
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cin.ignore(); // Membersihkan buffer newline dari input sebelumnya

    vector<Mahasiswa> mahasiswaList(jumlahMahasiswa);

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "Masukkan NIM mahasiswa ke-" << i + 1 << ": ";
        cin.getline(mahasiswaList[i].nim, 5);
        cout << "Masukkan Nama mahasiswa ke-" << i + 1 << ": ";
        cin.getline(mahasiswaList[i].nama, 15);
        cout << "Masukkan Nilai UTS mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswaList[i].nilaiUTS;
        cout << "Masukkan Nilai UAS mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswaList[i].nilaiUAS;
        cin.ignore(); // Membersihkan buffer newline setelah input angka

        mahasiswaList[i].nilaiAkhir = (mahasiswaList[i].nilaiUTS * 0.6) + (mahasiswaList[i].nilaiUAS * 0.4);
        mahasiswaList[i].nilaiHuruf = hitungNilaiHuruf(mahasiswaList[i].nilaiAkhir);
    }

    cout << "\nData yang diinputkan adalah:\n";
    tampilkanTabel(mahasiswaList);

    return 0;
}

