#include <stdio>
#include <stdlib>
#include <conio>

main() {
  int pilih;
  float p,l,hasil;

  printf("===================================\n");
  printf("=     Persegi Panjang             =\n");
  printf("===================================\n");

  printf("Masukan Panjang nya : ");
  scanf("%f",&p);
  printf("Masukan Panjang nya : ");
  scanf("%f",&l);
  printf("Apa yang ingin anda Cari : \n");
  printf("1. Luas Persegi panjang\n");
  printf("2. Keliling Persegi panjang\n");
  printf("Jawab : ");
  scanf("%d",&pilih);

  if (pilih == 1){
	hasil = p * l ;
   printf("Jadi Luas Persegi panjang nya : %f",hasil);
  }else if (pilih == 2){
	hasil = p + l + p + l ;
   printf("Jadi Keliling Persegi panjang nya : %f",hasil);
  }

  getch();

}