#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a[3][3] = { {4, 2, 8},
                      {2, 1, 5},
                      {3, 2, 4} };
    float invers[3][3];
    float det;

    det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    if (det == 0) {
        cout << "Matriks tidak memiliki invers!" << endl;
        return 0;
    }

    invers[0][0] = (a[1][1] * a[2][2] - a[1][2] * a[2][1]) / det;
    invers[0][1] = -(a[0][1] * a[2][2] - a[0][2] * a[2][1]) / det;
    invers[0][2] = (a[0][1] * a[1][2] - a[0][2] * a[1][1]) / det;
    invers[1][0] = -(a[1][0] * a[2][2] - a[1][2] * a[2][0]) / det;
    invers[1][1] = (a[0][0] * a[2][2] - a[0][2] * a[2][0]) / det;
    invers[1][2] = -(a[0][0] * a[1][2] - a[0][2] * a[1][0]) / det;
    invers[2][0] = (a[1][0] * a[2][1] - a[1][1] * a[2][0]) / det;
    invers[2][1] = -(a[0][0] * a[2][1] - a[0][1] * a[2][0]) / det;
    invers[2][2] = (a[0][0] * a[1][1] - a[0][1] * a[1][0]) / det;

    cout << " Matrik A \n    {4, 2, 8} \n    {2, 1, 5} \n    {3, 2, 4} \n ";
    cout << "==========================\n ";

    cout << "Invers matriks:" << endl;
    for (int i = 0; i < 3; i++) {
        //nested loop
        for (int j = 0; j < 3; j++) {
            cout << fixed << setprecision(2) << setw(8) << invers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}