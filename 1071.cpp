#include <iostream>
#include <algorithm>
using namespace std;
 
typedef long long ll;
/*
 1 2 9 10
 4 3 8 11
 5 6 7 12
16 15 14 13
 */

/*
 1 2 3 4
 2 2 3 4
 3 3 3 4
 4 4 4 4
*/

int main() {
    ll t;
    cin >> t;
    
    while(t--){
        ll row, col;
        cin >> row >> col;
        
        ll level  = max(row, col);
        ll start = level*level;
        
        if(level%2 == 0){
            start -= (level - row);
            start -= (col - 1);
        }else{
            start -= (row - 1);
            start -= (level - col);
        }
        
        cout << start << endl;
    }
}
