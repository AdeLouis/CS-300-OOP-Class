/*
  Louis Gomez
  B343X495
  Program #6

  This is the out of bounds class fo rout of bounds errors whil using arrays

  Pseudo Code:
  Class name: Out_of_bounds
  Data - message - Message is a string that holds the information to be outputted
                   when an out of bounds error occurs

  Public:

  Out_of_bounds - default constructor that has a message of:
                  "Array index exceeds the array limit"

  Out_of_bounds - constructor that sets the message to a user defined input upon
                  object declaration

  What - a member function that return the string message of the declared object
  */

  class Out_of_bounds
  {

  private:
    string message;

  public:
    Out_of_bounds()
    {
      message = "Array index exceeds the array limit";
    }
    Out_of_bounds(string str)
    {
      message = str;
    }
    string what()
    {
      return message;
    }
  };
