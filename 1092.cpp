#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
typedef long long ll;

/*
n = 11
sum = 33
 
 11 8 6 5 2 1
 10 9 7 4 3
*/

int main() {
    ll n;
    cin >> n;
    
    ll sum = (n*(n+1))/2;
    
    if(sum % 2 != 0){
        cout << "NO" << endl;
        return 0;
    }
    
    vector<ll> first, second;
    ll fs = 0, ss = 0;
    
    for(ll i = n; i >= 1; i--){
        if(fs > ss){
            second.push_back(i);
            ss += i;
        }else{
            first.push_back(i);
            fs += i;
        }
    }
    
    cout << "YES" << endl;
    cout << first.size() << endl;
    for(ll i : first) cout << i << " ";
    cout << endl << second.size() << endl;
    for(ll i : second) cout << i << " ";
    cout << endl;
}
