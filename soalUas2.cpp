#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // Gunakan array untuk menyimpan nilai
    int nilai[7] = { 92, 65, 74, 80, 80, 70, 78 };
    int ukuran = 7;

    // Hitung Mean
    double sum = 0;
    for (int i = 0; i < ukuran; i++) {
        sum += nilai[i];
    }
    double mean = sum / ukuran;

    // Hitung Median
    sort(nilai, nilai + ukuran); // Urutkan array
    double median;
    if (ukuran % 2 == 0) {
        median = (nilai[ukuran / 2 - 1] + nilai[ukuran / 2]) / 2.0; // Jika jumlah elemen genap
    }
    else {
        median = nilai[ukuran / 2]; // Jika jumlah elemen ganjil
    }

    // Hitung Standar Deviasi
    double variance = 0;
    for (int i = 0; i < ukuran; i++) {
        variance += pow(nilai[i] - mean, 2); // Tambahkan kuadrat selisih ke variansi
    }
    variance /= ukuran; // Rata-rata variansi
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
