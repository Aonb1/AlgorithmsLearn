#include<bits/stdc++.h>
using namespace std;
int n,a,b,t=0;
priority_queue<int> q;
int main()
{
	int num;
	scanf("%d%d%d",&n,&a,&b);
	for(int i=0;i<n;i++){
		scanf("%d",&num); 
		q.push(num);//每件衣服湿度压入优先队列//3 2 1
	}
	while (true){//每次对最shi衣服使用烘干机
       int number=q.top();//取出3
       if(number-t*a<=0)  break;
       int temp=number-b;//使用烘干机
       q.pop();//已经操作过了 更新一下
       q.push(temp);
    t++;
    }
	cout<<t;
	return 0;
}
