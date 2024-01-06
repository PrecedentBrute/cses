//
//  main.cpp
//  cses
//
//  Created by Nachiket Kotalwar on 07/09/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n;
    cin >> n;
    
    while(n != 1){
        cout << n << " ";
        
        if(n%2 == 0){
            n /= 2;
        }else{
            n = 3*n + 1;
        }
    }
    
    cout << n << endl;
}
