#include <iostream>
using namespace std;

int main() {
    
    int guess; //this is the number that the user guesses.
    int secret; // this is the secret random number generated.
    secret = rand() % 100; //creating a random secret number
    
    cout<<"Welcome to The Number Guessing Game!!\n";
    cout<<"I'll choose a number between 1-100 can to try to guess the number?\n";
    cout<<"Come on let's start!!!\n";
    
    int cnt=0; //to keep track of the number of attempts taken to guess the correct secret number
    do
    {
        cout<<"\nNow try guessing the number: ";
        cin>>guess;

        //if the guessed number is greater than the secret number
        if(guess > secret)
        {
            cout<<"Too high! Try something smaller.\n";
            cnt++;
        }

        //if the guessed number is smaller than the secret number
        else if(guess < secret)
        {
            cout<<"Too low! Try something greater.\n";
            cnt++;
        }

        //if the guessed number is equal to the secret number
        else if( guess == secret)
        {
            cnt++;
            cout<<"Hurrayy!! You guessed the correct number in "<<cnt<<" attempts.\n";
        }
    }while(guess != secret);
    
    cout<<"\n\n"<<"                     The End!                            \n";
    return 0;
}
