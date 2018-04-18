#ifndef WORLDCUP_H
#define WORLDCUP_H
#include "Country.h"

class WorldCup
{
  public:
    WorldCup();
    ~WorldCup();

    void groupPhase();
    void groupMatches(Country** group);
    void groupMatch(Country** group, int x, int y);

    void groupWinners();

    void round16();
    void quarterFinals();
    void semiFinals();
    void finals();
    void bracketMatch(int x, int y, int counter);

    void selectionSort(Country** group);


  private:
    Country ** A;
    Country ** B;
    Country ** C;
    Country ** D;
    Country ** E;
    Country ** F;
    Country ** G;
    Country ** H;

    Country ** BracketPhase;
};

#endif
