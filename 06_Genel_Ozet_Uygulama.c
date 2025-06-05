// 06_Genel_Ozet_Uygulama.c
// 6. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada 1–5. haftalarda öğrendiğimiz temel konular genel bir uygulamayla özetlenir.

/*
🧾 GENEL ÖZET — NELER ÖĞRENDİK?
-----------------------------------

📌 1. Hafta — Algoritmalar & Akış Şemaları
- Problem çözme adımlarını yazılı ve görsel şekilde ifade etmeyi öğrendik.

📌 2. Hafta — C Dilinin Yapısı
- #include, main(), printf(), return gibi temel yapıları öğrendik.

📌 3. Hafta — Sabitler, Değişkenler, Veri Tipleri, Operatörler
- Değişken tanımlama, veri tiplerini seçme
- Aritmetik, ilişkisel, mantıksal, bit düzeyi operatörlerle işlem yapma

📌 4. Hafta — Karar Yapıları
- if, else if, else, switch-case kullanarak programa yön verdik.

📌 5. Hafta — Döngüler
- for, while, do-while ile işlemleri tekrar etmeyi öğrendik
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    // 🌟 Sabit ve değişken tanımları
    const int sabitDeger = 10;
    int sayi;
    float cevre, alan;
    char secim;

    printf("Yaricap giriniz: ");
    scanf("%d", &sayi);

    // 🧮 Operatörler ile işlem
    cevre = 2 * PI * sayi;
    alan = PI * sayi * sayi;

    printf("Cevre: %.2f\n", cevre);
    printf("Alan: %.2f\n", alan);

    // 🔀 Koşullu yapı örneği
    if (alan > 100) {
        printf("Alan 100'den büyük.\n");
    } else {
        printf("Alan 100 veya daha küçük.\n");
    }

    // 🔁 Döngü örneği — girilen sayıya kadar çift sayıları yaz
    printf("\n1 - %d arasındaki çift sayılar:\n", sayi);
    for (int i = 1; i <= sayi; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    // 🔂 Do-while örneği — kullanıcı çıkmak istemedikçe tekrar eder
    do {
        printf("\n\nDevam etmek istiyor musunuz? (E/e için devam): ");
        scanf(" %c", &secim);
    } while (secim == 'E' || secim == 'e');

    return 0;
}

/*
🧠 NE KAZANDIK?
----------------
- Kod yapısına alıştık
- Giriş/çıkış işlemleri yaptık
- Aritmetik hesaplamalar, koşul kontrolleri ve tekrarlar kurduk
- Şartlara göre algoritma kurma becerimiz gelişti

🚀 Artık daha büyük projelere adım atmak için temelimiz hazır!
*/
