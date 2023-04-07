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
int temp[65];

void merge(int low, int mid, int high) {
    int i = low;
    int AR = mid + 1;
    int k = low;

   