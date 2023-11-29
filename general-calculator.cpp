#include <iostream>
#include <cmath>

using namespace std;


int add(int num1, int num2)
{
    return(num1+num2);
}

int sub(int num1,int num2)
{
    return(num1-num2);
}

int divi(int num1,int num2)
{
    return(num1/num2);
 
}

int mul(int num1,int num2)
{
    return(num1*num2);
}

int main()
{   
    cout<<"Enter two values to operation"<<endl;
    int num1,num2;
    cin>> num1>>num2;
    cout<< "the addition value        " <<add(num1,num2)<<endl;
    cout<< "the subtraction value     " <<sub(num1,num2)<<endl;
    cout<< "the division value        " <<divi(num1,num2)<<endl;
    cout<< "the multiplication value  " <<mul(num1,num2)<<endl;
    
    
    return 0;
}