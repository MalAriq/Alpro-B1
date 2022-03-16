//Nama File : BiayaParkir
//Nama : Kamal Ariq
//NIM  : 24060121140130
//Kelas : B
//Deskripsi : Membuat program BiayaParkir

#include <stdio.h>

int main (){
	//Kamus
	int i,b;

	//Algoritma
	printf("Membuat Program Biaya Parkir \n");
	printf("Jam lamanya parkir  : ");
	scanf("%d", &i);

	if ( i > 2) {
		b = 2000 + (i-2) * 500 ;
		printf(" Biaya Parkir sebesar: %d", b);
    }
	else{
		b = 2000;
		printf(" Biaya Parkir sebesar: %d", b);
	}
	return 0;
}
