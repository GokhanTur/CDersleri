// 13_Arama_Algoritmalari_v2.c
// 13. HAFTA KONUSU — Hazırlayan: Gökhan Tür
// Bu versiyonda, linear ve binary search algoritmalarının farklı sonuçlar verdiği senaryo gösterilir.

#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Sırasız dizi
    int dizi[] = {64, 34, 90, 23, 12, 11, 22}; // 90 en sonda kalacak şekilde seçildi
    int size = sizeof(dizi) / sizeof(dizi[0]);
    int hedef_linear = 90;   // Linear'da bulunabilecek ama binary'de olmayacak
    int hedef_binary = 23;   // İki algoritma için de geçerli

    printf("Orijinal dizi: ");
    printArray(dizi, size);

    // Linear Search (sıralı olmasına gerek yok)
    int sonuc1 = linearSearch(dizi, size, hedef_linear);
    if (sonuc1 != -1)
        printf("Linear Search: %d bulundu, indeks: %d\n", hedef_linear, sonuc1);
    else
        printf("Linear Search: %d bulunamadı\n", hedef_linear);

    // Binary Search için diziyi sıralıyoruz
    selectionSort(dizi, size);
    printf("Sıralanmış dizi: ");
    printArray(dizi, size);

    int sonuc2 = binarySearch(dizi, 0, size - 1, hedef_linear);
    if (sonuc2 != -1)
        printf("Binary Search: %d bulundu, indeks: %d\n", hedef_linear, sonuc2);
    else
        printf("Binary Search: %d bulunamadı (Sıralamaya göre aranır!)\n", hedef_linear);

    int sonuc3 = binarySearch(dizi, 0, size - 1, hedef_binary);
    if (sonuc3 != -1)
        printf("Binary Search (Geçerli örnek): %d bulundu, indeks: %d\n", hedef_binary, sonuc3);
    else
        printf("Binary Search: %d bulunamadı\n", hedef_binary);

    return 0;
}

/*
📊 GÖSTERİM:
-------------
- Linear Search → dizi sıralı olmasa da 90'ı bulur.
- Binary Search → dizi sıralandıktan sonra çalışır, 90 artık eski konumunda değildir.
Bu nedenle binary'de yanlış sonuç çıkabilir.

🎯 Bu örnek sayesinde Linear Search ve Binary Search farkı net şekilde gözlemlenebilir!
*/
