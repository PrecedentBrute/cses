#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, k;
    int res = 0;
    cin >> n >> m >> k;

    vector<int> requests(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> requests[i];
    }

    vector<int> apartments(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> apartments[i];
    }

    sort(requests.begin(), requests.end());
    sort(apartments.begin(), apartments.end());

    int req_ptr = 0, app_ptr = 0;

    /*
    4 3 5
    60 45 80 60
    30 60 75
    */

    while (req_ptr < requests.size() && app_ptr < apartments.size())
    {
        int diff = requests[req_ptr] - apartments[app_ptr];
        if (abs(diff) <= k)
        {
            res++;
            req_ptr++;
            app_ptr++;
            continue;
        }
        
        if(diff > 0){
            app_ptr++;
        }
        else
        {   
            req_ptr++;
        }
    }

    cout << res << endl;
}