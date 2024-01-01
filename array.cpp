#include<iostream>
#include <vector>
import mymodule;
int main(){
   std::vector<int>arr={1,2,3,4,5};
   std::cout<<sizeof(arr)/sizeof(arr[0])<<"\n";
   int x = myfunction();
   std::cout<<x<<std::endl;

   return 0;
}
