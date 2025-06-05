// Bu dosya, algoritma kavramı ve akış şemalarının programlamadaki yerini anlatmak
// ve "Hello, World!" gibi basit bir örnekle C dilinde ilk adımı atmak amacıyla oluşturulmuştur.
// 1. HAFTA KONUSU — Hazırlayan: Gökhan Tür

/*
🧠 ALGORİTMA NEDİR?
----------------------
Algoritma, belirli bir problemi çözmek veya bir görevi tamamlamak için izlenen
adım adım işlemler bütünüdür.

📋 ÖRNEK: "Çaya şeker atmak"
1. Kaşığı al.
2. Şeker kavanozunu aç.
3. Kaşığı şekere daldır.
4. Kaşığı bardağa götür.
5. Şekeri dök.
6. Karıştır.

Bu da bir algoritmadır!
*/

/*
🔄 AKIŞ ŞEMASI NEDİR?
----------------------
Akış şeması, algoritmanın görsel olarak ifade edilmesidir. Akış şemalarında:

🔹 Oval şekiller = Başlangıç / Bitiş
🔹 Dikdörtgen = İşlem adımı
🔹 Parallelogram = Giriş/Çıkış işlemi
🔹 Elmas = Karar yapısı (Evet/Hayır)

🧩 NEDEN KULLANILIR?
----------------------
- Algoritmayı daha iyi anlamak için
- Karmaşık yapıları sadeleştirmek için
- Ekip içinde paylaşımı kolaylaştırmak için
*/

// 💡 Şimdi, C dilinde "Hello, World!" yazdırarak ilk algoritmamızı kodlayalım:

#include <stdio.h>

int main() {
    // Ekrana "Hello, World!" yazdırır
    printf("Hello, World!\n");

    // Kullanıcıdan bir karakter girişi bekler
    // Bu sayede program hemen kapanmaz
    char karakter;
    karakter = getchar();

    return 0;
}

/*
🎯 BU PROGRAM NE YAPAR?
------------------------
1. Ekrana "Hello, World!" yazar.
2. Kullanıcıdan bir karakter girişi bekler.
3. Karakter girildikten sonra kapanır.

✅ Bu, C programlamaya girişte temel yapıların (main fonksiyonu, printf, getchar) tanıtımıdır.
*/
