#include <iostream>
using namespace std;
int main(){
   int arr[]={1,0,2,0,3,4,5};
   int j=0;
   
   for(int i=0; i<7; ++i){
       if(arr[i]!=0){
           arr[j]=arr[i];
           j++;
       }   
   }
  for(int i=j; i<7; ++i){
      arr[i]=0;
  }
    for(int i=0; i<7; ++i){
      cout<<arr[i];
  }

    return 0;
}