#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,rev=0;
        cin>>n;
        while(n>0)
        {
            m=n%10;
            rev=rev*10+m;
            n=n/10;
        }
        cout<<rev<<endl;
    }
    return 0;
}