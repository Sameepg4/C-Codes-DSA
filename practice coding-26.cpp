//delete a number from the array and insert a number in place of that

#include <iostream>
using namespace std;

int main() {
    int i,n,a[100],l,s;
    cout<<"how many numbers you want to enter?";
    cin>>n;
    cout<<"enter your numbers";
    for(i=1;i<=n;i++){
        cin>>a[i];
        cout<<"\n";
    }
int x;//number to be deleted from the array
int y ;//new number to be inserted in the array
cout<<"enter the number you want to delete : ";
cin>>x;
cout<<"enter the number to replace the number above  :";
cin>>y;
for(i=1;i<=n;i++){
    if(a[i]==x){
        a[i]=y;
    }
}
for(i=1;i<=n;i++){
    cout<<a[i];
    cout<<"\t";
}
    return 0;
}