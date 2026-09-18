#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)   cnt0++;
            else cnt1++;
        }
        if(cnt1 >=cnt0 ) cout<<"Bessie\n";
        else    cout<<"Elsie\n";
    }
    return 0;
}
