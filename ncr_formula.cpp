#include<iostream>
using namespace std;
int fact(int n);
int main(){
	int ncr(int a,int b);
	
	int n,r;
	cout<<"enter n and r in nCr"<<endl;
	cin>>n>>r;
	int result= ncr(n,r);
	cout<<result<<endl;
	return 0;
}
int ncr(int n,int r){
	int newm=fact(n);
	int denom=fact(r)*fact(n-r);
	int result=newm/denom;
	return result;
}
int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
