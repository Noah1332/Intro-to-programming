/*
 Noah McGhghy
 Z698V495
 pgm8.cpp
 Program 8

 This program is going to expand on the last program that you wrote.
 In this program, you are going to add additional features to your program.
 You are an avid reader and have decided that you would like to keep track of
 the books that you read.
 Since you are now a seasoned C++ programmer, you are going to write a
 C++ program to perform this function.
 You will define a structure called book_list that will hold a number associated
 with each book (int), book title (string), author (string), a description of the
 book (string), a date when the book was read stored in 2 parts – month (int) and
 year (int) and a rating of the book (int). The number will be generated by the
 program as each book is entered. The rating should be limited to a number
 between 1 and 10. It will be a scale the user can enter what they thought of
 the book.


 Pgm7 Pseudo-Code

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

 pgm8 Pseudo-Code





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
    int bnumber;
    ifstream inputfiles("Book_Number.txt");
    inputfiles.open("Book_Number.txt");
    inputfiles >> bnumber;
    cout << bnumber;
    inputfiles.close();

    ifstream inputfile("reading_list");
    inputfile.open("reading_list.txt");
    //outfile is used to output to a txt document the book information.
    ofstream outfile;
    outfile.open("reading_list.txt", std::ios_base::app);
    //a is used for the array
    int a = 0;
    book_list b[500];
    //this checks to see if the needed file is open.
    if (inputfile)
    {
        while (a < bnumber)
        {
            inputfile >> b[a].bnum >> b[a].btitle >> b[a].bauthor >> b[a].bdescription >> b[a].bmonth >> b[a].byear >> b[a].brating;
            a++;
        }


    }
    //if the file is not open then it will start with the number one.
    else
    {
        a = 0;
        b[a].bnum = 1;
    }
    inputfile.close();
    bool ndone = true;
    int casenum = 0;

    while (ndone == true)
    {
        cout << "Please enter 1. Print Book List; 2. Enter a New Book; 3. To modify a Book; 4. Print the total number of Books; 5. All books with a specific rating; 6. To Exit \n";
        cin >> casenum;
        cin.ignore();
        switch (casenum)
        {
            case 1: // Print Books
                for (int c = 0; c < a; c++)
                {
                    cout << b[c].bnum << " " << b[c].btitle << " " << b[c].bauthor << " " << b[c].bdescription << " " << b[c].bmonth << "/" << b[c].byear << " " << b[c].brating << endl;
                }
                break;
            case 2: // Enter New Book
            {
                cout << "Please Input Book Name." << endl;
                b[a].bnum = a + 1;
                getline(cin, b[a].btitle);
                outfile << b[a].bnum << " ";
                outfile <<  b[a].btitle << " ";
                cout << "Please Input the Book's Author." << endl;
                getline(cin, b[a].bauthor);
                outfile << b[a].bauthor << " ";
                cout << "Please Input the book Description." << endl;
                getline(cin, b[a].bdescription);
                outfile << b[a].bdescription << " ";
                cout << "Please Input which month you Read the book.(01-12)" << endl;
                cin >> b[a].bmonth;
                outfile << b[a].bmonth;
                cout << "Please Input which year you Read the book.(2XXX)" << endl;
                cin >> b[a].byear;
                outfile << "/" << b[a].byear << " ";
                cout << "Please Input the book rating on a scale of 1-10" << endl;
                cin >> b[a].brating;
                outfile << b[a].brating << endl;
                //this increments the book number.
                a++;
                break;
            }
            case 3://Modify Book
                cout << "Please Input the number you would like to edit\n";
                int fix;
                cin >> fix;
                fix = fix -1;
                cout << "Please Input Book Name." << endl;
                getline(cin, b[fix].btitle);
                getline(cin, b[fix].btitle);
                outfile << b[fix].bnum + 1 << " ";
                outfile <<  b[fix].btitle << " ";
                cout << "Please Input the Book's Author." << endl;
                getline(cin, b[fix].bauthor);
                outfile << b[fix].bauthor << " ";
                cout << "Please Input the book Description." << endl;
                getline(cin, b[fix].bdescription);
                outfile << b[fix].bdescription << " ";
                cout << "Please Input which month you Read the book.(01-12)" << endl;
                cin >> b[a].bmonth;
                outfile << b[fix].bmonth;
                cout << "Please Input which year you Read the book.(2XXX)" << endl;
                cin >> b[fix].byear;
                outfile << "/" << b[fix].byear << " ";
                cout << "Please Input the book rating on a scale of 1-10" << endl;
                cin >> b[fix].brating;
                outfile << b[fix].brating << endl;
                outfile.clear();
                break;

            case 4:// Print How many Books there are in a list
                cout << b[a].bnum  + 1 << " books are on the list\n";
                break;
            case 5:// Print all Books that have a certain rating
            {
                cout << "Please Input which Book rating you would like to see the list for\n";
                int rate;
                cin >> rate;
                int rated = 0;
                while (rated < a)
                {
                    if (rate == b[rated].brating)
                    {
                        cout << b[rated].bnum << " " << b[rated].btitle << " " << b[rated].bauthor << " " << b[rated].bdescription << " " << b[rated].bmonth << " " << b[rated].byear << " " << b[rated].brating << endl;
                        rated++;
                    }
                    else
                        rated++;
                }

                break;
            }
            case 6:// Exit Program
                ndone = false;
                break;
        }

    }
    outfile.clear();
    outfile.close();
    // this myfile is used to keep track of which book number was last used.
    ofstream myfile;
    myfile.open("Book_Number.txt");
    myfile << a;
    myfile.close();
    cout << a;
    return 0;

    //Everything works currently except the infile.... I'm gonna try to fix it
    //and resubmit it tomorrow...
}
