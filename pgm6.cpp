/* Noah McGhghy
 Z698V495
 pgm6.cpp
 Program 6
 
 Description:
 Telephone Number Word Generator. Many people find it difficult to memorize
 phone numbers, so they use correspondence between digits and letters to develop
 seven-letter words that correspond to their phone numbers.
 
 Pseudo-code
 
 initialize ary[y][z] of 7 to 0;
 ofstream outfile_;
 outfile_.open("output.txt")
 While (bool == true)
 switch statement
 Case 1:
 cout << "Enter a 7 letter name that you would like convertered to numbers"\n;
 getline(cin, name);
 file_ << name << endl;
 while(!file_.eof())
 getline(file_,line);
 for(int x = 0;line[x]='\0',x++)
 if(line[x]=='A'||line[x]=='a'||line[x]=='B'\\line[x]=='b'||line[x]=='C'||
 line[x]=='c')
 ary[y][z] = 2;
 else if(line[x]=='D'||line[x]=='d'||line[x]=='E'\\line[x]=='e'
 ||line[x]=='F'||line[x]=='f')
 ary[y][z] = 3;
 else if(line[x]=='G'||line[x]=='g'||line[x]=='H'\\line[x]=='h'
 ||line[x]=='I'||line[x]=='i')
 ary[y][z] = 4;
 else if(line[x]=='J'||line[x]=='j'||line[x]=='K'\\line[x]=='k'
 ||line[x]=='L'||line[x]=='l')
 ary[y][z] = 5;
 else if(line[x]=='M'||line[x]=='m'||line[x]=='N'\\line[x]=='n'
 ||line[x]=='O'||line[x]=='o')
 ary[y][z] = 6;
 else if(line[x]=='P'||line[x]=='p'||line[x]=='Q'\\line[x]=='q'
 ||line[x]=='R'||line[x]=='r')
 ary[y][z] = 7;
 else if(line[x]=='S'||line[x]=='s'||line[x]=='T'\\line[x]=='t'
 ||line[x]=='U'||line[x]=='u')
 ary[y][z] = 8;
 else
 ary[y][z] = 9;
 for(int a = 0; a <= y; a++)
 {
 for(int b = 0; b <= z; a++)
 {
 cout << ary[a][b];
 }
 }
 break;
 
 Case 2
 For loops
 a whole lot of if statements.
 
 
 
 break;
 
 Case 3
 bool = false;
 break;
 
 file_.close();
 return 0;
 
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    //used for making the number conversion from a word.
    int ary_[7] = {0};
    //file to hold the converted words.
    ofstream outfile_;
    outfile_.open("output.txt");
    // boolean expression used to end program.
    bool done = true;
    // variable for use to select which menu option they would like.
    int casen = 0;
    //c string to hold the word/name.
    char str[7];
    //char array to hold every possible outcome the extra a's are space holders.
    char str2[3][10] = {{'a','a','a','d','g','j','m','p','t','w'}, {'a','a','b','d','h','k','n','q','u','x'},{'a','a','c','f','i','l','o','r','v','y'}};
    //int used to take in number needed to be converted to words
    int numberentered = 0;
    //array used to convert numberentered to an array
    int ary2[7]= {0};
    //used to help instead of excess loops
    int bb = 0;
    int cc = 0;
    int dd = 0;
    int ee = 0;
    int ff = 0;
    int gg = 0;
    while(done == true)
    {
        cout << "Please select one of the following options:"
        << " 1. Convert from telephone name to number,"
        << " 2. Print corresponding names from telephone number"
        << " 3. Exit Program\n";
        cin >> casen;
        switch (casen)
        {
            case 1:
                cout << "Please Input a 7 digit Word to convert without s or z" <<endl;
                cin >> str;
                for(int x = 0; x < 8; x++)
                {
                    if(str[x]=='A'||str[x]=='a'||str[x]=='B'||str[x]=='b'||str[x]=='C'||str[x]=='c')
                        ary_[x] = 2;
                    else if(str[x]=='D'||str[x]=='d'||str[x]=='E'||str[x]=='e'||str[x]=='F'||str[x]=='f')
                        ary_[x] = 3;
                    else if(str[x]=='G'||str[x]=='g'||str[x]=='H'||str[x]=='h'||str[x]=='I'||str[x]=='i')
                        ary_[x] = 4;
                    else if(str[x]=='J'||str[x]=='j'||str[x]=='K'||str[x]=='k'||str[x]=='L'||str[x]=='l')
                        ary_[x] = 5;
                    else if(str[x]=='M'||str[x]=='m'||str[x]=='N'||str[x]=='n'||str[x]=='O'||str[x]=='o')
                        ary_[x] = 6;
                    else if(str[x]=='P'||str[x]=='p'||str[x]=='Q'||str[x]=='q'||str[x]=='R'||str[x]=='r')
                        ary_[x] = 7;
                    else if(str[x]=='T'||str[x]=='t'||str[x]=='U'||str[x]=='u'||str[x]=='V'||str[x]=='v')
                        ary_[x] = 8;
                    else
                        ary_[x] = 9;
                }
                for(int a = 0; a < 7; a++)
                {
                    cout << ary_[a];
                }
                cout << endl;
                break;
                
            case 2:
                cout << "Please input a 7 digit number to convert to possible names without 0 or 1\n";
                cin >> numberentered;
                ary2[6] = numberentered % 10;
                ary2[5] = (numberentered /10) % 10;
                ary2[4] = (numberentered /100) % 10;
                ary2[3] = (numberentered /1000) % 10;
                ary2[2] = (numberentered /10000) % 10;
                ary2[1] = (numberentered /100000) % 10;
                ary2[0] = (numberentered /1000000) %10;
                
                for(int aa = 0; aa < 2187; aa++)
                {
                    if(aa < 729)
                    {
                        outfile_ << str2[0][ary2[0]];
                    }
                    else if((729 <= aa) && (aa< 1458))
                    {
                        outfile_ << str2[1][ary2[0]];
                    }
                    else
                    {
                        outfile_ << str2[2][ary2[0]];
                    }
                    if (bb < 243)
                    {
                        outfile_ << str2[0][ary2[1]];
                    }
                    else if((243 <= bb)&&(bb < 486))
                    {
                        outfile_ << str2[1][ary2[1]];
                    }
                    else
                    {
                        outfile_ << str2[2][ary2[1]];
                    }
                    if(cc < 81)
                    {
                        outfile_ << str2[0][ary2[2]];
                    }
                    else if((81 <= cc)&&(cc < 162))
                    {
                        outfile_ << str2[1][ary2[2]];
                    }
                    else
                    {
                        outfile_ << str2[2][ary2[2]];
                    }
                    if(dd < 27)
                    {
                        outfile_ << str2[0][ary2[3]];
                    }
                    else if((27 <= dd)&&(dd < 54))
                    {
                        outfile_ << str2[1][ary2[3]];
                    }
                    else
                    {
                        outfile_ << str2[2][ary2[3]];
                    }
                    if(ee < 9)
                    {
                        outfile_ << str2[0][ary2[4]];
                    }
                    else if((9 <= ee)&&(ee < 18))
                    {
                        outfile_ << str2[1][ary2[4]];
                    }
                    else
                    {
                        outfile_ << str2[2][ary2[4]];
                    }
                    if(ff < 3)
                    {
                        outfile_ << str2[0][ary2[5]];
                    }
                    else if((3 <= ff)&&(ff < 6))
                    {
                        outfile_ << str2[1][ary2[5]];
                    }
                    else
                    {
                        outfile_ << str2[2][ary2[5]];
                    }
                    if(gg == 0)
                    {
                        outfile_ << str2[0][ary2[6]] << endl;
                    }
                    else if(gg == 1)
                    {
                        outfile_ << str2[1][ary2[6]] << endl;
                    }
                    else
                    {
                        outfile_ << str2[2][ary2[6]] << endl;
                    }
                    bb++;
                    cc++;
                    dd++;
                    ee++;
                    ff++;
                    gg++;
                    
                    if(bb == 729)
                        bb =0;
                    
                    if(cc == 243)
                        cc = 0;
                    
                    if(dd == 81)
                        dd = 0;
                    
                    if(ee == 27)
                        ee = 0;
                    
                    if(ff == 9 )
                        ff = 0;
                    
                    if(gg == 3)
                        gg = 0;
                }
                outfile_.close();
                break;
                
            case 3:
                done = false;
                break;
        }
    }
    
    return 0;
    
}
