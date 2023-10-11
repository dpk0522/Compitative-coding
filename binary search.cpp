#include<iostream>
using namespace std;
int binary(int B ,int A[]);
int main(){
	int target;
	cout<<"enter target";
	cin>>target;
	int arr[6]={1,4,5,3,9,2};
	int len=sizeof(arr)/sizeof(int);
	int y=binary(target,arr);
	cout<<y;
	return 0;
}
 
 int binary(int tar,int arr[6]){
    int s=0;
    int e=3;
    int ans;
    int mid=s+(e-s)/2;
    while(s<e){
    	 mid=s+(e-s)/2;
    	 if(arr[mid]==tar){
    	 	ans=mid;
    	 	break;
    	 }else if(arr[mid]>tar)
    	 {
    	 	e=mid;
    	 }else{
    	 	s=mid;
    	 }
    }
    if(ans==0){
    	return -1;
    }
    return ans;
 }
