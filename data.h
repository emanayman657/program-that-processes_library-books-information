#ifndef DATA_H
#define DATA_H
#include "book.h"
#include <iostream>
#include <fstream>
#include <vector>
class data : protected book
{
    public:
        data();

    vector <book>  add_book ();
    void search_name ();
    void search_author ();
    void alphabet_order(); //using bubble sort
    void updata ();
    int highest_versions();

        virtual ~data();

    protected:

    private:
};

#endif // DATA_H
