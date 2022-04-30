#include <bits/stdc++.h>
using namespace std;
void ser(vector<int> v, int s, int e, int t, int &c)
{
    int mid = s + (e - s) / 2;
    if (s <= e)
    {
        if (v[mid] <= t)
        {
            c = max(c, v[mid]);
            ser(v, mid + 1, e, t, c);
        }
        else
        {
            ser(v, s, mid - 1, t, c);
        }
    }
    return;
}

int main()
{
    vector<int> v;
    v = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int s = 0, n = v.size(), e = n - 1, t = 10, c = INT_MIN;
    ser(v, s, e, t, c);
    cout << c;
    return 0;
}
