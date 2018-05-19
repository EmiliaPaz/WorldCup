#ifndef COUNTRY_H
#define COUNTRY_H
#include <iostream>
#include <string>

class Country
{
  public:
    // Constructors & Destructor
    Country();
    Country(std::string n);
    ~Country();

    // Name
    void setName(std::string n);
    std::string getName() const;

    // Points
    void setPoints(int p);
    void addPoints(int p);
    int getPoints() const;

    // Goals
    void addGoalsFavor(int g);
    int getGoalsFavor()const;
    void addGoalsAgainst(int g);
    int getGoalsAgainst()const;
    int getGoalDifference()const;

  private:
    std::string name ;
    int points;
    int goalsFavor;
    int goalsAgainst;
    int goalDifference;
};

#endif
