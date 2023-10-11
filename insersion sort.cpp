#include<iostream>
using namespace std;
int main(){
	int i,j,temp;
	int arr[5]={4,2,7,3,6};
	for(i=1;i<5;i++){
		temp=arr[i];
		j=i-1;
		for(;j>=0;j--)
		{
		if(arr[j]>temp){
			arr[j+1]=arr[j];
		}else{
			break;
		}
	}
arr[j+1]=temp;
}
for(i=0;i<5;i++){
	cout<<arr[i]<<endl;
}
	return 0;	

}
