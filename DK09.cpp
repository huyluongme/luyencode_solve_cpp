#include <iostream>

using namespace std;

int main(){
    int y;
    cin >> y;
    if(y > 0 && y <= 100000){
        if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            cout << "YES";
        else cout << "NO";
    }else cout << "INVALID";
    return 0;
}