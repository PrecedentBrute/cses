#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define bigp 1000000007

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ll n;
    cin >> n;
    
    ll fives = 0;
        
    for(int k = 5; k <= n; k*=5){
        fives += n/k;
    }
    
    cout << fives << endl;
}
