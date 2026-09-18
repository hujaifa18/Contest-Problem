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
        if (k < n || k == 2 * n)
        {
            cout << -1 << endl;
            continue;
        }
        vector<vector<int>> mat(n, vector<int>(n));
        int ex = 2 * n - k, curr = 1;
        for (int i = 0; i < ex; i++)
            mat[i][i] = curr++;
        for (int i = ex; i < n; i++)
        {
            mat[i - 1][i] = curr++;
            mat[i][i - 1] = curr++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!mat[i][j])
                    mat[i][j] = curr++;
            }
        }
        for (const auto &x : mat)
        {
            for (int i = 0; i < n; i++)
            {
                if (i)
                    cout << " ";
                cout << x[i];
            }
            cout << endl;
        }
    }
    return 0;
}