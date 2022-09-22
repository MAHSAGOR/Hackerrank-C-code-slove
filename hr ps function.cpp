#include <bits/stdc++.h>

using namespace std;
int my_fun(int a,int b,int c,int d);
int main()
{
    int a,b,c,d,res;
    cin>>a>>b>>c>>d;
    res=my_fun(a,b,c,d);
    cout<<res<<endl;
    return 0;
}
int my_fun(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
        return a;
    else if(b>a && b>c && b>d)
        return b;
    else if(c>a && c>b && c>d)
        return c;
    else
        return d;
}
