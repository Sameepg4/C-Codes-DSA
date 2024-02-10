// Delete the number from the array and display the new array
#include <iostream>
using namespace std;

int main() {
    int i,n,a[100],c,d=0;
    cout<<"how many numbers you want to enter?";
    cin>>n;
    cout<<"enter your numbers";
    for(i=0;i<=n;i++){
        cin>>a[i];
        cout<<"\n";
    }
     cout<<"enter which number you want to delete : ";
     cin>>c;
     for(i=0;i<=n;i++){
         if (c==a[i]){
             for(j=i;j<=n;j++){
                 a[j]=a[j+1];
             }d=d+1;
         }
     }
     cout<<"new array is : ";
     for (i=0;i<=n-d;i++){
         cout<<a[i];
         cout<<"\n";
     }
         return 0;
}