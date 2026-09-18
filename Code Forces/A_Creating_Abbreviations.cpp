#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> word(n);
        for (auto &s : word)
            cin >> s;
        vector<string> abb(m);
        for (auto &s : abb)
            cin >> s;

        map<char, bool> check;
        for (int i = 0; i < n; i++)
        {
            char ch = toupper(word[i][0]);
            check[ch] = true;
        }
        bool flag = true;
        for (int i = 0; i < m; i++)
        {
            for (auto c : abb[i])
            {
                if (check[c] == false)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}