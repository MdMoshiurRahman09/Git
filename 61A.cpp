#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num1, num2;
    cin>>num1;
    cin>>num2;
    int len=num1.size();

    for(int i=0; i<len; i++)
    {
        if(num1[i]==num2[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }


    }
     return 0;

}
