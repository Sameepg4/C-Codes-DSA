//display numbers between 2 numbers and display includingb them
#include <iostream>
using namespace std;

int main(){
 int a,b,c,d,i;
 cout<<"enter the the value of first number";
 cin>>a;
 cout<<"enter the the value of second number";  
 cin>>b;
 
 if(a>b){
     c=b;
     d=a;
 }
 else{ 
     c=a;
     d=b;
 }
 
 for (i=c;i<=d;i++){
     cout<<i<<endl;
 }
 
 return 0;
     
    
}