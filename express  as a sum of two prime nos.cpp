#include<iostream>
using namespace std;
int prime(int n){
int flag=1;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		flag=0;
		break;
	}
	return flag;
}
int main()
{
	int n,i;
	cout<<"Enter a number :";
	cin>>n;
	for(i=2;i<=n;i++)
	{if(prime(i)==1)
	{
		if(prime(n-i)==1){
			cout<<n<<" "<<" is a sum of "<<i<<" "<<"and"<<" "<<n-i<<endl;
		}
	}
	}
}
