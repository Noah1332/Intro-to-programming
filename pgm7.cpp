/* Noah McGhghy
Z698V495
Program 7
pgm7.cpp

Description:
You are an avid reader and have decided that you would like to keep
track of the books that you read.
You will define a structure called book_list that will hold
1. a number associated with each book (int), 2. book title (string),
3. author (string),
4. a description of the book (string),
5. a date when the book was read stored in 2 parts – month (int) and year (int)
6. a rating of the book (int).

The number will be generated by the program as each book is entered.
The rating should be limited to a number between 1 and 10.
It will be a scale the user can use to enter what they thought of the book.
The month should be a valid month and the year should be less than the current
year and not negative. The program should ask the user for all of the
book information, except for the number, until the user enters “exit” as
the book title. After each book is entered, it should be written to an output
file called “reading_list.txt”. The file should contain all of the information
including the number for each book. Each item of the book should be printed on
a new line. Each time the program is restarted,
 it should open the file to append to the end of the file.

Pseudo-Code

   Define structure
      holds 7 variables.
   Main
   make and open file ("reading_list.txt", std::ios_base::app)
   int b.booknum to 1
   while bool is true
      ask for book name
      if b.bookname != "exit"
         add to reading list
         Ask user for author
         add to reading list
         Ask user for description
         add to reading list
         Ask for month
         add to reading list
         Ask for year
         add to reading list
         Ask for rating
         add to reading reading list
      else
         bool becomes false


 */
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct book_list
{
    int bnum;
    string btitle;
    string bauthor;
    string bdescription;
    int bmonth;
    int byear;
    int brating;
};

int main()
{
   //infile is used to keep track of the book number b.bnum.
   ifstream infile("Book_Number.txt");
   //outfile is used to output to a txt document the book information.
   ofstream outfile;
   outfile.open("reading_list.txt", std::ios_base::app);
   book_list b;
   //this checks to see if the needed file is open.
   if (infile.is_open())
      infile >> b.bnum;
   //if the file is not open then it will start with the number one.
   else
      b.bnum = 1;
   bool ndone = true;
   //this loop makes it possible to check the name.
   while (ndone == true)
   {
      cout << "Please Input Book Name or exit to quit." << endl;
      getline(cin, b.btitle);
      //if exit isnt entered then it will keep asking for more book details.
      if (b.btitle != "exit")
      {
         outfile << b.bnum << endl;
         outfile <<  b.btitle << endl;
         cout << "Please Input the Book's Author." << endl;
         getline(cin, b.bauthor);
         outfile << b.bauthor << endl;
         cout << "Please Input the book Description." << endl;
         getline(cin, b.bdescription);
         outfile << b.bdescription << endl;
         cout << "Please Input which month you Read the book.(01-12)" << endl;
         cin >> b.bmonth;
         outfile << b.bmonth << endl;
         cout << "Please Input which year you Read the book.(2XXX)" << endl;
         cin >> b.byear;
         outfile << " " << b.byear << endl;
         cout << "Please Input the book rating on a scale of 1-10" << endl;
         cin >> b.brating;
         outfile << b.brating << endl;
         outfile << endl;
         //This is here for technical reasons.
         getline(cin, b.btitle);
         //this increments the book number.
         b.bnum++;

      }
         else
            ndone = false;
   }

   outfile.close();
   // this myfile is used to keep track of which book number was last used.
   ofstream myfile;
   myfile.open("Book_Number.txt");
   myfile << b.bnum;
   myfile.close();

   return 0;
}