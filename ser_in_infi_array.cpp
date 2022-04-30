#include <bits/stdc++.h>
using namespace std;
int ser(vector<int> v, int s, int e, int t)
{
    int mid = s + (e - s) / 2;
    if (s <= e)
    {
        if (v[mid] == t)
            return mid;
        if (v[mid] < t)
        {
            ser(v, mid + 1, e, t);
        }
        else
        {
            ser(v, s, mid - 1, t);
        }
    }
    return -1;
}

int main()
{
    vector<int> v;
    v = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int s = 0, e = 1, t = 10;
    while (1)
    {
        if (v[e] >= t)
        {
            break;
        }

        s = e;
        e = s << 1;
    }

    cout << s << " " << e << '\n';
    cout << ser(v, s, e, t);
    return 0;
}
