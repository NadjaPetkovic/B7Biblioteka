#include <stdio.h>

/**
 * Funkcija za izračunavanje zbira cifara broja
 * @param broj - prirodan broj čiji zbir cifara treba izračunati
 * @return zbir cifara broja
 */
int zbir_cifara(int broj) {
    int zbir = 0;
    while (broj > 0) {
        zbir += broj % 10;
        broj /= 10;
    }
    return zbir;
}

/**
 * Glavni program koji pronalazi sve prirodne brojeve iz intervala [a, b]
 * koji su deljivi zbirom svojih cifara
 */
int main() {
    int a, b;
    int pronađeni = 0;
    
    printf("Unesite početak intervala (a): ");
    scanf("%d", &a);
    
    printf("Unesite kraj intervala (b): ");
    scanf("%d", &b);
    
    // Proverava da li je interval valjan
    if (a <= 0 || b <= 0) {
        printf("Greška: Uneti brojevi moraju biti prirodni (veći od 0).\n");
        return 1;
    }
    
    if (a > b) {
        printf("Greška: Početak intervala mora biti manji ili jednak kraju.\n");
        return 1;
    }
    
    printf("\nBrojevi iz intervala [%d, %d] koji su deljivi zbirom svojih cifara:\n", a, b);
    
    // Iteracija kroz sve brojeve u intervalu [a, b]
    for (int i = a; i <= b; i++) {
        int zbir = zbir_cifara(i);
        
        // Provera da li je broj deljiv zbirom svojih cifara
        if (i % zbir == 0) {
            printf("%d (zbir cifara: %d)\n", i, zbir);
            pronađeni++;
        }
    }
    
    if (pronađeni == 0) {
        printf("Nema brojeva u datom intervalu koji ispunjavaju uslov.\n");
    } else {
        printf("\nUkupno pronađeno: %d brojeva\n", pronađeni);
    }
    
    return 0;
}