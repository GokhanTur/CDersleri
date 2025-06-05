// 11_Yapilar_Union_Enum.c
// 11. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada struct, union ve enum veri tipleri anlatılır.

/*
📌 STRUCT (YAPI)
------------------
Birden fazla veri tipini bir arada tutmaya yarar.
Genellikle gerçek dünya nesnelerini modellemek için kullanılır.

Örnek: Kitap bilgisi
*/

#include <stdio.h>
#include <string.h>

// YAPI (struct) tanımı
struct Kitap {
    char baslik[50];
    char yazar[50];
    int kitap_id;
};

// UNION örneği
union Bilgi {
    int i;
    float f;
    char metin[20];
};

// ENUM örneği
enum Renk {
    KIRMIZI,
    MAVI,
    SARI
};

int main() {
    // 📌 STRUCT KULLANIMI
    struct Kitap kitap1, *kptr;

    kptr = &kitap1;

    strcpy(kptr->baslik, "C Programlama");
    strcpy(kptr->yazar, "Gokhan Tur");
    kptr->kitap_id = 1234;

    printf("Kitap: %s | Yazar: %s | ID: %d\n", kitap1.baslik, kitap1.yazar, kitap1.kitap_id);

    // 📌 UNION KULLANIMI
    union Bilgi u;
    u.i = 10;
    u.f = 23.2;
    strcpy(u.metin, "Deneme");

    printf("\nUNION Deneme:\n");
    printf("i = %d\n", u.i);           // Geçersizleşmiş olabilir
    printf("f = %.2f\n", u.f);         // Geçersizleşmiş olabilir
    printf("metin = %s\n", u.metin);   // Sadece son atama geçerli olur!

    // 📌 ENUM KULLANIMI
    enum Renk r = SARI;
    if (r == SARI) {
        printf("\nSeçilen renk: SARI\n");
    }

    return 0;
}

/*
🧠 BİLGİLENDİRME:
------------------
📦 STRUCT:
- Tüm alanlar bellekte ayrı yer kaplar
- Aynı anda hepsine erişilebilir

📦 UNION:
- Tüm alanlar aynı bellek alanını paylaşır
- Son girilen veri geçerlidir

📦 ENUM:
- Sabitleri isimlendirir (KIRMIZI = 0, MAVI = 1, SARI = 2)
- Kodun okunabilirliğini artırır

🎯 Bu hafta C dilinin daha gelişmiş veri yapılarıyla tanıştık!
*/
