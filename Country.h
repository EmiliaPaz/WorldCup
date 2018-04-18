#ifndef COUNTRY_H
#define COUNTRY_H
#include <iostream>
#include <string>

class Country
{
  public:
    Country();
    Country(std::string n);
    ~Country();
    void setName(std::string n);
    std::string getName() const;
    void setPoints(int p);
    void addPoints(int p);
    int getPoints() const;

  private:
    std::string name ;
    int points;
};

#endif
