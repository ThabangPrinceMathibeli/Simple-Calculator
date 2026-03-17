#include <iostream>
#include <string>
using namespace std;

int main(){
    int num1, num2;
    char op;

    //ask the user to enter a first number

    cout<< "Please Enter A Number: " <<endl;
    cin>> num1;
    cout<<endl;
     
    //ask the user to enter an operator
    cout<< "Please Enter an operator '+, -, *, /': " <<endl;
    cin>> op; 

    //ask user to enter second number
    cout<< "Please Enter The Second number:" <<endl;
    cin>> num2;
    cout<<endl;


    //perform the calculation using if else statements

    if (op =='+')
        cout<< "Result: "<< num1 + num2;
    else if (op=='-')
        cout<<"Result: "<< num1 - num2;
    else if (op=='*')
        cout<<"Result: "<< num1 * num2;
    else if (op=='/')
        cout<<"Result: "<< num1 / num2;
    else
    cout<<"Result invalid"<<endl;

    return 0;
}
