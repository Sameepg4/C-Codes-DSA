// class part-1
#include <iostream>
#include <cstring>
using namespace std;

class Clothing{
    char code[10],Type[20],Mat[20];
    float price;
    int size;
    
 void calc_price(){
     if (strcmp(Mat,"Cotton")==0)
     {
         if (strcmp(Type,"Trouser")==0)
      {
         price=1500;
      }
      else if(strcmp(Type,"Shirt")==0)
      {
         price=1200;
      }
         
     }
     else{
         if (strcmp(Type,"Trouser")==0)
         {
             price=1500-(1500*0.25);
         }
         else if(strcmp(Type,"Shirt")==0)
         {
             price=1200-(1200*0.25);
         }
     }
 }
    public:
    Clothing(){
        size=0;