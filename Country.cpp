#include "Country.h"

//////////////////////////////////////////////////////////////
//     Constructor and Destructor Section.
//////////////////////////////////////////////////////////////

Country::Country()
{
  name = "";
  points = 0;
}

Country::Country(std::string n)
{
  name = n;
  points = 0;
}

Country::~Country()
{

}

//////////////////////////////////////////////////////////////
//      Getters and Setters
//////////////////////////////////////////////////////////////

void Country::setName(std::string n)
{
  name = n;
}

std::string Country::getName() const
{
  return (name);
}

void Country::setPoints(int p)
{
  points = p;
}

void Country::addPoints(int p)
{
  points = points + p;
}

int Country::getPoints() const
{
  return (points);
}
