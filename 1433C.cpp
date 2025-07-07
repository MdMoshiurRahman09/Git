#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n, mx=INT_MIN;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
           mx=max(mx,arr[i]);
       }
       int index=-1;
       for(int i=0; i<n; i++)
       {

        if((i-1)>=0 && arr[i]==mx && arr[i-1]<arr[i] )
            {
                index=i+1;
                break;
            }

         if((i+1)<n && arr[i]==mx && arr[i+1]<arr[i])
            {
                index=i+1;
                break;
            }
       }

       cout<<index<<endl;

    }
    return 0;
}
