#include<iostream>
using namespace std;
int main() 
{
int n,key;;
int arr[10];
cout<<"enter number of elements:";
cin>>n;
cout<"enter elements:\n";
for(int i=0;i<n;i++) {
cin>> arr[i];
}
cout<<"enter element to search:";
cin>>key;
for(int i=0;i<n;i++) {
if(arr[i]==key) {
cout<<"element found at position"<<i+1;
return 0;
}
}
cout<<"element not found";
return 0;
}
