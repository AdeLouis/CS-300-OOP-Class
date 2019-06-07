//Name: Louis Gomez
//ID: B343x495
//Class: CS311
//Another comment here
//How does thsi behave
//Hello
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Structure of library of books that holds certain information about each book
struct book_list
{
  int book_number;
  string book_title;
  string author;
  string description;
  int month;
  int year;
  int rating;
};

int main(void){

  int sel, modify, rating; //temporary integers
  int count = 0;
  int num_books = 0;
  book_list book[500];

  ifstream input_file;
  input_file.open("reading_list.txt"); // open the input file reading_list.txt

  if(input_file.is_open())             //Checks to see if file is open
    {
      input_file >> num_books;

      cout <<"Total number of books currently in the tracker is: "<<num_books <<endl;
      cout << endl;

      for (int x = 0; x < num_books; x+=1)   //reads file into books
      {
        input_file >> book[x].book_number;
        input_file.ignore();
        input_file >> book[x].book_title;
        input_file >> book[x].author;
        input_file >> book[x].description;
        input_file >> book[x].month;
        input_file >> book[x].year;
        input_file >> book[x].rating;
        input_file.ignore();
      }
      count = num_books;
    }

  cout <<"This is a book tracker system."<<endl;
  cout <<"Plese select the number associated with the intended action."<<endl;
  cout <<endl;

  do {

    cout <<"1. Print books "<<endl;
    cout <<"2. Enter a new book"<<endl;
    cout <<"3. Modify an existing book"<<endl;
    cout <<"4. Print number of books"<<endl;
    cout <<"5. Print books based on a certain rating"<<endl;
    cout <<"6. Exit the program"<<endl;
    cout << endl;

    cout <<"What is your selection: ";
    cin >>sel;
    cin.ignore();
    cout << endl;

    if ((sel < 1 ) || (sel > 6))
    { //Checks to make sure the selection is between range
      cout <<"Selection out of range. Select between (1,6)"<<endl;
      cout <<endl;
    }

    else
    {
      switch (sel)
        {
          case 1:                      //Print current books
            for (int x = 0; x < num_books; x+=1)
              {
              cout <<book[x].book_number<<"  "<<book[x].book_title<<"  "<<book[x].author<<"  ";
              cout <<book[x].description<<"  "<<book[x].month<< "/"<<book[x].year <<"  "<<book[x].rating<<endl;
              }
              cout <<endl;
            break;

          case 2:                    //Enter new book
            num_books+=1;
            cout <<"Enter new book below"<<endl;

            cout <<"Enter title: ";
            getline (cin, book[count].book_title);

            cout <<"Enter author: ";
            getline(cin, book[count].author);

            cout <<"Enter book description: ";
            getline(cin, book[count].description);

            cout <<"Enter month of publish: ";
            cin >> book[count].month;
            cout <<"Enter year of publish: ";
            cin >> book[count].year;
            cout <<"Enter rating for this book: ";
            cin >> book[count].rating;
            cin.ignore();

            book[count].book_number = count + 1;
            count+=1;
            cout <<endl;
            break;

          case 3:                    //Modify book details
            cout <<"Enter book number to modify: ";
            cin >> modify;
            cin.ignore();
            modify = modify - 1;

            cout <<book[modify].book_number<<"  "<<book[modify].book_title<<"  "<<book[modify].author<<"  ";
            cout <<book[modify].description<<"  "<<book[modify].month<< "/"<<book[modify].year <<"  "<<book[modify].rating<<endl;

            cout <<"Enter title: ";
            getline (cin, book[modify].book_title);

            cout <<"Enter author: ";
            getline(cin,book[modify].author);

            cout <<"Enter book description: ";
            getline(cin,book[modify].description);

            cout <<"Enter month of publish: ";
            cin >> book[modify].month;
            cout <<"Enter year of publish: ";
            cin >> book[modify].year;
            cout <<"Enter rating for this book: ";
            cin >> book[modify].rating;
            cin.ignore();

            cout <<"Book details updated"<<endl;
            cout <<endl;

            break;

          case 4:                    //Total number of book_list
            cout <<"Total number of books: "<<num_books<<endl;
            cout <<endl;
            break;

          case 5:                   //Print books based on selected book_rating
            cout <<"Enter desired rating: ";
            cin >> rating;
            cin.ignore();

            for (int x = 0; x < num_books; x+=1)
              {
                if (book[x].rating == rating)
                {
                  cout <<book[x].book_number<<"  "<<book[x].book_title<<"  "<<book[x].author<<"  ";
                  cout <<book[x].description<<"  "<<book[x].month<< "/"<<book[x].year <<"  "<<book[x].rating<<endl;
                }
              }
            cout <<endl;
            break;

          default:

            ofstream output_file;
            output_file.open("reading_list.txt");
            output_file << num_books <<endl;

            for (int x = 0; x < count; x+=1)
            {
              output_file << book[x].book_number<<endl;
              output_file << book[x].book_title<< endl;
              output_file << book[x].author<<endl;
              output_file << book[x].description<<endl;
              output_file << book[x].month<<endl;
              output_file << book[x].year<<endl;
              output_file << book[x].rating<<endl;
            }

            cout <<"Book records saved in reading_list.txt"<<endl;
            cout <<"Exiting the program"<<endl;
            output_file.close();
            break;                //Print books to text files
        }
    }
  } while(sel != 6);
return 0;
}
