#include<iostream>
using namespace std;

int main(){
    int arr[3]={5,2,7};
    
    //arr is name of first pointer location of array.
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;

    //size of pointer 
    cout<<"size of :"<<sizeof(arr)<<endl;
    cout<<"size of *arr:"<<sizeof(*arr)<<endl;
    cout<<"size of &arr:"<<sizeof(&arr)<<endl;
    
    int temp[2]={ 1,2 };
    int *p=&temp[2];
    cout<<sizeof(p)<<endl;
    cout<<"size of &temp:"<<sizeof(&temp)<<endl;
    return 0;
}