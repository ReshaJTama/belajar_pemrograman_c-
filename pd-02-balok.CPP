#include <conio>
#include <stdlib>
#include <stdio>
#include <iostream>

main(){
	float p,l,t,hasil;
   int pilih;

	cout << "=================================\n";
  	cout << "=      Luas & Volume Balok      =\n";
  	cout << "=================================\n";
   cout << " Masukan panjang balok : ";
   cin >> p;
   endl;
   cout << " Masukan lebar balok : ";
   cin >> l;
   endl;
	cout << " Masukan tinggi balok : ";
   cin >> t;

   clrscr();
   cout << "Apa yang anda cari ? \n";
   cout << "1. Luas Balok \n";
   cout << "2. Volume Balok \n";
   cout << "Pilihan anda : \n";
   cin >> pilih;

   if(pilih == 1){
   	hasil = 2 * (p  * l ) + 2 * ( l * t ) + 2 * (p * t);
      cout << " Hasil nya adalah : " << hasil ;
   }else if(pilih == 2){
   	hasil = p * l * t;
      cout << " Hasil nya adalah : " << hasil ;
   }

   getch();


}
