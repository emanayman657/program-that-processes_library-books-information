#include "data.h"
#include "book.h"
data::data()
{
    //ctor
}

   vector <book>   v;
   vector <book> data:: add_book ()
    {
        book obj;
        int num;
        cout << "enter the num of book you want to add \n";
        cin>>num;
        for ( int i = 0; i < num; i++ )
        {
            cin >>obj;
            v.push_back(obj);
        }
        return v;
        /* for ( int j = 0; j < num; j++ )
          cout <<  v[ j ];*/
    }


    void data:: search_name ()
    {
        cout <<"enter the name of the book  " <<endl;
        string name ;
        cin >>name;
        for (int i=0; i<v.size(); i++)
        {
            if (v[i].book_name==name)
            {
                cout <<" yes this book of name " << name <<" is exist \n" << "and the info of the book is \n" <<v[i];
            }
            else if (v[i].book_name!=name)
            {
                cout <<  "this book is not exist \n";

            }
        }
    }
    void data:: search_author ()
    {
        //book k;
        cout <<"enter the name of the author " <<endl;
        string author ;
        cin >> author;
        for (int i=0; i<v.size(); i++)
        {
            // k=v.at(i);
            if (v[i].book_author==author)
            {
                cout <<" yes this book of author  " << author <<" is exist \n" << "and the info of the book is \n" <<v[i];
            }
            else
            {
                cout <<  "this book is not exist \n";
            }
        }
    }
    void data :: alphabet_order() //using bubble sort
    {
        for (int i = 0; i < v.size() -1; i++)
        {
            for (int j = v.size() -1; j > i; --j)
                if (v [j].book_name < v [j-1].book_name)
                    swap (v [j], v [j -1]);

        }
        cout << "the books in alphabetical order is : \n";
          for ( int j = 0; j < v.size(); j++ )
          cout <<  v[ j ];
    }
    void data :: updata ()
    {
        string name ;
        cout << "enter the name of the book that you want to update \n";
        cin >>name;
        int Newversion;
        for (int i=0; i<v.size(); i++)
        {
            if (v[i].book_name==name)
            {
                cout << "enter the new number of available versions \n";
                cin >>Newversion;
                v[i].num_of_version=Newversion;
            }
        }
        cout << "the books after updating is : \n";
        for ( int j = 0; j < v.size(); j++ )
          cout <<  v[ j ];
        }


    int data :: highest_versions()
    {        for (int i = 0; i < v.size() -1; i++)
        {
            for (int j = v.size() -1; j > i; --j)
                if (v [j].num_of_version > v [j-1].num_of_version)
                    swap (v [j], v [j -1]);
        }
        cout << "the books that have the highest versions is :\n";
        for (int k=0;k<v.size();k++){

               for (int r=0;r<v.size();r++)   {
            if (v[k].num_of_version==v[k+r].num_of_version){
                cout <<v[k+r];

            }

        }
        return 0;}}
data::~data()
{
    //dtor
}
