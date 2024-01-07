#include <iostream>
#include <unordered_map>
using namespace std;

typedef long long ll;

int main(){
    string s;
    cin >> s;
    
    unordered_map<char, int> freq;

    for(int i = 0; i < s.size(); i++){
        freq[s[i]]++;
    }

    int odd_count = 0;
    char odd_char = 0;

    for(auto p : freq){
        if(p.second%2 != 0){
            odd_count += 1;
            odd_char = p.first;
        }
    }

    if(odd_count > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    int start = 0;
    int end = s.size() - 1;

    for(auto p : freq){
        if(p.first == odd_char){
            continue;
        }

        while(p.second != 0){
            s[start] = s[end] = p.first;
            start++;
            end--;
            p.second -= 2;
        }
    }

    while(freq[odd_char] != 0){
        s[start] = odd_char;
        start++;
        freq[odd_char]--;
    }
    
    cout << s << endl;
}