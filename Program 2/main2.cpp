/*
  Louis Gomez
  B343X495
  Program #2

  Decription: Test for the odometer class
  Pseudo code:

        Test for add_trip
        Test for reset_metrics
        Test for default constructor
        Test to estimate fuel efficiency
*/

#include <iostream>
#include "odometer.hpp"
using namespace std;

int main(void)
{

  Odometer od (12.5, 6.7);
  Odometer od1 (5,6);
  Odometer od2;
  Odometer od3 (8,20);

  //Test for od

  cout <<"For Odometer object od"<<endl;
  cout <<"The mileage: "<<od.get_miles()<<endl;
  cout <<"The number of gallons: "<<od.get_gallons()<<endl;
  cout <<"Current fuel efficiency: "<<od.get_efficiency()<<endl;
  //Update od values
  od.add_trip(6,7);
  cout<<"Updated values for od are: "<<endl;
  cout <<"The number of gallons: "<<od.get_gallons()<<endl;
  cout <<"The mileage: "<<od.get_miles()<<endl;
  cout <<"Current fuel efficiency: "<<od.get_efficiency()<<endl;

  cout <<endl;

  //Test for od1

  cout <<"For Odometer object od1"<<endl;
  cout <<" The mileage: "<<od1.get_miles()<<endl;
  cout <<"The number of gallons: "<<od1.get_gallons()<<endl;
  cout <<"Current fuel efficiency: "<<od1.get_efficiency()<<endl;
  //Reset odometer values to 0
  od1.reset_metrics();
  cout <<"Values after reset are: "<<"Miles: "<<od1.get_miles()<<endl;
  cout <<"Values after reset are: "<<"Gallons: "
       <<od1.get_gallons()<<endl;
  cout<<endl;

  //Test for od2

  cout <<"For Odometer object od2 with no values"<<endl;
  cout <<" The mileage: "<<od2.get_miles()<<endl;
  cout <<"The number of gallons: "<<od2.get_gallons()<<endl;
  cout <<"Current fuel efficiency: "<<od2.get_efficiency()<<endl;
  cout<<endl;

  //Test for od3

  cout <<"For Odometer object od3"<<endl;
  cout <<" The mileage: "<<od3.get_miles()<<endl;
  cout <<"The number of gallons: "<<od3.get_gallons()<<endl;
  cout <<"Current fuel efficiency: "<<od3.get_efficiency()<<endl;
  cout <<"Input miles driven to get estimated fuel efficiency is 10"<<endl;
  double result;
  result = od3.estimated_gallon_value(10);
  cout <<"Estimated Fuel efficinecy is: "<<result<<endl;

  return 0;
}
