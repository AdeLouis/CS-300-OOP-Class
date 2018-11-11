/*
  Louis Gomez
  B343X495
  Program #2

  This is an odometer class that tracks miles, gallons and fuel efficincy for an
  automotive vehicle. It can calculate fuel usage based on given miles and
  fuel efficiency

  Pseudo Code:
  Class Name: Odometer
    This class tracks fuels and mileage for an automotive vehicle
    Data: miles - holds number of miles
          gallons - holds number of gallons used
          fuel - contains fuel efficiency value in miles per gallons

    Public:
    estimated_gallon_value- gets the number of gallons based on miles
                          and efficiency


          Odometer - default constructor
          Odometer - sets miles and gallons. If values already exist, add them
                     up. It also calculates the fuel efficiency and sets
                     the value
         add_trip - adds new metrics to currently existing values

    Mutator Functions:
          reset_metrics -resets miles and gallons to zero.(Also resets fuel to 0)

    Accessor Functions:
          get_miles - returns the miles driven
          get_gallons - returns the number of gallons used
          get_efficiency - returns the fuel efficiency

    Private: calc_efficiency - calculates the fuel efficiency
                    Return: nothing
                    Input: None

                    fuel = miles / gallons


*/

class Odometer
{
  double miles, gallons,fuel_efficiency;
  void calc_efficiency(void);

public:

  Odometer();
  Odometer(double mil, double gal);
  //Mutator functions
  void add_trip(double a, double b);
  double estimated_gallon_value(double mil);
  void reset_metrics(void);
  //Accessor functions
  double get_miles();
  double get_gallons();
  double get_efficiency();
};
