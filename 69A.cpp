#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, sumx=0, sumy=0, sumz=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a, b,c;
        cin>>a>>b>>c;
        sumx+=a;
        sumy+=b;
        sumz+=c;
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return(0);

}
