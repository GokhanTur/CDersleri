// 05_Donguler.c
// 5. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada C programlama dilindeki döngü yapıları anlatılır: for, while, do-while

/*
🔁 DÖNGÜLER NEDİR?
---------------------
Bir işlemin belli bir şart sağlandığı sürece tekrar edilmesini sağlayan yapılardır.

C dilinde 3 temel döngü tipi vardır:
1️⃣ for döngüsü
2️⃣ while döngüsü
3️⃣ do-while döngüsü
*/

/*
📌 FOR DÖNGÜSÜ
--------------
Genellikle sayma işlemlerinde kullanılır. Kaç kez döneceği önceden bellidir.

Sözdizimi:
for (başlangıç; koşul; artırma/azaltma) {
    // döngü bloğu
}
*/

#include <stdio.h>

int main() {
    // Örnek 1: 1'den 5'e kadar sayıları yazdır
    printf("FOR DÖNGÜSÜ ÖRNEĞİ\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    /*
    📌 WHILE DÖNGÜSÜ
    -----------------
    Şart doğru olduğu sürece döner. Kaç kez döneceği baştan belli olmayabilir.

    Sözdizimi:
    while (koşul) {
        // döngü bloğu
    }
    */

    // Örnek 2: 0'dan 4'e kadar say
    printf("\nWHILE DÖNGÜSÜ ÖRNEĞİ\n");
    int j = 0;
    while (j < 5) {
        printf("%d\n", j);
        j++;
    }

    /*
    📌 DO-WHILE DÖNGÜSÜ
    --------------------
    Döngü bloğu en az 1 kez çalışır, sonra şart kontrol edilir.

    Sözdizimi:
    do {
        // döngü bloğu
    } while (koşul);
    */

    // Örnek 3: En az bir kez çalışır
    printf("\nDO-WHILE DÖNGÜSÜ ÖRNEĞİ\n");
    int k = 0;
    do {
        printf("%d\n", k);
        k++;
    } while (k < 3);

    return 0;
}

/*
📝 EKSTRA: Sonsuz döngüler
----------------------------
Bazen çıkış şartı olmayan döngüler yazılır (kasıtlı olarak):

while(1) {...}
for(;;) {...}

Bu tür yapılar genellikle sistem programlamada kullanılır.
*/

/*
🧠 Özet:
--------
- for → sayaç belli, klasik kullanım
- while → şart odaklı
- do-while → en az 1 kere çalışır

⛳ Her biri farklı senaryolarda çok işe yarar!
*/
