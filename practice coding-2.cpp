#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sal,tax;

    cout<<"Enter your salary";
    cin>>sal;

    if(sal<=60000)
     {tax=0;}

    else if (sal>=60001 && sal<=100000)
     {tax=0.1*(sal-60000)}

    else if (sal>=100001 && sal<=200000)
     { tax=4000 +(0.15*(sal-100000)) }

    else{tax=9000+(0.2*(sal-200000))} 

    cout<<"Salary after tax is"<<sal-tax;
    
return 0;

}