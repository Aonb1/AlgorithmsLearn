#include<bits/stdc++.h>
using namespace std;
int main() {
   string s;
   cin>>s;
   s='#'+s+'#';
   int pos1[s.size()-2]={0},pos2[s.size()-2]={0},ans=0;
   for(int i=1;i<=s.size()-2;i++) {
    for(int l=i-1;l>=0;l--) {
        if(s[l]==s[i]) {
            pos1[i]=l;
            break;//第一次相同就break
        } 
        else pos1[i]=0;
    }
    for(int r=i+1;r<=s.size()-1;r++) {
         if(s[r]==s[i]){
            pos2[i]=r;
            break;
         }
         else pos2[i]=s.size()-1;
    }//复杂度O(n^2)
   }
   for(int i=1;i<=s.size()-2;i++) 
              ans+=(i-pos1[i])*(pos2[i]-i);
   cout<<ans;
return 0;
}
/* 算法一：
特点：区间是连续的
ababc 枚举对象：字符
position:当前字符位置
1.从当前位置-1往左寻找第一次相同字符出现的位置->（pos1） 若没有找到 则pos1=0
2.从当前位置+1往右寻找第一次相同字符出现的位置->（pos2） 若没有找到 则pos2=s.size()
3.在(pos1+1)~(pos2-1)之内的字符组成的所有子串 
没找到置为1和2的后两种情况
4.对于ababc中:
            第一个a来说 i-pos1=1-0=1,pos2-i=3-1=2,ans+=2;
            对于第一个b (i-pos1)*(pos2-i)=(2-0)*(4-2)=4,ans+=4
  ///#ababc#
     0123456 
    a
    (1-0)*(3-1)=2
    b
    (2-0)*(4-2)=4
    a
    (3-1)*(6-3)=2*3=6
    b
    (4-2)*(6-4)=4
    c
    (5-0)*(6-5)=5
    ans=6+6+9=21....模拟正确
----------------------------------------
算法二：直观 枚举子串O(n^3)算法 对于该题只能对50% 计算机6-7亿一般的支持o(n^2)~o(n^3)复杂度最好
a 1
ab 2
aba 1
abab 0
ababc 1
---5
b 1
ba 2
bab 1
babc 2
---6
a 1
ab 2
abc 3
---6
b 1
bc 2
---3
d 1
---1
sum---5+6+6+3+1=4+6+11=21
*/
