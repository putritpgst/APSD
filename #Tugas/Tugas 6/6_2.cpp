#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Pegawai {
    char nama[30];
    int jamKerja;
    int honorLembur;
    int totalHonor;
};

void tampilkanTabel(const vector<Pegawai>& pegawaiList) {
    cout << left << setw(5) << "| No"
         << left << setw(15) << "| Nama Pegawai"
         << left << setw(10) << "| Jam Kerja"
         << left << setw(15) << "| Honor Lembur"
         << left << setw(15) << "| Total Honor |"
         << endl;
    cout << "|----|--------------|----------|--------------|-------------|" << endl;

    for (size_t i = 0; i < pegawaiList.size(); ++i) {
        cout << "| " << left << setw(3) << i + 1
             << "| " << left << setw(13) << pegawaiList[i].nama
             << "| " << left << setw(9) << pegawaiList[i].jamKerja
             << "| " << left << setw(13) << pegawaiList[i].honorLembur
             << "| " << left << setw(11) << pegawaiList[i].totalHonor << " |"
             << endl;
    }
}

int main() {
    int jumlahPegawai;
    const int HONOR_HARIAN = 15000;
    const int TARIF_LEMBUR = 5000;

    cout << "Masukkan jumlah pegawai: ";
    cin >> jumlahPegawai;
    cin.ignore(); 

    vector<Pegawai> pegawaiList(jumlahPegawai);

    for (int i = 0; i < jumlahPegawai; ++i) {
        cout << "Masukkan Nama pegawai ke-" << i + 1 << ": ";
        cin.getline(pegawaiList[i].nama, 30);
        cout << "Masukkan Jam Kerja pegawai ke-" << i + 1 << ": ";
        cin >> pegawaiList[i].jamKerja;
        cin.ignore(); 

        if (pegawaiList[i].jamKerja > 8) {
            pegawaiList[i].honorLembur = (pegawaiList[i].jamKerja - 8) * TARIF_LEMBUR;
        } else {
            pegawaiList[i].honorLembur = 0;
        }
        pegawaiList[i].totalHonor = HONOR_HARIAN + pegawaiList[i].honorLembur;
    }

    cout << "\nData yang diinputkan adalah:\n";
    tampilkanTabel(pegawaiList);

    return 0;
}

