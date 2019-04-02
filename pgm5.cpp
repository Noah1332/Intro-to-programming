/*
Noah McGhghy
Z698V495
Program 5 pgm5.cpp

Description
This program is going to allow you to calculate your grade for the class.
In your program, you will ask for the user name.

Psuedo code

function headers for average() and lettergrade()


main()
initalize array grade to zero.
if homwork
 Do While loop until -1 is input
  for loop
   input grade into array
 total grade += average(grade[], size, value) //value 10
 Do While loop until -1 is input
  for loop
   input grade into array
 total grade += average(grade[], size, value) //value 40


 else
 Do While loop until -1 is input
  for loop
   input grade into array
 total grade += average(grade[], size, value) //value 50

 Do While loop until -1 is input
  for loop
   input grade into array
 total grade += average(grade[], size, value) //value 10

 While loop until -1 is input
  for loop //to collet grades
   if fail > 0
    if input < 60
     subtract 1 from fail
     input grade into array
    else
     input grade into array
     grade = "F"
 average(grade[], size, value ) //value 40

average(array, size, value)
 for loop
  adds current index value to a variable
 divide sum by size
 multiply sum by value
 return sum

lettergrade(double)
 if loop (93-100)
  set letter to A
 else if (90-92.9)
  set letter to A-
 else if (85-89.9)
  set letter to B+
 else if (82-84.9)
  set letter to B
 else if (80-81.9)
  set letter to B-
 else if (76-79.9)
  set letter to C+
 else if (72-75.9)
  set letter to C
 else if (69.5-71.9)
  set letter to C-
 else if (68-69.5)
  set letter to D+
 else if (65-67.9)
  set letter to D
 else if (60-64.9)
  set letter to B-
 else
  set letter to F
 return F
*/

#include <iostream>
#include <string>
using namespace std;

int math(int array[], double x, double value);
string lettergrade(int grade);

int main()
{
 //array to hold grades
 int gradeb[100] = {0};
 //index in the array
 int index = 0;
 //used to hold the total sum of the grade
 int sum = 0;
 // used for them to enter grades to enter gradeb
 int grade = 0;
 //string for them to input name
 string name;
 //used to hold the returned sum
 double value = 0.0;
 //used to see if student passes class if 0 he fails with a F.
 int fail = 2;
 string letter = "A";

 cout << "Please input Your Name\n";
 getline(cin,name);
 cout << "Please enter homework grades, enter -1 when complete\n";
 cin >> grade;
 if (grade != -1)
  {
   do
   {
    gradeb[index] = grade;
    index++;
    cin >> grade;
   } while(grade !=-1);
   for(int a = 0; a < index; a++)
    sum += gradeb[a];
   //I need to input a function here for average value would be 10.
    value = math(gradeb, index, 10);
   grade = 0;
   for (int g = 0; g <= index; g++)
    gradeb[g] = 0;
   index = 0;
   cout << "Please enter program grades, enter -1 when complete\n";
   cin >> grade;
   do
   {
    gradeb[index] = grade;
    index++;
    cin >> grade;
   } while(grade !=-1);
    for (int b = 0; b < index; b++)
     sum += gradeb[b];
     //Input function here for average value would be 40
     value += math(gradeb, index, 40);
  }
 else
 {
  grade = 0;
  for (int h = 0; h <= index; h++)
   gradeb[h] = 0;
  index = 0;
  cout << "Please enter program grades, enter -1 when complete\n";
  cin >> grade;
  do
  {
   gradeb[index] = grade;
   index++;
   cin >> grade;
  } while(grade !=-1);
   for (int c = 0; c < index; c++)
    sum += gradeb[c];
    //Input function here for average value would be 50
    value += math(gradeb, index, 50);
 }
 grade = 0;
 for (int i = 0; i <= index; i++)
  gradeb[i] = 0;
 index = 0;
 cout << "Please enter quiz grades, enter -1 when complete\n";
 cin >> grade;
 do
 {
  gradeb[index] = grade;
  index++;
  cin >> grade;
 } while(grade !=-1);
  for (int d = 0; d < index; d++)
   sum += gradeb[d];
   //Input function here for average value would be 10
   value += math(gradeb, index, 10);

   // Exam grades
   grade = 0;
   for (int j = 0; j <= index; j++)
    gradeb[j] = 0;
   index = 0;;
   cout << "Please enter Exam grades, enter -1 when complete\n";
   cin >> grade;
     do
     {
      gradeb[index] = grade;
      index++;
      cin >> grade;
       if (grade <= 60)
        fail -= 1;
     } while(grade !=-1);
     for (int d = 0; d < index; d++)
      sum += gradeb[d];
     //Input function here for average value would be 40
     value += math(gradeb, index, 40.0);
     value = value/100;
     if (fail == 0)
      letter = "F";
     else
      letter = lettergrade(value);

     cout << name << " "<< value << " " << letter << endl;

     return 0;

}

int math(int arr[], double x, double value)
{
 int sum = 0;
 for (int f = 0; f < x; f++)
  sum += arr[f];
 sum = sum / x;
 sum = sum * value;
 return sum;
}

string lettergrade(int grade)
{
 string letter = "Z";
 if ((93.0 <= grade) && ( grade <= 100.0))
  letter = "A";
 else if ((90.0 <= grade) && (grade <= 92.9))
  letter = "A-";
 else if ((85.0 <= grade) && (grade <= 89.9))
  letter = "B+";
 else if ((82.0 <= grade) && (grade <= 84.9))
  letter = "'B";
 else if ((80.0 <= grade) && (grade <= 81.9))
  letter = "B-";
 else if ((76.0 <= grade) && (grade <= 79.9))
  letter = "C+";
 else if ((72 <= grade) && (grade <= 75.9))
  letter = "C";
 else if ((69.5 <= grade) && (grade <= 71.9))
  letter = "C-";
 else if ((68 <= grade) && (grade <= 69.5))
  letter = "D+";
 else if ((65 <= grade) && (grade <= 67.9))
  letter = "'D";
 else if ((60 <= grade) && (grade <= 64.9))
  letter = "D-";
 else
  letter = "F";
  return letter;
}
