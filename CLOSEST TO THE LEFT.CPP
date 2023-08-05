#include <iostream>
 
using namespace std;
int movr(int n,int a[],int target)
{

    int lo=0;
    int hi=n-1;
    int val=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(a[mid]<=target)
        {
            if(val<mid)
            val=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return(val+1);
}
 
int main()
{
   int n,k;
   cin>>n>>k;
   int a[n],b[k];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int t=0;t<k;t++)
   {
       cin>>b[t];
   }
   for(int i=0;i<k;i++)
   {
       int g;
       g=movr(n,a,b[i]);
       cout<<g<<endl;
   }
}
