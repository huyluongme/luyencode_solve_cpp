#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; 
    float sum = 0; 
    cin >> n;

    for(int i = 2; i <= n; i++){
        sum += (float)1/i;
    }
    cout << fixed << setprecision(4) << sum ;

    return 0;
}