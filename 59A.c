#include<stdio.h>
#include<string.h>
int main()
{
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE*/
    char s[100];
    scanf("%s", &s);
    int len, up=0, low=0, i;
    len= strlen(s);

    for(i=0; i<len; i++)
    {
        if(s[i]>92)
        {
            low++;
        }
        else
        {
            up++;
        }
    }
    if(up>low)
    {
        for(i=0; i<len; i++)
        {
            if(s[i]>92)
            {
                s[i]=s[i]-32;
            }
        }
    }
    else
    {
        for(i=0; i<len; i++)
        {
            if(s[i]<92)
            {
                s[i]=s[i]+32;
            }
        }
    }
    printf("%s", s);
    return(0);
}
