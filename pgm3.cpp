/*
Noah McGhghy
Z698V495
Program #3
pgm3.cpp

Description
A small airline has just purchased a computer for its new automated
reservations system. The president has asked you to program the new system.
You’ll write a program to assign seats on each
flight of the airline’s only plane (capacity: 10 seats).

Pseudo Code

Initialize an array of size 10 to zero
Initialize x to 0
Initialize y to 5
Initialize pass to 1
While y is not 10 and x is not 4
 Ask user for class type
 User input type
  If 1 and x is not 4 "First Class"
   add data to specific index
   print ticket
   increase x
  else if x is 4 and y is not 10
   ask if economy is okay
    if yes
     add data to specific index
     print ticket
     increase y
    if no
     print "Next flight in 3 hours"
  else if y is 9 and x is not 4
   ask if first class is okay
    if yes
     add data to specific index
     print ticket
     increase x
    if no
    print "Next flight in 3 hours"
  else if 2 "Economy"
   add data to specific index
   print ticket
   increase y
  else

End While Loop

Print plane is Full
*/

#include <iostream>
using namespace std;

int main ()
{
 //ary is the array for seats on the plane.
 int ary[10] = {0};
 // x is the variable for index for First Class
 int x = 0;
 // y is the variable for the index of Economy
 int y = 5;
 // pass is the number the passenger
 int pass = 1;
 // bool used to keep loop going until else in while loop
 bool planef = false;

 // this while loop will continue until plane is Full
 while (planef != true)
 {
 // clas represents which choice the passenger makes
 int clas = 0;
  cout << "Press 1 for First Class or 2 for Economy\n";
  cin >> clas;
   //If they want first class and it is not full.
   if (clas == 1 && x != 5)
   {
     ary[x] = pass;
     cout << endl;
     cout << "Passenger " << pass << endl;
     cout << "Boarding Pass " << " Seat Number " << x + 1 << " First Class\n";
     cout << endl;
     x++;
     pass++;
   }
   //If they want first class but it is full already
   else if ( (clas == 1) && (x == 5) && (y != 10) )
   {
    cout << "First Class is full. Is Economy okay? (1 for yes and 2 for no)\n";
    cin >> clas;
    if (clas == 1)
    {
     ary[y] = pass;
     cout << endl;
      cout << "Passenger " << pass << endl;
     cout << "Boarding Pass " << " Seat Number " << y + 1 << "    Economy\n";
     cout << endl;
     y++;
     pass++;
    }
    else
    {
     cout << endl;
     cout << "Next Flight leaves in 3 hours.\n";
    }
   }
   //If they wanted economy but economy is full.
   else if (clas == 2 && y == 10 && x != 5)
   {
    cout << "Economy is full. Is First class okay? (1 for yes and 2 for no)\n";
    cin >> clas;
    if (clas == 1)
    {
     ary[x] = pass;
     cout << endl;
     cout << "Passenger " << pass << endl;
     cout << "Boarding Pass " << " Seat Number " << x + 1 << "First Class\n";
     cout << endl;
     x++;
     pass++;
    }
    else
    {
     cout << endl;
     cout << "Next Flight leaves in 3 hours.\n";
    }
   }
   // If they want economy and it is not full.
   else if (clas == 2 && y !=10 )
   {
    ary[y] = pass;
    cout << endl;
    cout << "Passenger " << pass << endl;
    cout << "Boarding Pass " << " Seat Number " << y + 1 << "    Economy\n";
    cout << endl;
    y++;
    pass++;
   }
   //Plane is full so the boolean expression is changed to true.
   else
   planef = true;
  }
 cout << "Plane is Full. Next flight leaves in 3 hours.\n";
 return 0;
}
