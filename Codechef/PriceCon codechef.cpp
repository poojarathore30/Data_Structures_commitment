#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
	int n,k;
	cin>>n>>k;
	int arr[n];
	int loss=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>k){
		loss+=arr[i]-k;
		}
		}
		cout<<loss;
			t--;
			}

}



