// 08_Fonksiyonlar.c
// 8. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada C dilinde fonksiyonların kullanımı açıklanır.

/*
🧩 FONKSİYON NEDİR?
---------------------
Belirli bir görevi gerçekleştiren kod bloklarıdır. Kodu parçalara ayırarak:
- Okunabilirliği artırır
- Tekrar kullanım sağlar
- Hata ayıklamayı kolaylaştırır

📦 Fonksiyonlar ana programdan bağımsız olarak tanımlanır ve çağrılır.
*/

#include <stdio.h>

// 📌 Fonksiyon prototipi (bildirimi)
int topla(int, int);
int fark(int, int);
float ortalama(int, int);
void yazdirSonuc(int);

// 🔁 Fonksiyon: iki sayıyı topla
int topla(int a, int b) {
    return a + b;
}

// 🔁 Fonksiyon: iki sayı arasındaki farkı bul
int fark(int a, int b) {
    return a - b;
}

// 🔁 Fonksiyon: iki sayının ortalamasını al
float ortalama(int a, int b) {
    return (a + b) / 2.0;
}

// 📌 Fonksiyon: sonucu yazdır
void yazdirSonuc(int sonuc) {
    printf("Sonuc: %d\n", sonuc);
}

int main() {
    int x, y;
    printf("2 sayı giriniz: ");
    scanf("%d %d", &x, &y);

    int toplam = topla(x, y);
    int farkSonuc = fark(x, y);
    float ort = ortalama(x, y);

    yazdirSonuc(toplam);
    yazdirSonuc(farkSonuc);
    printf("Ortalama: %.2f\n", ort);

    return 0;
}

/*
📌 FONKSİYON TİPLERİ
----------------------
🔹 Geriye değer döndüren (return kullanan): int, float, char, vb.
🔹 Geriye değer döndürmeyen: void

📌 PARAMETRELER
---------------------
Fonksiyonlara dışarıdan veri göndermek için kullanılır.
Fonksiyon adı parantez içindeki değişkenlerle tanımlanır.

📌 REUSABLE CODE: Fonksiyonlar tekrar tekrar çağrılabilir.
---------------------

🧠 Bu hafta, programlamanın yapı taşı olan fonksiyonları öğrenerek yapımızı modüler hale getirdik.
*/
