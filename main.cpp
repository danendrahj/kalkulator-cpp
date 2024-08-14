#include <bits/stdc++.h>
using namespace std;

int addPenjumlahan(int x, int y){
    int penjumlahan = x + y;
    return penjumlahan;
}

int addPengurangan(int x, int y){
    int pengurangan = x - y;
    return pengurangan;
}

int addPerkalian(int x, int y){
    int perkalian = x * y;
    return perkalian;
}


int addPembagian(int x, int y){
    int pembagian = x / y;
    return pembagian;
}

int addModulus(int x, int y){
    int modulus = x % y;
    return modulus;
}

int main(){

    int num1, num2;

    // Meminta pengguna memasukkan dua angka
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    cout << "Penjumlahan : "<< addPenjumlahan(num1, num2) << endl;
    cout << "Pengurangan : "<< addPengurangan(num1, num2) << endl;
    cout << "Perkalian : "<< addPerkalian(num1, num2) << endl;
    cout << "Pembagian : "<< addPembagian(num1, num2) << endl;
    cout << "Modulus : "<< addModulus(num1, num2) << endl;


    cout << "Terimakasih telah mencoba" << endl;

    return 0;
}