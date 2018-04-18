#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// written by: Amirreza Firoozi 
// License: GPLv3+


// Declare your global variables here.
 int guessedNumber; // defines a new integer variable for storing user's guessed number

void guess(char message[] = "Please guess: "){ // defines a function for getting user's guess
    cout<<message; // prints the message to stdout
    cin>>guessedNumber; // gets user's guess and stores it inside guessedNumber variable

}
int main()
{
    srand(time(0)); // passes current time in second to srand function to use as the beginning number
 int randomNumber = (rand()%1000) + 1; // initialises a true random integer between 1 and 1000.
 guess("Please guess a number between 1 and 1000 : ");
    while ( guessedNumber != randomNumber )// the codes in here get executed as long as the numbers don't match
    {
        if( randomNumber > guessedNumber){
            cout<<"You need to enter a bigger number"<<endl;
            guess(); // calls guess() function
        }else if ( randomNumber < guessedNumber ){
        
            cout<<"you need to guess a smaller number"<<endl;
            guess(); // calls guess() function
        }
    }// end of while
    cout<<"Hurray! You are right that's "<<guessedNumber<<endl ; // if the while's condition get's broken then the user has guessed the number correctly





 return 0;
}
