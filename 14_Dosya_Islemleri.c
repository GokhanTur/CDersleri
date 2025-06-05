// 14_Dosya_Islemleri.c
// 14. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada C dilinde metin ve binary dosya işlemleri açıklanır.

/*
📂 DOSYA İŞLEMLERİ NEDİR?
---------------------------
Program dışı verilerin kalıcı olarak saklanmasını ve yeniden erişilmesini sağlar.
C dilinde stdio.h kütüphanesi ile gerçekleştirilir.

📌 KULLANILAN TEMEL FONKSİYONLAR:
- fopen(), fclose()
- fprintf(), fscanf()
- fputc(), fgetc(), fputs(), fgets()
- fread(), fwrite()
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dosya;

    // 📌 Yazma işlemi (metin dosyasına)
    dosya = fopen("ornek.txt", "w");
    if (dosya == NULL) {
        printf("Dosya oluşturulamadı!\n");
        return 1;
    }
    fprintf(dosya, "Merhaba Dünya!\n");
    fprintf(dosya, "Bu bir dosya yazma örneğidir.\n");
    fclose(dosya);

    // 📌 Okuma işlemi (metin dosyasından)
    char satir[100];
    dosya = fopen("ornek.txt", "r");
    if (dosya == NULL) {
        printf("Dosya okunamadı!\n");
        return 1;
    }
    printf("Dosya içeriği:\n");
    while (fgets(satir, sizeof(satir), dosya)) {
        printf("%s", satir);
    }
    fclose(dosya);

    // 📌 Binary dosya yazma
    struct {
        int id;
        float maas;
    } calisan = {1, 5000.5};

    dosya = fopen("veri.dat", "wb");
    if (dosya == NULL) {
        printf("Binary dosya yazılamadı.\n");
        return 1;
    }
    fwrite(&calisan, sizeof(calisan), 1, dosya);
    fclose(dosya);

    // 📌 Binary dosya okuma
    dosya = fopen("veri.dat", "rb");
    if (dosya == NULL) {
        printf("Binary dosya okunamadı.\n");
        return 1;
    }
    fread(&calisan, sizeof(calisan), 1, dosya);
    printf("\nBinary veri: ID=%d, Maas=%.2f\n", calisan.id, calisan.maas);
    fclose(dosya);

    return 0;
}

/*
📋 MODLAR (fopen)
---------------------
"r"   → sadece okuma (dosya yoksa hata)
"w"   → sadece yazma (varsa siler, yoksa oluşturur)
"a"   → sona ekleme
"r+"  → okuma + yazma
"w+"  → yazma + okuma (içeriği siler)
"a+"  → ekleme + okuma

📋 BINARY MODLAR
---------------------
"rb", "wb", "ab", "rb+", "wb+", "ab+"

📌 EKSTRA KAVRAMLAR
---------------------
- feof() → dosya sonu kontrolü
- fseek(), ftell(), rewind() → konum kontrolü
- remove(), rename() → silme ve yeniden adlandırma

🧠 ÖNEMLİ NOTLAR:
---------------------
- Dosya işleminden sonra fclose unutulmamalı!
- fgets() → güvenli string okuma
- fprintf/fscanf → formatlı yazma/okuma

✅ Bu hafta veri saklama, dosya okuma/yazma ve binary veri işlemleri öğrendik.
*/
