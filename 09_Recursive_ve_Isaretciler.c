// 09_Recursive_ve_Isaretciler.c
// 9. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada recursive (özyinelemeli) fonksiyonlar ve pointer (işaretçi) kavramı anlatılır.

/*
📌 RECURSIVE (ÖZYİNELEMELİ) FONKSİYONLAR
-----------------------------------------
Fonksiyonun kendi kendini çağırmasıyla oluşur.
Genellikle matematiksel problemleri çözmede kullanılır.

🎯 ÖNEMLİ:
- Her recursive fonksiyonda **çıkış koşulu** olmalıdır!
- Aksi halde sonsuz döngüye girer.
*/

// Örnek: Faktöriyel hesaplayan recursive fonksiyon
#include <stdio.h>

double faktoriyel(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktoriyel(n - 1);
}

// Üs alma işlemi (iteratif örnek)
int usal(int taban, int us) {
    int sonuc = 1;
    for (int i = 0; i < us; i++) {
        sonuc *= taban;
    }
    return sonuc;
}

int main() {
    int sayi, sayi2;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);

    printf("Bir üs giriniz: ");
    scanf("%d", &sayi2);

    printf("%d^%d = %d\n", sayi, sayi2, usal(sayi, sayi2));
    printf("%d! = %.0lf\n", sayi, faktoriyel(sayi));

    /*
    📌 POINTER (İŞARETÇİ) NEDİR?
    ------------------------------
    Bellek adreslerini tutan değişkenlerdir.
    Genelde bir değişkenin adresini saklamak ve ona ulaşmak için kullanılır.

    SÖZDİZİMİ:
    int *p; → bir tamsayı işaretçisi
    p = &x; → x değişkeninin adresini p'ye ata
    *p      → p'nin gösterdiği adresteki değeri oku
    */

    int x = 10;
    int *ptr = &x;

    printf("x = %d\n", x);       // 10
    printf("*ptr = %d\n", *ptr); // 10
    printf("x adresi: %p\n", (void*)&x);
    printf("ptr adresi: %p\n", (void*)ptr);

    return 0;
}

/*
🧠 BU HAFTA NE ÖĞRENDİK?
-------------------------
- Recursive yapı ile kendi kendini çağıran fonksiyon yazmayı
- Pointer kullanarak değişken adresiyle işlem yapmayı

⛳ Pointer'lar ileride diziler, fonksiyonlar ve struct'larla birlikte daha da önem kazanacak.
*/
