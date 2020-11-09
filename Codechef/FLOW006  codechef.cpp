#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
	int num;
	cin>>num;
	int sum=0;
	while(num>0){
		int r=num%10;
		sum=sum+r;
		num=num/10;
	}
	cout<<sum;
	t--;
}
}
