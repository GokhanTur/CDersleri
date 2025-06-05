// 10_Isaretci_Dizi_Fonksiyon_Iliskileri.c
// 10. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada işaretçiler, diziler ve fonksiyonlar arasındaki ilişki anlatılır.

/*
📌 POINTER & DİZİ İLİŞKİSİ
-----------------------------
Bir dizinin adı aslında ilk elemanın adresidir.
Bu nedenle işaretçilerle dizi elemanlarına ulaşmak mümkündür.

Örnek:
int dizi[3] = {10, 20, 30};
int *p = dizi; // p artık dizi[0]'ı işaret eder
*/

#include <stdio.h>

void elemanlariYazdir(int *dizi, int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("dizi[%d] = %d\n", i, *(dizi + i));
    }
}

int main() {
    int sayilar[] = {5, 10, 15, 20, 25};
    int *ptr = sayilar;

    printf("Pointer ile dizi elemanlarına erişim:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    printf("\nFonksiyon ile dizi yazdırma:\n");
    elemanlariYazdir(sayilar, 5);

    return 0;
}

/*
📌 DİZİ - FONKSİYON GEÇİŞİ
-----------------------------
Bir dizi fonksiyona parametre olarak geçirildiğinde, aslında onun adresi geçirilir.

void fonk(int *dizi, int boyut) {...}

Bu, belleği verimli kullanmak açısından oldukça avantajlıdır.
Dizi büyükse kopyalanmaz, yalnızca adresi paylaşılır.

📌 NEDEN ÖNEMLİ?
------------------
- Bellek yönetimini anlamak için pointer bilgisi gerekir.
- Fonksiyonlara veri geçirirken verimli olmak için gereklidir.

🧠 Bu hafta ile birlikte pointer temelli programlamaya geçiş yaptık.
Daha ileri konular için temel oluşturduk!
*/
