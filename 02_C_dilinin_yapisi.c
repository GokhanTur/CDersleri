// 02_C_dilinin_yapisi.c
// Bu dosya, C programlama dilinin temel yapısını ve bir programın bölümlerini açıklamak için hazırlanmıştır.
// 2. HAFTA KONUSU — Hazırlayan: Gökhan Tür

/*
📌 C DİLİNİN YAPISI NEDİR?
----------------------------
C dili, yapısal programlama yaklaşımına uygun, hızlı ve sistem programlamaya yatkın bir dildir.
Bir C programı temel olarak 3 bölümden oluşur:

1️⃣  **Kütüphane ekleme** (preprocessor komutları)
2️⃣  **Ana fonksiyon (main)** — programın başlangıç noktası
3️⃣  **Komutlar ve ifadeler** — işlemleri tanımlar
*/

/*
📚 1. KÜTÜPHANE EKLEME
------------------------
#include <stdio.h>
Bu satır, "Standard Input Output" kütüphanesini programa dahil eder.

👉 Bu kütüphane, printf(), scanf(), getchar() gibi giriş/çıkış fonksiyonlarını kullanmamıza olanak tanır.
*/

/*
🧱 2. ANA FONKSİYON: int main()
-------------------------------
C programları main() fonksiyonu ile başlar.
İçine yazılan tüm kodlar sırayla çalışır.
*/

/*
✍️ 3. KOMUTLAR VE BLOKLAR
---------------------------
Kodlar { } süslü parantezler içinde bloklar halinde yazılır.
Her ifade satırı ";" ile biter.
*/

// Şimdi basit bir yapı ile C dilinin temelini kodlayalım:

#include <stdio.h>

int main() {
    // 👋 Ekrana mesaj yazdırmak için printf kullanılır
    printf("Merhaba, bu benim ilk C programım!\n");

    // 🛑 Programın sonlanmaması için karakter girişi bekleriz
    char tus;
    tus = getchar();

    // ✅ Program başarılı şekilde sonlanır
    return 0;
}

/*
🧠 EK BİLGİLER:
---------------
- Tüm C programlarında en az bir main() fonksiyonu bulunmak zorundadır.
- return 0; komutu, programın sorunsuz bittiğini işletim sistemine bildirir.
- printf() fonksiyonunda \n yeni satıra geçer.

🔥 Bu yapı, C dilinde her programın temel iskeletidir.
*/
