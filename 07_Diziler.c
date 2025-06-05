// 07_Diziler.c
// 7. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada C dilinde dizilerin kullanımı, dizilerle işlem yapma örnekleri açıklanır.

/*
📌 DİZİ NEDİR?
----------------
Aynı veri tipinde birden fazla veriyi tek bir değişken altında saklamaya yarayan yapıdır.
Örnek: int notlar[5]; // 5 elemanlı tamsayı dizisi

🔹 Dizi indeksleri 0'dan başlar.
🔹 Elemanlara indeks numarası ile erişilir.
*/

#include <stdio.h>
#include <string.h>

int main() {
    // 📌 Örnek 1: Sabit boyutlu dizi tanımı ve kullanımı (ders7.c)
    int sayi, i;
    double faktoriyel = 1;

    printf("Faktoriyeli alinacak bir sayi giriniz: ");
    scanf("%d", &sayi);
    for (i = 2; i <= sayi; i++) {
        faktoriyel *= i;
    }
    printf("%d! = %.0f\n", sayi, faktoriyel);

    // 📌 Örnek 2: Tek/çift sayıları toplayan döngü (ders7.1.c)
    int n = 10, tekToplam = 0, ciftToplam = 0;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            ciftToplam += i;
        else
            tekToplam += i;
    }
    printf("1-%d arasi tek toplami: %d, cift toplami: %d\n", n, tekToplam, ciftToplam);

    // 📌 Örnek 3: 2 boyutlu dizi ile ortalama hesaplama (ders7.2.c)
    int notlar[2][5] = {{80, 70, 65, 40, 90}, {85, 80, 80, 15, 87}};
    int toplam;
    float ort;

    for (i = 0; i < 2; i++) {
        toplam = 0;
        for (int j = 0; j < 5; j++) {
            toplam += notlar[i][j];
        }
        ort = (float)toplam / 5;
        printf("%d. ogrencinin ortalamasi = %.2f\n", i + 1, ort);
    }

    // 📌 Örnek 4: 2 dizi toplanıp üçüncüye aktarılıyor (ders7.3.c)
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {5, 4, 3, 2, 1};
    int c[5];

    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
        printf("c[%d] = %d\n", i, c[i]);
    }

    // 📌 Örnek 5: string kütüphane fonksiyonları (ders7.4.c)
    char str1[8] = "Merhaba";
    char str2[6] = "Dunya";
    char str3[13];

    strcpy(str3, str1);  // str3 = "Merhaba"
    strcat(str3, str2);  // str3 = "MerhabaDunya"
    printf("Birlestirilmis string: %s\n", str3);
    printf("Uzunluk: %lu\n", strlen(str3));

    // 📌 Örnek 6: fgets() ile kullanıcıdan string alma (ders7.5.c güncellenmiş)
    char mesaj[80];
    printf("Bir mesaj giriniz: ");
    fgets(mesaj, sizeof(mesaj), stdin);
    printf("Girilen mesaj: %s\n", mesaj);

    return 0;
}

/*
📌 DİZİ TÜRLERİ:
------------------
- Tek boyutlu dizi: int sayilar[10];
- Çok boyutlu dizi: float matris[3][3];
- Karakter dizisi (string): char isim[20];

📌 STRİNG FONKSİYONLARI (string.h)
- strcpy(dest, src)
- strcat(dest, src)
- strlen(str)

⚠️ gets() fonksiyonu bellek taşmasına neden olabileceği için **güvenli değildir**.
✅ Onun yerine **fgets()** kullanılır. fgets(), maksimum karakter sınırıyla okuma yapar.

🧠 Bu hafta, dizilerle işlemler yapmayı ve karakter dizilerini tanımayı öğrendik.
*/
