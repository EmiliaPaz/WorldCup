#include "Country.h"

//////////////////////////////////////////////////////////////
//     Constructor and Destructor Section.
//////////////////////////////////////////////////////////////

Country::Country()
{
  name = "";
  points = 0;
  goalsFavor = 0;
  goalsAgainst = 0;
  goalDifference = 0;
}

Country::Country(std::string n)
{
  name = n;
  points = 0;
  goalsFavor = 0;
  goalsAgainst = 0;
  goalDifference = 0;
}

Country::~Country()
{

}

//////////////////////////////////////////////////////////////
//      Getters and Setters
//////////////////////////////////////////////////////////////

// Name
void Country::setName(std::string n)
{
  name = n;
}

std::string Country::getName() const
{
  return (name);
}

// Points
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

// Goals
void Country::addGoalsFavor(int g)
{
  goalsFavor = goalsFavor + g;
  goalDifference = goalDifference + g;
}

int Country::getGoalsFavor()const
{
  return goalsFavor;
}

void Country::addGoalsAgainst(int g)
{
  goalsAgainst = goalsAgainst + g;
  goalDifference = goalDifference - g;
}

int Country::getGoalsAgainst()const
{
  return goalsAgainst;
}

int Country::getGoalDifference()const
{
  return goalDifference;
}
