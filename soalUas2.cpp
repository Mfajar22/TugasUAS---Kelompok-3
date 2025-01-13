#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    vector<int> nilai = { 92, 65, 74, 80, 80, 70, 78 };

    // Hitung Mean
    double sum = 0;
    for (int value : nilai) sum += value;
    double mean = sum / nilai.size();

    // Hitung Median
    sort(nilai.begin(), nilai.end());
    double median = (nilai.size() % 2 == 0) ?
        (nilai[nilai.size() / 2 - 1] + nilai[nilai.size() / 2]) / 2.0 :
        nilai[nilai.size() / 2];

    // Hitung Standar Deviasi
    double variance = 0;
    for (int value : nilai) variance += pow(value - mean, 2);
    variance /= nilai.size();
    double stdDev = sqrt(variance);

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
