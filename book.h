#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#ifndef BOOK_H
#define BOOK_H
using namespace std;
class book
{
    public:
        book();
    string book_name;
    string book_author ;
    int publish_year ;
    int num_of_version ;
    friend istream& operator >> (istream & in, book &p);
    friend ostream& operator<<(ostream & os, book &p);

        virtual ~book();

    protected:

    private:
};

#endif // BOOK_H
