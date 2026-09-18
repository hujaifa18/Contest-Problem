#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i += k)
        {
            bool p = true;
            for (int j = 0; j < k; j++)
            {
                if (s[i + j] == '0')
                    p = false;
            }
            if (p)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
