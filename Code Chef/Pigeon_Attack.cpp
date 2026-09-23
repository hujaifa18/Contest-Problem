#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int d=0;
        int ans=0;
        while(d<n)
        {
            ans++;
            if(ans%k==0)
                continue;
            else
                d++;
        }
        cout<<ans<<endl;
        
    }
}
