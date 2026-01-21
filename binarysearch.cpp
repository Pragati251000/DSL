#include<iostream>
using namespace std;
int main() {
int n,key;
int a[5];
cout<<"enter number of elements:";
cin>>n;
cout<<"enter sorted elements:\n";
for( int i=0;i<n;i++) {
cin >>a[i];
}
cout<<"enter element to search:";
cin>>key;
int low=0,high=n-1,mid;
while(low<=high) {
mid=(low+high)/2;
if(a[mid]==key) {
cout<<"found at position"<<mid+1;
return 0;
}
else if(key<a[mid]) {
high= mid-1;
}
else {
low=mid+1;
}
} 
cout<<"not found";
return 0;
}
