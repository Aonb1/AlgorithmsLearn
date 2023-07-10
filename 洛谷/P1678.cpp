#include<bits/stdc++.h>
using namespace std;
long long int ans=0;
int main(){
    long long int n,stun;
    cin>>n>>stun;
    int arr1[n],arr2[stun];
    for(int i=0;i<n;i++)   scanf("%d",&arr1[i]);
    sort(arr1,arr1+n);
    for(int i=0;i<stun;i++)scanf("%d",&arr2[i]);
    //o(n*logn)    m≤100000=10^6  m*logm<=10^10   
    for(int i=0;i<stun;i++)//n
    {
        int l=0,r=n-1,temp=INT_MAX;
        while(l<=r)//logn
        {
           int mid=(l+r)>>1;
           if(arr2[i]<=arr1[mid])
           {
             temp=min(temp,abs(arr2[i]-arr1[mid]));//abs返回类型int fabs返回类型double
             r=mid-1;
           }
           else
           {
            temp=min(temp,abs(arr2[i]-arr1[mid]));//abs返回类型int fabs返回类型double
            l=mid+1;
           }
        }
        ans+=temp;
    }
    cout<<ans;
    return 0;
}
//4 3
//513 598 567 689
//500 600 550
//--------------
//513 567 598 689
//500 600 550
