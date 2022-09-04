#include <iostream>
#include <iomanip>

using namespace std;

void calc(double a, double b, char c){
    switch (c)
    {
    case '+':
        cout << fixed << setprecision(2) << a + b;
        break;
    
    case '-':
        cout << fixed << setprecision(2) << a - b;
        break;
    
    case '*':
        cout << fixed << setprecision(2) << a * b;
        break;
    
    case '/':
        if(b == 0) cout << "Math Error";
        else cout << fixed << setprecision(2) << a / b;
        break;
    }
}

int main(){
    double a, b;
    char c;
    cin >> a >> c >> b;
    calc(a, b, c);
    return 0;
}