// Noah McGhghy
// Z698V495
// Program Number: 1
/* Description: You are going to write a guessing number game.
 You will generate a
 random number between 1 and 200.
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
int main(){

    /*the next two lines randomly generate a number between 1 and 200
     and saves it as winner */


    // the integer variable guess is the guessed number by the user
    int guess = 0;

    //variable i stands for the Number guesses.
    int i = 1;

    /*Variable quit is used to set quit to not n
    so the program will continue until n is pressed.*/
    char quit = 'a';

    std::cout << "Welcome to The Number Guessing Game\n";

    //This first while loop keeps the inside loop running.
    while (quit != 'n'){
        /*the next two lines randomly generate a number between 1 and 200
         and saves it as winner */
        srand(time(NULL));
        int winner = rand() % 200 + 1;

        std::cout << "Please guess a number between 1 and 200\n";
        /* this loop will allow the user to guess the number
        while giving feedback to the user. */
        while (guess != winner){
            std::cin >> guess;

            if (guess > winner){
                std::cout << "Too High, try again\n";
                i++;
            }
            else if (guess < winner) {
                std::cout << "Too Low, try again\n";
                i++;
            }
            else  {
                std::cout << "You guessed it\n";
                std::cout << "In " << i << " guesses!";
                std::cout << "Would you like to play again?";
                std::cout << " y to continue, n to quit\n";
                std::cin >> quit;

            }
        }
    }
    std::cout << "Have a nice day\n";
    return 0;


}
