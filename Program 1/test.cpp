#include <iostream>
#include <string>
#include <fstream>


using namespace std;

struct book_list{

  int book_number;
  string book_title;
  string author;
  string description;
  int month;
  int year;
  int rating;
};

int main(void)
{
  book_list book[10];
  int num_books = 0;


  ifstream input_file;
  input_file.open("reading_list.txt"); // open the input file reading_list.txt

  if(input_file.is_open())
    {
      cout<<"file is open"<<endl;
      input_file >> num_books;
      cout <<"Total number of books is"<<num_books <<endl;

      for (int x = 0; x < num_books; x+=1)
      {
        input_file >> book[x].book_number;
        input_file >> book[x].book_title;
        input_file >> book[x].author;
        input_file >> book[x].description;
        input_file >> book[x].month;
        input_file >> book[x].year;
        input_file >> book[x].rating;
      }

      for (int x = 0; x < num_books; x+=1)
        {
        cout <<book[x].book_number<<"  "<<book[x].book_title<<"  "<<book[x].author<<"  ";
        cout <<book[x].description<<"  "<<book[x].month<< "/"<<book[x].year <<"  "<<book[x].rating<<endl;
        }
    }


  return 0;
}
