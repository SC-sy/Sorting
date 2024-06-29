// Insertion sort

#include <iostream>
using namespace std;  
int insertion(int arr[],int n){
    int tem,j;
    for(int i=1; i<n;i++){
        int temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j-=1;
        } arr[j+1]=temp;
    }return 0;
}
int print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }return 0;
}
int main()
{
 int arr[]={9,99,0,5,7,4,0,5};
 int n=sizeof(arr)/sizeof(arr[0]);
 print(arr,n);
insertion(arr,n);
 cout<<"after sort"<<endl;
 print(arr,n);
 
  

    return 0;
}
