#include <iostream>
using namespace std;

int main(){
    int n, result = 0;
    cin >> n;
    (n % 2 == 0) ? cout << (3*n + 2)/2 : cout << -(3*n + 1)/2;
    return 0;
}