#include <iostream>
using namespace std;
 
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll ans = n;
    for(int i=1; i<=n-1; i++) {
        ll aux;
        cin >> aux;
        ans ^= (aux^i);
    }
    cout << ans << "\n";
 
    return 0;
}
