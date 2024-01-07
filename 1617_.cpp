#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define bigp 1000000007

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ull n;
    cin >> n;
    
    ull factor = 2;
    ull res = 1;
    
    while(n > 0){       // iterative binary exponentiation
        if(n & 1){
            res = ((res%bigp)*(factor%bigp))%bigp;
        }
        
        factor = ((factor%bigp)*(factor%bigp))%bigp; // 1 0 0 (2^4) is square of 1 0 (2^2) 
        n >>= 1;
    }
    
    cout << res << endl;
}
