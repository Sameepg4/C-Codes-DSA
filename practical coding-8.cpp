//check whether a number is palindrome or not
  #include <iostream>
  using namespace std;
  
  int main(){
      int a,b,c,s;
      
      cout<<"enter your number";
      cin>>a;
      c=a;
      
      while (a>0){
          b=a%10;
          s=s*10+b;
          a=a/10;
      }
      
      if(c==s){
         cout<<"Number is palindrome.";
         }
      else {
          cout<<"number is  not palindrome.";
          }
          
 return 0;
 }