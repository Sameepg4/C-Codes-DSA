//enter the number andd it should be less than 10 and display counting afterwards
#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout <<"enter the value of n";
    cin>>n;
    
    if (n<=10){
        for(i=n;i<=10;i++){
            cout<<i<<endl; 
            
        }
    }
    else{
        cout<<"not possible";
        
    }
        

    return 0;
}