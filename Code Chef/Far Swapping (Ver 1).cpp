#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        while(true)
        {
            int ops = 0;
            for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1]&&v[i]-v[i+1]>1)
                {swap(v[i],v[i+1]);
                    ops++;
                }
        }
        if(ops==0)  break;
        }
        for(auto x:v)   cout<<x<<" ";
        cout<<endl;
    }
}
