// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nama;
	int nomor_pegawai, gaji_pokok, jumlah_jam_lembur;

	cout << "Masukkan Nomor Pegawai : ";
	cin >> nomor_pegawai;
	cout << "Masukkan Nama : ";
	cin >> nama;
	cout << "Masukkan Gaji Pokok : ";
	cin >> gaji_pokok;
	cout << "Masukkan Jumlah Jam Lembur : ";
	cin >> jumlah_jam_lembur;

	int tunjangan = gaji_pokok * 10 / 100;
	int uang_lembur = jumlah_jam_lembur * gaji_pokok * 5 / 100;
	int total = gaji_pokok + tunjangan + uang_lembur;

	cout << "Gaji Pokok : " << gaji_pokok << endl;
	cout << "Tunjangan : " << tunjangan << endl;
	cout << "Uang Lembur : " << uang_lembur << endl;
	cout << "Total Gaji Kamu : " << total;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
