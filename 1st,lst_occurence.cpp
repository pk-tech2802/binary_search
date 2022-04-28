
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v = {1, 2, 3, 3, 3, 4, 5};

    int s = 0, e = 6;
    int res = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == 3)
        {
            res = mid;
            e=mid-1;
        }
        else if (v[mid] < 3)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << res << "\n";
    return 0;
}
