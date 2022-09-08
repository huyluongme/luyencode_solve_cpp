#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

long long fac(long long n){
    long long res = 1;
    for(long long i = n; i >= 1; --i)
        res *= i;
    return res;
}

int main(){
    double x;
    long long n;
    cin >> x >> n;
    double sum = x;

    for(int i = 2; i <= n; ++i)
        sum += (double)pow(x,i)/fac(i);
        
    cout << fixed << setprecision(2) << sum;
    return 0;
}