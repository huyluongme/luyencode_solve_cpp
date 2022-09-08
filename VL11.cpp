#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 2)
        cout << "NO";
    else
    {
        bool check[n + 1];
        for (int i = 2; i <= n; i++)
            check[i] = true;
        for (int i = 2; i <= n; i++)
        {
            if (check[i] == true)
            {
                for (int j = 2 * i; j <= n; j += i)
                {
                    check[j] = false;
                }
            }
        }
        if (check[n])
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
