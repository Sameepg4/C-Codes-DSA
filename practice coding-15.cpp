////highest common factor
#include <iostream>
 using namespace std;
  
 int main(){
      int a,b,h,l,i;
      
      cout<<"enter 2 numbers";
      cin>>a>>b;
      
      if(a>b){
          l=b;
      }
      
      else{
          l=a;
      }
      
      for (i=l;i>=1;i=i-1){
          if(a%i==0 && b%i==0){
              h=i;
              break;
          }
      }
      
      cout<<"HCF= "<<h;
     
return 0;

 }