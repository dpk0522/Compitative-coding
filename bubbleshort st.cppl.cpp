#include<iostream>
using namespace std;
int main()
{
	int i,j,temp;
    int arr[5]={5,6,1,2,7};
	for(j=0;j<5;j++){
	
	for(i=0;i<5-i;i++){
		if(arr[i]>arr[i+1]){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		}
}
	}
	for(i=0;i<5;i++){
		cout<<arr[i];
	}
	return 0;
}
