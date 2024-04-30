#include <iostream>
using namespace std;

int main() {
    int jumlah_deret = 10;
    int hasil = 0;
	int bilangan_ganjil = 1;
	
	for (int i = 0; i < jumlah_deret; ++i){
		cout<<bilangan_ganjil;
		hasil+=bilangan_ganjil;
		bilangan_ganjil+=2;
		if (i < jumlah_deret - 1){
			cout<<"+";
		}
	}

	cout<<"="<<hasil<<endl;
	
    return 0;
}

