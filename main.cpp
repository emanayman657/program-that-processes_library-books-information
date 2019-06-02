#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include "book.h"
#include "data.h"
using namespace std;

istream& operator >> (istream & in, book &p)
{

    cout <<"enter the book name "<<endl;
    in >> p.book_name;
    cout <<"enter the book author "<<endl;
    in >> p.book_author;
    cout <<"enter the publish year "<<endl;
    in >> p.publish_year;
    cout <<"enter the num of available versions "<<endl;
    in >> p.num_of_version;
}
ostream& operator<<(ostream & out, book &p)
{
    out <<endl<< p.book_name << endl;
    out << p.book_author << endl;
    out << p.publish_year << endl;
    out << p.num_of_version << endl;
    return out;
}

int main()
{

        int choose ;
        data Book;
    while (true)
{

        cout<< "hello what yo want to do \n 1 - add book  \n 2-search for book by name \n 3-search for book by author name \n 4- list  books in alphabitical order \n 5- updata the number of available versions of book \n 6- find the book which have highest numbers of versions \n 7- for exist \n";
        cin >>choose;
        if (choose==1)
        {
            Book.add_book();
        }
        if (choose==2)
        {
            Book.search_name();
        }
        if (choose==3)
        {
            Book.search_author();
        }
        if (choose==4)
        {
            Book.alphabet_order();
        }
        if (choose==5)
        {
            Book.updata();
        }
        if (choose==6)
        {
        Book.highest_versions();

        }
        if (choose ==7)
            break;

        if (choose >7|| choose <1)
            cout<<"error in the choice \n";}

   return 0;
}
