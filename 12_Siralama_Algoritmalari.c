// 12_Siralama_Algoritmalari.c
// 12. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu dosyada Selection Sort, Bubble Sort, Insertion Sort ve Merge Sort algoritmaları anlatılır.

/*
📌 SIRALAMA NEDİR?
--------------------
Bir dizi elemanını belirli bir düzene (artan veya azalan) göre dizmektir.

🎯 Amaç: Veriye daha hızlı erişmek, daha anlamlı sonuçlar üretmek.

Sıralama iki şekilde yapılabilir:
- Küçükten büyüğe (artan)
- Büyükten küçüğe (azalan)

🎯 SEÇİM KRİTERİ:
- Küçükten büyüğe: sayısal veriler, sıralı listeler, puanlama
- Büyükten küçüğe: sıralı lider tabloları, azalan öncelikler
*/

#include <stdio.h>

// 📌 SELECTION SORT (KÜÇÜKTEN BÜYÜĞE)
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) { // Küçükten büyüğe
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

/*
⏱️ SELECTION SORT ANALİZİ:
- Best Case (Ω): O(n²)
- Average (Θ): O(n²)
- Worst Case (O): O(n²)
Avantaj: Bellek dostudur, dizi üzerinde yerinde sıralama yapar.
Dezavantaj: Performansı düşüktür.
*/

// 📌 BUBBLE SORT (BÜYÜKTEN KÜÇÜĞE)
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) { // Büyükten küçüğe
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*
⏱️ BUBBLE SORT ANALİZİ:
- Best Case (Ω): O(n) → zaten sıralıysa
- Average (Θ): O(n²)
- Worst Case (O): O(n²)
Avantaj: Basit algoritma
Dezavantaj: Performansı kötüdür, büyük diziler için önerilmez.
*/

// 📌 INSERTION SORT (ARTAN SIRALI)
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) { // Küçükten büyüğe
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

/*
⏱️ INSERTION SORT ANALİZİ:
- Best Case (Ω): O(n)
- Average (Θ): O(n²)
- Worst Case (O): O(n²)
Avantaj: Küçük dizilerde hızlıdır, sıralı dizilerde etkilidir.
*/

// 📌 MERGE SORT (ARTAN SIRALI)
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[50], R[50];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

/*
⏱️ MERGE SORT ANALİZİ:
- Best Case (Ω): O(n log n)
- Average (Θ): O(n log n)
- Worst Case (O): O(n log n)
Avantaj: Büyük veri setlerinde etkilidir
Dezavantaj: Ekstra bellek kullanır (yardımcı diziler)
*/

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    printf("Orijinal dizi: ");
    printArray(dizi, n);

    // Merge Sort örneği çalıştır
    mergeSort(dizi, 0, n - 1);

    printf("Sıralanmış dizi (Merge Sort ile): ");
    printArray(dizi, n);

    return 0;
}
