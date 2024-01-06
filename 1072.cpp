#include <iostream>
#include <algorithm>
using namespace std;
 
typedef long long ll;

/*
 k p p
 p p x
 p x p
*/

int main() {
    ll n;
    cin >> n;
    
    for(ll k = 1; k <= n; k++){
        ll totalCases = (k*k*(k*k - 1))/2;
        ll illegalMoves = 4*(k-1)*(k-2); // 3*2 and 2*3 rectangles, and again *2 as knights are different
        
        cout << totalCases - illegalMoves << endl;
    }
}
