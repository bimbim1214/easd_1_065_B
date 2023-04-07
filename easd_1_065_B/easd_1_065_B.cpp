//karena algoritma sangat penting dalam menyeselesaikan suatu masalah dalam program, karena algoritma ini merupakan langkah awal dalam mengurutkan suatu cara atau fungsi agar berjalan secara teratur.
//array dan link list
//ukuran input, jenis algoritma, penggunaan struktur data
//quick sort karena lebih sedikit menggunakan memori dan mempunyai kompleksitas dengan 0(n log n)
//buble sort-insertion sort-selection sort termasuk ke quadratic, quick sort dan merge sort termasuk ke loglinear
//

#include <iostream>
using namespace std;

const int max = 65 + 20 - 2 * 15 + 10 + 20; // jumlah maksimum data

int bimo[65];
int temp[85];

void merge(int low, int mid, int high) {
    int i = low;
    int AR = mid + 1;
    int k = low;

    while (i <= mid && AR <= high) {
        if (bimo[i] <= bimo[AR]) {
            temp[k] = bimo[i];
            i++;
        }
        else {
            temp[k] = bimo[AR];
            AR++;
        }
        k++;
    }

    while (AR <= high) {
        temp[k] = bimo[AR];
        AR++;
        k++;
    }

    while (i <= mid) {
        temp[k] = bimo[i];
        i++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        bimo[i] = temp[i];
    }
}

void mergeSort(int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;
    mergeSort(low, mid);
    mergeSort(mid + 1, high);
    merge(low, mid, high);
}

void input()
