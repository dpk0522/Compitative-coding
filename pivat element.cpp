//binary search is used and time complexity is o(log n).. 
#include<iostream>
using namespace std;
int main(){
	int arr[]={4,5,6,1,2,3};
	int s=0,e=6;
	while(s<e){
		int mid=s+(e-s)/2;
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}else{
			e=mid;
		}
	}
	cout<<arr[s]<<" is pivet at index:"<<s;
	return 0;
}
