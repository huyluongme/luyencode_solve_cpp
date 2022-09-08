#include <iostream>
using namespace std;

int main()
{
    int a, b, result = 0;
    cin >> a >> b;
    if (a % 2 != 0)
        ++a;
    for (int i = a; i <= b; i += 2)
        result += i;
    cout << result;
    return 0;
}