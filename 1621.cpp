#include <iostream>
#include <unordered_set>
#include <set> // faster in some cases, specially for smaller sizes
using namespace std;

int main()
{
    int n;
    int res = 0;
    cin >> n;
    set<int> distinct;
    while(n--)
    {
        int next;
        cin >> next;

        if(distinct.count(next) == 0){
            res++;
        }

        distinct.insert(next);
    }

    cout << res << endl;
    return 0;
}