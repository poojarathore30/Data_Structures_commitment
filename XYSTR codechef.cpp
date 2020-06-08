#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
			char str[10000];
			cin>>str;
			int count=0;
			int i=0;
			for (;str[i+2] != '\0';i++){
				if(str[i]=='x'&&str[i+1]=='y')
				{
					count++;
					i++;
					continue;
				}
				else if(str[i]=='y'&&str[i+1]=='x')
				{
					count++;
					i++;
					continue;
				}
			}
			if(str[i]=='x'&&str[i+1]=='y')
			count++;
			else if(str[i]=='y'&&str[i+1]=='x')
			count++;
			cout<<count<<endl;
			
			t--;
			}

}

