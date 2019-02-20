/*
 Noah McGhghy
 Z698V495
 You are going to write two functions. Function fahr_to_cel will return the
 Celsius equivalent of a Fahrenheit temperature.
 Function cel_to_fahr will return the Fahrenheit equivalent
 of a Celsius temperature.
 For each function, you will pass the temperature into the function
 */

/*
 Pseudocode
 iostream
 using namespace std

 Function: void cel_to_fahr ()
 Variables
 F for farenheit
 C for Celsius
 Will return the Fahrenherit equivalent of a Celsius Temperature.
 F = C * ( 9 / 5 ) + 32
 Reurn F

 Function: void fahr_to_cel ())
 Variables
 F for farenheit
 C for Celsius
 Will return the Celsius equivalent of a Fahrenheit Temperature
 C = ( F - 32 ) * ( 5 / 9 )
 return C

 double main()

 Make Variables f and c as doubles
 Represents Fahrenheit and Celsius
 Make Variables minx and maxx as doubles
 For use in the equivalent tables

 While Loop Repeats until 5 is entered.

 Lists options and has user to select option


 Switch
 5 cases
 1: Convert Celsius To Fahrenheit
 ask for Temperature
 call fahr_to_cel()
 prints out F
 2: Convert Fahremheit to Celsius
 ask for Temperature
 call cel_to_fahr
 C = ( F - 32 ) * ( 5 / 9 )
 Print out C
 3: Print a Fahrenheit equivalent table
 ask for range of temperature
 for Loop
 call fahr_to_cel ()
 print numbers in range
 4: Print a Celsius equivalent table
 ask for range of temperature.
 for Loop
 Call cel_to_fahr ()
 Print numbers in range

 5: Exit
 break

 return 0
 */
#include <iostream>
using namespace std;

//This function will convert Farenheit to Celsius
int fahr_to_cel (int f)
{
    int cel = 0;
    return cel = ( f - 32 ) *  5 / 9 ;

}
// This Function will convert Celsius to Farenheit
int cel_to_fahr (int c)
{
    int fahr = 0;
    return fahr =  (c * 5 / 9  + 32);
}

int main ()
{
    //casenum is the case number variable
    int casenum = 0;
    // f is the initial Farenheit variable
    int f = 0;
    // c is the inital Celsius varaible
    int c = 0;
    // minx is the lower range vairable
    int minx = 0;
    // maxx is the higher range variable
    int maxx = 0;
    // faren is used to be the final result of case 3 Fahrenheit variable
    int faren = 0;
    // cels is used to be the final result of case 4 Celsius variable
    int cels = 0;

    // this program will keep looping until case 5 is chosen
    while (casenum != 5)
    {
      cout << "Welcome to the Temperature Converter.\n";
      cout << "Please Choose one of the following cases\n";
      cout << "Case [1] is to convert Celsius to Farenheit\n";
      cout << "Case [2] is to convert Farenheit to Celsius\n";
      cout << "Case [3] is a Farenheit equivalent table for a specific range\n";
      cout << "Case [4] is a Celsius equivalent table for a specific range\n";
      cout << "Case [5] is used to exit the program\n";
      cout << "What case would you like?\n";
      cin >> casenum;

      // this is the switch where all the magic happens
      switch (casenum)
      {
          // case 1 converts Celsius to Farenheit
          case 1 :
          {
              cout << "Please input temperature in Celsius\n";
              cin >> c;
              f = cel_to_fahr(c);
              cout << "The temperature in Fahrenheit is " << f << endl;
              cout << "\n";
              break;
          }
          // case 2 converts Farenheit to Celsius
          case 2 :
          {
              cout << "Please input temperature in Farenheit\n";
              cin >> f;
              c = fahr_to_cel(f);
              cout << "The temperature in Celsius is " << c << endl;
              cout << "\n"
              break;
          }
          // case 3 creates a equivalent table of Farenheit from Celsius
          case 3 :
          {
              cout << "Please input range in Celsius (low)\n";
              cin >> minx;
              cout << "Please input range in Celsius (high)\n";
              cin >> maxx;
              for (c = minx; c <= maxx; c++)
               {
                  faren = cel_to_fahr (c);
                  cout << c << " Celsaius in Fahrenheit is " << faren << endl;
               }
              break;
          }
          // case 4 creates  equivalent table of Celsius from Farenheit
          case 4 :
          {
              cout << "Please input low range in Farenheit (low)\n";
              cin >> minx;
              cout << "Please input high range in Farenheit (high)\n";
              cin >> maxx;
              for (f = minx; f <= maxx; f++)
               {
                  cels = fahr_to_cel (f);
                  cout << f << " Farenheit in Celsius is " << cels << endl;
               }
              break;
          }
          //Case 5 exits the program
          case 5 :
          {
              break;
          }
      }
    }
    cout << "Have a great day!\n";
    return 0;
}
