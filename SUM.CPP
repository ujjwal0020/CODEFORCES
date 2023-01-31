#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c) cout<<"yes"<<endl;
        else if(b+c==a) cout<<"yes"<<endl;
        else if(a+c==b) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
