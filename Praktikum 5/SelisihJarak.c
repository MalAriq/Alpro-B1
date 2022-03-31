//Nama File : SelisihJarak
//Nama : Kamal Ariq
//NIM  : 24060121140130
//Kelas : B
//Deskripsi : Menghitung besarnya selisih ketinggian terbesar puncak bukit dengan lembah bukit atau sebaliknya


#include <stdio.h>


int main(){
    //Kamus
    int i,max,min,size;

    //Algoritma
    printf("Maukkan Jumlah jalur lintasan : \n");
    scanf("%d",&size);

    int ara[size];

     printf("Masukkan jarak setiap lintasannya:\n");
     for(i = 0; i < size;  i++){
        scanf("%d", &ara[i]);
     }


    max=ara[0];
    min=ara[0];
    for(i = 0; i < size; i++){
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }

    printf("Selisih Jarak terpanjang dan terpendek adalah %d\n",max-min);


    return 0;
}
