#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float r;
    cin >> r;
    cout << fixed << setprecision(3) << r * 2 * 3.14 << endl << r * r * 3.14;
    return 0;
}