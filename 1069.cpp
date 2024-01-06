#include <iostream>
using namespace std;
 
typedef long long ll;
 
int main() {
    string s;
    cin >> s;
    
    int res = 1;
    int lenSoFar = 1;
    
    for(int i = 1; i < (int)s.size(); i++){
        lenSoFar = s[i] == s[i-1] ? (lenSoFar + 1) : 1;
        res = lenSoFar > res ? lenSoFar : res;
    }
    
    cout << res << endl;
}
