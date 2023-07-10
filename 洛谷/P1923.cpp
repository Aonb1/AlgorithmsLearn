#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    int a[n];
    for(long long int i=0;i<n;i++)
    scanf("%lld",&a[i]);
    sort(a,a+n);
    cout<<a[k];
    return 0;
}