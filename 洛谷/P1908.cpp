#include<bits/stdc++.h>
using namespace std;
long long n,arr[500001],tmp[500001],ans=0;
void merge(int left,int right,int mid) {
   int l_pos=left,r_pos=mid+1,pos=left;
   while (l_pos<=mid&&r_pos<=right) {
     if(arr[l_pos]<=arr[r_pos])     tmp[pos++]=arr[l_pos++];
      else                         {tmp[pos++]=arr[r_pos++];ans+=mid-l_pos+1;}
   } 
   while (l_pos<=mid)   tmp[pos++]=arr[l_pos++];
   while(r_pos<=right)  tmp[pos++]=arr[r_pos++];
   while(left<=right) {
    arr[left]=tmp[left];
    left++;
   }
}
void merge_sort(int left,int right){
  if(left<right){
    int mid=(left+right)>>1;
    merge_sort(left,mid);
    merge_sort(mid+1,right);
    merge(left,right,mid);
  }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    merge_sort(0,n-1);
    cout<<ans;
    return 0;
}
