//check whether a number is armstrong or not
  #include <iostream>
  using namespace std;
  
  int main(){
      int a,b,s=0,n,r;
      
      cout<<"enter the value of a number";
      cin>>a;
      b=a;
      while(a>0){
          r=a%10;
          s=s+r*r*r;
          a=a/10;
      }
     if (s==b){
         cout<<"the number is armstrong.";
     }
     else{
         cout<<"the number is not armstrong.";
     }
 return 0;
 }