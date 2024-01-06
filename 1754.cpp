#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define bigp 1000000007

typedef long long ll;
typedef unsigned long long ull;

/*
 Lets say x times we take 2 from a, and 1 from b
 and y times we take 2 from b and 1 from a meaning:
 
 a = 2x + 1y
 b = 1x + 2y

 on solving for x and y

 2a - b = 3x
 2b - a = 3y

 x and y should be non negative
 Therefore total should be divisible by 3, and 2a > b, and 2b > a
 */

int main() {
    ll t;
    cin >> t;

    while(t--){
        ll l, r;
        cin >> l >> r;
        
        if(l < r) swap(l,r);
        
        if(l > 2*r){
            cout<< "NO" << endl;
        }else if((l+r) % 3 == 0){
            cout<<"YES"<< endl;
        }else{
            cout<<"NO"<< endl;
        }
    }
}
