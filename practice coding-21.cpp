//find the largest and the second largest no in the array of numbers(incorrect)

#include <iostream>
using namespace std;

int main() {
    int i,n,a[100],l,s;
    cout<<"how many numbers you want to enter?";
    cin>>n;
    cout<<"enter your numbers";
    for(i=0;i<n;i++){
        cin>>a[i];
        cout<<"\n";
    }
     l=a[0];
     for (i=0;i<n;i++){
         if(l<a[i]){
             s=l;
             l=a[i];
         }
     
         if (l==a[0]){
             s=a[1];
             for (i=2;i<+n;i++){
                 if(s<=a[i]){
                     s=a[i];
                 }
             }
         }
     }
    cout<<"the second largest number: "<<s;
    cout<<"The largest number: "<<l;
    return 0;
}
