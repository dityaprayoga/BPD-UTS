#include <stdio.h>

int main() {
    char nim[10], nama[40];
    int nilai;
    
    printf ("UTS BAHASA PEMROGRAMAN DASAR");
    printf ("\nNama	: Aditya Prayoga");
    printf ("\nNIM	: 2211510462\n");
	printf ("\nIni adalah program penentuan grading nilai berdasarkan nilai akhir");
    printf ("\n------------------------------------------------------------------");
    printf ("\nMasukan Nama Anda \t\t\t\t: "); gets(nama);
    printf ("\nMasukan NIM Anda \t\t\t\t: "); gets(nim);
    printf ("\nMasukan Nilai Akhir Anda \t\t\t: "); scanf ("%i", &nilai);
    
    if (nilai >= 76 && nilai <= 100) {
        printf ("\nANDA LULUS");
        printf ("\n\nGRADE ANDA ADALAH A");
    }
    
    if (nilai >= 66 && nilai <= 75) {
        printf ("\nANDA LULUS");
        printf ("\n\nGRADE ANDA ADALAH B");
    }
    
    if (nilai >= 51 && nilai <= 65) {
        printf ("\nANDA LULUS");
        printf ("\n\nGRADE ANDA ADALAH C");
    }
    
    if (nilai >= 0 && nilai <= 50) {
        printf ("\nMAAF ANDA TIDAK LULUS");
        printf ("\n\nGRADE ANDA ADALAH D");
    
    }
    
    if (nilai < 0 || nilai >100) {
        printf ("\n\n Input Nilai antar 0 - 100");
    }
    return 0;
}
