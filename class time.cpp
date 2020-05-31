#include<iostream>
using namespace std;
class Time{
	int sec, h,m,s;
	public :
	inptime();
	inseconds();
	display();
	//total();
};
Time :: inptime(){
	cout<<"Hours? ";
		cin>>h;
	cout<<"Minutes?";
	cin>>m;
	cout<<"Seconds?";
	cin>>s;

}
Time :: inseconds(){
	sec= 3600*h+60*m+s;
}
Time :: display(){
cout<<" The time is "<<h<<":"<<m<<":"<<s<<endl;
cout<<"The total time in seconds is"<<sec;
}
int main()
{
	Time t;
	t.inptime();
	t.inseconds();
	t.display();
}
