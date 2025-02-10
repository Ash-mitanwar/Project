#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    cout<<"Welcome to my number guessing game."<<endl;
    cout<<"Guess a number between 1 to 100 "<<endl;
    do{
        cout<<"Please enter your guess here: ";
        cin>>guess;
        attempts++;
        if(guess>num){
            cout<<"Your guess is high, Try again."<<endl;
        }
        else if(guess<num){
            cout<<"Your guess is low, Try again."<<endl;
        }
        else{
            cout<<"Congratulatoins, you guessed the correct number in "<<attempts<<" attempts."<<endl;
        }
    }
    while(guess!=num);
    return 0;
}