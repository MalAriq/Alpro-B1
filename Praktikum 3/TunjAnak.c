//Nama File : TunjAnak
//Nama : Kamal Ariq
//NIM  : 24060121140130
//Kelas : B
//Deskripsi : Membuat program Tunjangan Anak

#include <stdio.h>

int main (){
	//Kamus
	int a,gp,T;


	//Algoritma
	printf("Membuat Program Tunjangan Anak \n");
	printf("Jumlah Anak  : ");
	scanf("%d", &a);
	printf("Gaji Pokok  : ");
	scanf("%d", &gp);

	if ( a < 3) {
		T = a * (0.1*gp);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
    }
	else{
		T = 3 * (0.1*gp);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	return 0;
}
