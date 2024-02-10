////lowest common multiple
#include <iostream>
 using namespace std;
  
 int main(){
      int a,b,l,i,h;
      
      cout<<"enter 2 numbers";
      cin>>a>>b;
      
      if(a>b){
          l=a;
      }
      
      else{
          l=b;
      }
      
      for (i=l;i<=a*b;i=i+1){
          if(a%i==0 && b%i==0){
              h=i;
              break;
          }
      }
      
      cout<<"LCM= "<<h;
     
return 0;

 }