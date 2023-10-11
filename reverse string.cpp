#include<iostream>
using namespace std;
int main(){
	char ch[20];
	cin>>ch;
	int i=0,count=0;
	while(ch[i]!='\0'){
		count++;
		i++;
	}
	int k=0,j=count-1;
	while(k<j){
		int temp=ch[k];
		ch[k]=ch[j];
		ch[j]=temp;
		k++;
		j--;
	}
	cout<<ch<<endl;
	return 0;
}
