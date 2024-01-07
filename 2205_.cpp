#include <iostream>
#include <cmath>
using namespace std;

//https://cp-algorithms.com/algebra/gray-code.html
int main()
{
    int n;
    cin >> n;

    auto g = [](int n) -> int {
        return n^(n>>1);
    };

    for(int i = 0; i < (int)pow(2, n); i++)
    {
        int code = g(i);
        for(int i = 0; i < n; i++)
        {
            int mask = 1 << (n - 1);
            cout << ((mask & code) ?  "1" : "0");
            code <<= 1;
        }
        cout << endl;
    }
}