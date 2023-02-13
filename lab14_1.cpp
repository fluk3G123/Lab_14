#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double mean = 0;
    for (int i = 0; i < N; i++) {
        mean += A[i];}
    B[0] = mean / N;

double variance = 0;
    for (int i = 0; i < N; i++) {
        variance += (A[i] - B[0]) * (A[i] - B[0]);}
    B[1] = sqrt(variance / N);

double GM = 1;
    for (int i = 0; i < N; i++) {
        GM *= A[i];}
    B[2] = pow(GM, 1.0 / N);

double HM = 0.0;
    for (int i = 0; i < N; i++) {
        HM += 1.0 / A[i];}
    B[3] = N / HM;

B[4] = *max_element(A, A + N);
B[5] = *min_element(A, A + N);
}
