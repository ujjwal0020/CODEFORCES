#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int c=0,d=0;
        string s;
        cin>>s;
        for(int j=0;j<3;j++)
        {
            c=c+s[j];
        }
        for(int j=3;j<6;j++)
        {
            d=d+s[j];
        }
        if(c==d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
