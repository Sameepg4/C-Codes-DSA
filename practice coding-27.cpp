// multiplication or addition of 2 matrixes

#include<iostream>
using namespace std;

int main(){
    int i,j,a,b;
    char m[2];
    cout<<"enter the size of matrix";
    cin>>a>>b;
    int x[a][b];
    int y[a][b];
    int z[a][b];
    
    cout<<"enter numbers of your first matrix";
    for (i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            cin>>y[i][j];
        }
    }
    
    
    
    cout<<"enter numbers of second matrix";
    for (i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            cin>>x[i][j];
        }
    }
    
    cout<<"what do you want to do add(ad) or multiply(mu)?";
    cin>>m;
    
    if(m=="ad"){
        for (i=1;i<=a;i=i+1){
            for (j=1;j<=b;j=j+1){
                z[i][j]=x[i][j]+y[i][j];
                
            }}
        
    }
    else if(m=="mu"){ 
        for (i=1;i<=a;i=i+1){
            for (j=1;j<=b;j=j+1){
                z[i][j]=0+x[i][j]*y[i][j];
                
                
            }}}
    
     for (i=1;i<=a;i=i+1){
            for (j=1;j<=b;j=j+1){
                cout<<z[i][j];
            }}
return 0;
    
}