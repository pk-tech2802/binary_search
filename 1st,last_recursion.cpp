#include <bits/stdc++.h>
using namespace std;
void ser(vector<int> v, int s, int e, int &s1, int &e1, int t)
{
    int mid = s + (e - s) / 2;
    
    if (s <= e)
    {
        if (v[mid] == t)
        {
            s1 = min(s1,mid), e1 = max(e1,mid);
            ser(v, s, mid - 1, s1, e1, t);
            ser(v, mid + 1, e, s1, e1, t);
            return;
        }
        else if (v[mid] < t)
        {
            ser(v, mid + 1, e, s1, e1, t);
        }
        else
        {
            ser(v, s, mid - 1, s1, e1, t);
        }
    }

    else
    {
        return;
    }
}
int main()
{
    vector<int> v;
    v = {1, 2, 2, 3, 3, 4, 5};

    int s = 0, e = 6, t = 5, s1 = INT_MAX, e1 = INT_MIN;
    ser(v, s, e, s1, e1, t);
    cout
        << s1 << " " << e1 << "\n";
    return 0;
}
