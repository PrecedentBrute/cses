#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

/*
 k p p
 p p x
 p x p
*/

int main()
{
    ll n;
    cin >> n;

    for (ll k = 1; k <= n; k++)
    {
        ll totalCases = (k * k * (k * k - 1)) / 2; // k^2 choose 2, knights are identical
        ll illegalMoves = 4 * (k - 1) * (k - 2);   // 3*2 and 2*3 rectangles, *2 for vertical and horizontal ones, 
                                                   // and again *2 as two situations possible in one rectangle.

        cout << totalCases - illegalMoves << endl;
    }
}
