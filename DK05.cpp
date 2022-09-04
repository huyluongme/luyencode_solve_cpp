#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n < 0) cout << "NO";
    else{
        long long tmp = (long long)sqrt(n);
        if(tmp * tmp == n) cout << "YES";
        else cout << "NO";
    }
    return 0;
}