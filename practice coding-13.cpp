//(1^2)+(1^2+2^2)+(1^2+2^2+3^2)+........
  #include <iostream>
  using namespace std;
  
  int main(){
      int a,i,j,sm=0;
      
      cout<<"enter the value of a number";
      cin>>a;
      for(i=1;i<=a;i=i+1){
          int s=0;
          for (j=1;j<=i;j=j+1){
              s=s+(j*j);
          }
       sm=sm+s;      
      }
    cout<<"Result is  "<<sm;
  
 return 0;
 }