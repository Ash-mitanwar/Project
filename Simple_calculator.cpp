#include<iostream>
using namespace std;
int main(){
    double num_1;
    double num_2;
    cout<<"Enter the first number: ";
    cin>>num_1;
    cout<<"Enter the second number: ";
    cin>>num_2;
    char operation;
    cout<<"Enter the operation (+ - / *): ";
    cin>>operation;

    switch(operation){
        case '+':
        cout<<"Answer: "<<num_1+num_2;
        break;
        case '-':
        cout<<"Answer: "<<num_1-num_2;
        break;
        case '/':
        if(num_2 !=0){
            cout<<"Answer: "<<num_1/num_2;
        }
        else{
            cout<<"Error! division by 0 is not possible";
        }
        break;
        case '*':
        cout<<"Answer: "<<num_1*num_2;
        break;

        default:
        cout<<"Invalid Operation.";
    }
    return 0;
}