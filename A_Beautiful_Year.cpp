#include<iostream>
using namespace std;
int check(int n)
{
	int temp=n;
	int i=3,count,c=0;
	int a[4];
	while(n>0)
	{
	a[i]=n%10;
	n=n/10;
	i--;
	}
	for(int i=0;i<4;i++)
	{
		count=0;
		for(int j=0;j<4;j++)
		{
			if(a[j]==a[i])
			count++;
		}
		if(count==1)
		c++;
	}
	if(c==4)
	  return 1;
	else
	 return temp;
	  
	
}
int main()
{
	int y,ch=0,x;
	cin>>y;
	while(ch!=1)
	{
		y++;
		x=check(y);
	if(x==1){
	 cout<<y;
	 ch=1;
       }
    }
}