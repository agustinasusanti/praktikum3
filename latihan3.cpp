#include <iostream>

using namespace std;

int hitung(int, int);
void cetak(int);

int inputData(){
    cout << "Masukkan data: ";
    int a;
    cin >> a;
    return a;
}

int main() {
    int a = hitung(10,2);
    cetak(a);

    int b = inputData();
    int c = inputData();
    cetak(hitung(b,c));
}

int hitung(int a, int b){
    return a+b;
}

void cetak (int a){
    cout << "Nilai dari variable adalah :" << a << endl;
}
