/*
Noah McGhghy
z698v495
Program 4
pgm4.cpp

Description
Use a 50-by-50 array called floor which is initialized to zeros.
Read commands from an array that contains them. Keep track of the current
position of the turtle at all times and whether the pen is currently up or down.
Assume that the turtle always starts at the position 0,0 of the floor with its
pen up. The set of turtle commands your program must process is shown below.
Suppose that the turtle is somewhere near the center of the floor.
The following “program” would draw and print a 12-by-12 square:
2
5,12
3
5,12
3
5,12
3
5,12
1
6
9
As the turtle moves with the pen down,
 set the appropriate elements of the array floor to 1s.
When the 6 command (print) is given, wherever there is a 1 in the array,
 display an asterisk, or some other character you choose.
 Wherever there is a zero, display a blank. Write a program to implement the
 turtle graphics capabilities discussed here.
 Write several turtle graphics programs to draw
interesting shapes.
 Add other commands to increase the power of your turtle graphics language.




1 Pen up
2 Pen down
3, 10 Turn right
4 Turn left
5, 10 Move forward 10 spaces (or a number other than 10)
6 Print the 50-by-50 array
9 End of data (sentinel)

Psuedocode

Initialize a double array to zero
Initialize penposition to up
while loop that runs until the statement is false
 Switch statement to fill in array to make shape
  Case 1
   penposition = 0
  Case 2
   penposition = 1
  Case 3 (Turn right)
   If statement (changes on which direction your going)
  Case 4 (Turn left)
   If statement (changes on which direction your going)
  Case 5
   for statement that changes the values to 1s
  Case 6
   Prints the whole array
  Case 9
   changes bool to false
  Default
   Improper selection, please try again


*/
#include <iostream>
using namespace std;

int main()
{
 //floor is the multidimesional array
 int floor[50][50] = {0};
 // the pen position
 int penpos = 0;
 // what case number do you want
 int casen = 0;
 // whi is used to check if the condition is true so the loop will continue
 bool whi = true;
 // which direction is the turtle currently moving in.
 int direc = 0;
 // xposition is the row number of the array.
 int xpos = 0;
 // yposition is the coloumn number of the array
 int ypos = 0;
 // distance is how far they would like to move forward.
 int distance = 0;
 while (whi == true)
 {
  cout << " Input a 1 to put pen up, 2 to lower pen, 3 to turn right, "
  <<  "4 to turn left, 5 to move foward, 6 to print, or 9 to end program.\n";
  cin >> casen;
  switch (casen)
  {
   //raises the pen, but makes the turtle write zero as it moves.
   case 1:
    penpos = 0;
    break;
   // lowers the pen so the turtle is writing ones as it moves.
   case 2:
    penpos = 1;
    break;
   // makes the turtle turn right depending on his current direction.
   case 3:
    if (direc < 3)
     direc += 1;
    else
     direc = 0;
    break;
   // makes the turtle turn left depending on his current direction.
   case 4:
    if (direc > 0)
     direc -= 1;
    else
     direc = 3;
    break;
    //case 5 has several loops that will change the array in a foward direction
    // nased on the
   case 5:
    if (direc == 0)
    {
     cout << "How far to move forward?\n";
     cin >>  distance;
     while (distance != 0)
     {
      floor[xpos][ypos] = {penpos};
      ypos++;
      distance--;
     }
    }
    else if (direc == 1)
    {
     cout << "How far to move forward?\n";
     cin >>  distance;
     while (distance != 0)
     {
      floor[xpos][ypos] = {penpos};
      xpos++;
      distance--;
     }
    }
    else if (direc == 2)
    {
     cout << "How far to move forward?\n";
     cin >>  distance;
     while (distance != 0)
     {
      floor[xpos][ypos] = {penpos};
      ypos--;
      distance--;
     }
   }
   else
   {
     cout << "How far to move forward?\n";
     cin >>  distance;
     while (distance != 0)
     {
      floor[xpos][ypos] = {penpos};
      xpos--;
      distance--;
     }
   }
   break;
   //case 6 will print the array using 2 loops and an if statement.
   case 6:
    for (int printx = 0; printx <= 49; printx++)
    {
     for (int printy = 0; printy <=49; printy++)
     {
       if (floor[printx][printy] == 1)
        cout << "*";
       else
        cout << " ";
     }
     cout << endl;
    }
    break;
    case 9:
     whi = false;
     break;
    default:
     cout << "Improper selection. Please try Again\n";
  }
 }
 return 0;
}
