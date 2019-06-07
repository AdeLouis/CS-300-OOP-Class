/*
  Louis Gomez
  B343X495
  Program #2
*/

//Louis gomez
#include "odometer.hpp"

//Default constructor
//Initialized data to 5
Odometer::Odometer()
{
  miles = gallons = 0;
  calc_efficiency();
}

//constructor that sets miles and gallons. Calculates fuel efficiency
Odometer::Odometer(double mil, double gal)
{
  miles = mil;
  gallons = gal;
  calc_efficiency();
}

//function that takes in miles and estimates gallons based on fuel efficiency
double Odometer::estimated_gallon_value(double mil)
{
  return (mil / fuel_efficiency);
}

//resets the metrics to zero. also resets efficiency to zero
void Odometer::reset_metrics()
{
  miles = 0;
  gallons = 0;
  calc_efficiency();
}

//gets current metrics to be updated
void Odometer::add_trip(double mil, double gal)
{
  miles = miles + mil;
  gallons = gallons + gal;
}

//calculates fuel efficiency
void Odometer::calc_efficiency()
{
  fuel_efficiency = miles/gallons;
}

//Accessor function to return get_miles
double Odometer::get_miles()
{
  return miles;
}

//Accessor function to get get_gallons
double Odometer::get_gallons()
{
  return gallons;
}

//Accessor function to get fuel efficiency
double Odometer::get_efficiency()
{
  return fuel_efficiency;
}
