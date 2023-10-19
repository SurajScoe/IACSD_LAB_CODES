/*Write a program to copy the contents of one file and write it into another file and print it.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream f1;
    fstream f2;

    string ch;

    /*opening first file to read the content*/
    f1.open("suraj1.txt",ios::in);

    /*Open second file to write
    the content copied from first file*/
    f2.open("suraj2.txt",ios::out);

    while(!f1.eof()){
        /*extracting the content of first file
        */
       getline(f1, ch);

       /*writing content to second file
       */
      f2<<ch<<endl;
    }
    f1.close();
    f2.close();

    /*opening second file to read*/
    while(!f2.eof()){
        /*extracting the content of second file
        */
       getline(f2,ch);
       /*writing content of second file
       */
      cout<<ch<<endl;
    }
    f2.close();
}