//count the number of digits in a number
  #include <iostream>
  using namespace std;
  
  int main(){
      int a,i=0;
      
      cout<<"enter the value of a number";
      cin>>a;
      
      while (a>0){
          a=a/10;
          i=i+1;
      }
      cout<<"the count of digits is"<<i;      
 return 0;
 }