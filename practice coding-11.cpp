//count the number of digits in a number
  #include <iostream>
  using namespace std;
  
  int main(){
      int a,i=0,j=0,r;
      
      cout<<"enter the value of a number";
      cin>>a;
      cout<<"factors are:"<<endl;
     for(i=1;i<=a;i=i+1){
         if(a%i==0){
             cout<<i<<endl;
             j=j+1;
         }
     }
      cout<<"the count of factors is  "<<j<<endl;
     
 return 0;
 }