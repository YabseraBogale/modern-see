#include<iostream>
int main(){
   int arr[5]={1,2,3,4,5};
   std::cout<<sizeof(arr)/sizeof(arr[0])<<"\n";
   return 0; 
}