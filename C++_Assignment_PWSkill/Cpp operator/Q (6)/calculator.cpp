#include <iostream>
using namespace std;

int main(){

    int num1;
    int num2;
    char operation;
    int result;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number:  ";
    cin>>num2;

    cout<<"Enter the operation you want to perform: ";
    cin>>operation;

    if (operation == '+'){
        result = num1 + num2;
    } else if (operation == '-'){
        result = num1 - num2;
    } else if (operation == '*'){
        result = num1 * num2;
    } else if (operation == '/'){
        result = num1 / num2;
    }

    cout<<"The answer is"<<result<<endl;

}