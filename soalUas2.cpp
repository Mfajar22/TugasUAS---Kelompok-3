#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // Gunakan array biasa untuk menyimpan nilai
    int nilai[] = { 92, 65, 74, 80, 80, 70, 78 };
    int size = sizeof(nilai) / sizeof(nilai[0]); // Hitung jumlah elemen dalam array

    // Hitung Mean
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nilai[i];
    }
    double mean = sum / size;

    // Hitung Median
    sort(nilai, nilai + size); // Urutkan array
    double median;
    if (size % 2 == 0) {
        median = (nilai[size / 2 - 1] + nilai[size / 2]) / 2.0; // Jika jumlah elemen genap
    }
    else {
        median = nilai[size / 2]; // Jika jumlah elemen ganjil
    }

    // Hitung Standar Deviasi
    double variance = 0;
    for (int i = 0; i < size; i++) {
        variance += pow(nilai[i] - mean, 2); // Tambahkan kuadrat selisih ke variansi
    }
    variance /= size; // Rata-rata variansi
    double stdDev = sqrt(variance); // Akar kuadrat dari variansi

    // Tampilkan Hasil
    cout << " ============================ \n";
    cout << " | Mean: " << mean << "\n";
    cout << " ============================ \n";
    cout << " | Median: " << median << "\n";
    cout << " ============================ \n";
    cout << " | Standar Deviasi: " << stdDev << "\n";
    cout << " ============================ \n";

    return 0;
}
