#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    int min_gondolas = 0;
    cin >> n >> x;

    vector<int> weights(n, 0);

    for(int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());

    int start = 0;
    int end = weights.size() - 1;

    // a gondola can only have one or two children

    while(start<=end)
    {
        if(weights[start] + weights[end] > x)
        {
            end--;
        }
        else
        {
            start++;
            end--;
        }

        min_gondolas++;
    }

    cout << min_gondolas << endl;
}

/*
10 15
9 8 8 9 10 8 5 8 7 10
5 7 8 8 8 8 9 9 10 10
*/