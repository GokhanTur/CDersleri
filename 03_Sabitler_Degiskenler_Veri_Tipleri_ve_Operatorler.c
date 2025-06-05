// 03_Sabitler_Degiskenler_Veri_Tipleri_ve_Operatorler.c
// 3. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada sabitler, değişkenler, veri tipleri ve operatörler detaylı olarak açıklanır.

/*
📌 SABİTLER (Constants)
------------------------
Değeri program boyunca değişmeyen ifadelerdir.
Örnekler:
1️⃣ #define PI 3.14   → Ön işlemci direktifiyle sabit tanımlama
2️⃣ const int yas = 18; → Derleyiciye bu değerin değiştirilemeyeceğini bildirir
*/

#define PI 3.14 // Makro sabit

/*
📦 DEĞİŞKENLER (Variables)
--------------------------
Programda veri saklamak için isimlendirilmiş alanlardır.
Bir değişken tanımlanırken önce veri tipi, sonra isim yazılır.
Örnek: int sayi;
*/

const int sabitYas = 18;

/*
🔢 VERİ TİPLERİ (Data Types)
----------------------------
Temel veri tipleri:
- int     → Tam sayı (4 byte)
- float   → Ondalıklı sayı (4 byte)
- double  → Daha hassas ondalıklı sayı (8 byte)
- char    → Tek karakter (1 byte)
- _Bool   → 0 veya 1 (true/false) (stdbool.h ile)

📂 Türemiş veri tipleri:
----------------------------
Bu hafta sadece tanıtıyoruz, detaylarına ileriki haftalarda değinilecektir:

- array   → Dizi (🗓️ Hafta 7'de anlatılacak)
- pointer → İşaretçi (🗓️ Hafta 9-10'da anlatılacak)
- struct  → Yapı (🗓️ Hafta 11'de anlatılacak)
- union   → Bellek paylaşan yapı (🗓️ Hafta 11'de anlatılacak)

➡️ Bu veri tipleri gelecekte daha kapsamlı olarak örneklerle anlatılacaktır.
Bu dosyada yalnızca isim ve temel amaçları tanıtılmıştır.
*/

#include <stdio.h>

int main() {
    // Temel veri tipi tanımları
    int tamSayi = 10;
    float ondalikliSayi = 3.14;
    double dahaHassas = 2.718281828;
    char karakter = 'A';

    printf("Tam Sayı: %d\n", tamSayi);
    printf("Ondalıklı Sayı: %.2f\n", ondalikliSayi);
    printf("Double Değer: %.9f\n", dahaHassas);
    printf("Karakter: %c\n", karakter);

    return 0;
}
