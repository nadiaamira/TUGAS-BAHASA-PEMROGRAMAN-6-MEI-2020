#include <iostream>
using namespace std;
int main  () {
	cout << "****** TUGAS BAHASA PEMROGRAMAN TENTANG BILANGAN PRIMA ******" << endl;
	cout << "===== Nama : Nadia Amira Putri =====" << endl;
	cout << "===== Nim : ETE10190111 =====" << endl;
	int angka_awal = 1 ;
	int angka_akhir = 350 ;
	
	for ( int i = angka_awal ; i <= angka_akhir ; i++)
	{
		int counter_prima = 0;
		for ( int j = 1 ; j <= i ; j++ )
		{
			if ( i % j == 0 )
			{
				counter_prima++;
			}
		}
		if ( counter_prima == 2)
		{
			cout << i << " adalah bilangan prima " << endl;
		}
	}
	return 0;
}
