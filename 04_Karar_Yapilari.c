// 04_Karar_Yapilari.c
// 4. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosya, mantıksal ifadeler ve karar yapılarının C programlamadaki kullanımını açıklar.

/*
🧠 KARAR YAPILARI (if, else if, else, switch)
---------------------------------------------
Programın belirli koşullara göre farklı yollar izlemesini sağlar.

Mantıksal ifadeler genelde şu operatörlerle birlikte kullanılır:

🧪 KARŞILAŞTIRMA OPERATÖRLERİ:
==  eşit mi
!=  eşit değil mi
>   büyük mü
<   küçük mü
>=  büyük veya eşit
<=  küçük veya eşit

🔗 MANTIKSAL OPERATÖRLER:
&&  VE (and)
||  VEYA (or)
!   DEĞİL (not)
*/

// 📌 Örnek 1: if - else yapısı
#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("Sayı pozitiftir.\n");
    } else if (sayi < 0) {
        printf("Sayı negatiftir.\n");
    } else {
        printf("Sayı sıfırdır.\n");
    }

    // 📌 Örnek 2: Mantıksal karşılaştırma
    if (sayi % 2 == 0 && sayi != 0) {
        printf("Sayı çift ve sıfırdan farklıdır.\n");
    }

    // 📌 Örnek 3: switch-case kullanımı
    int secim;
    printf("1 ile 3 arasında bir sayı girin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("Birinci seçildi.\n");
            break;
        case 2:
            printf("İkinci seçildi.\n");
            break;
        case 3:
            printf("Üçüncü seçildi.\n");
            break;
        default:
            printf("Geçersiz seçim yaptınız.\n");
    }

    // 📌 Örnek 4: İç içe if yapısı
    int vize, final;
    printf("Vize notunu girin: ");
    scanf("%d", &vize);
    printf("Final notunu girin: ");
    scanf("%d", &final);

    float ort = (vize * 0.4) + (final * 0.6);
    if (ort >= 50) {
        if (ort >= 70) {
            printf("Geçtiniz, notunuz çok iyi.\n");
        } else {
            printf("Koşullu geçtiniz.\n");
        }
    } else {
        printf("Kaldınız.\n");
    }

    return 0;
}

/*
📝 Özet:
-------
- if: Koşul doğruysa çalışır
- else if: Önceki koşul yanlışsa denenir
- else: Diğer tüm durumlar
- switch-case: Sayısal seçenekler için hızlı karar yapısı
- && || ! : Birden fazla durumu birlikte değerlendirmek için mantıksal operatörler

✅ Bu yapıların tamamı, programın karar verebilmesini sağlar.
*/
