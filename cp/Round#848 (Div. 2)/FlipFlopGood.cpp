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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int cnt=0;
        int flag=0;
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(v[i]==-1 && v[i-1]==-1)flag=1;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)cnt++;
            sum+=v[i];
        }
        if(flag==1)cout<<sum+4<<endl;
        else if(cnt==0 || cnt==n)cout<<sum-4<<endl;
        else
        cout<<sum<<endl;
    }
}