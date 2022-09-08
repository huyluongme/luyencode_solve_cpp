#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string num;
    getline(cin, num);
    (num.at(0) == '-') ? cout << num.size() - 1 : cout << num.size();
    return 0;
}