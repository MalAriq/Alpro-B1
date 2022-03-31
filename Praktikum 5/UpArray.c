//Nama File : UpArray
//Nama : Kamal Ariq
//NIM  : 24060121140130
//Kelas : B
//Deskripsi : Menghitung dan menampilkan besarnya penjumlahan sub array/tabel T dengan beberapa aturan.

#include <stdio.h>

int main(){
    // Kamus
    int n, i, j, sum;
    // Algoritma
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    int T[n];
    sum = 0;

    for (i = 0; i < n; i++) scanf("%d", &T[i]);

    for (i = 0; i < n; i++) {
        printf("(");
        for (j = i; j < n; j++) {
            sum += T[j];
            if (j != n-1) printf("%d + ", T[j]);
            else printf("%d", T[j]);
        }
        if (i != n-1) printf(") + ");
        else printf(")");
    }
    printf("\nJumlah dari array dan sub-arraynya adalah: %d", sum);
    return 0;
}
