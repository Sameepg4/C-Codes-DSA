//x-{(x^2)/(2!)}+{(x^3)/(3!)}+........
#include <iostream>
 using namespace std;
  
 int main(){
      int i,j,s,n,p,smm;
      
      cout<<"enter the value of power";
      cin>>p;
      
      cout<<"enter the value of ";
      cin>>x;
      
      for (i=1; i<p;j=j+1){
          int s=1,sm=1;
          for (j=1; i<=j;j=j++){
              s=s*i;
          }
          for (j=1;j<=i;j++){
              sm=sm*j;
          }
          
          if(i%2==0){
              smm=smm-(s/sm);
              }
              
          else{
              smm=smm+(s/sm);
          }      
      }
      cout<<"Result is "<<smm;  
return 0;
 }