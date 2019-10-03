#include <conio>
#include <stdlib>
#include <stdio>
#include <iostream>

main(){

float bh,hasil;
const kg= 4500;

cout << "====================================\n";
cout << "=    Program Penjualan Buah        =\n";
cout << "====================================\n";
cout << " Harga 1 KG nya adalah 4.500 \n";
cout << " Berapa buah yang ingin kamu beli ? \n";
cout << " Jawab : ";
cin >>  bh;
clrscr();
hasil = kg * bh;
cout << " Harga total nya adalah sebagai berikut : Rp." << hasil ;
getch();



}
