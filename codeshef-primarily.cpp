#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"no"<<endl;
            }
            else
            {
                cout<<"yes"<<endl;
            }
        }
    }
    return 0;
}