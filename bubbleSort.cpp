// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int bubble(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    } return 0;
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
 bubble(arr,n);
 cout<<"after sort"<<endl;
 print(arr,n);
 
  

    return 0;
}
