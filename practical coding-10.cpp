//count the number of digits in a number
  #include <iostream>
  using namespace std;
  
  int main(){
      int a,i=0,j=0,r;
      
      cout<<"enter the value of a number";
      cin>>a;
      
      while (a>0){
         r=a%10;
         if(r%2==0){
             i=i+1;
         }
         else{
             j=j+1;
         }
      
          a=a/10;
      }
      cout<<"the count of even digits is"<<i<<endl;
      cout<<"the count of odd digits is"<<j;
 return 0;
 }