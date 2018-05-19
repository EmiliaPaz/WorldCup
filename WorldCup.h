#ifndef WORLDCUP_H
#define WORLDCUP_H
#include "Country.h"

class WorldCup
{
  public:
    WorldCup();
    ~WorldCup();

    // Creates the matches in each group for the group phase
    void groupPhase();

    // Creates the matches for the group recieved
    void groupMatches(Country** group, char letter);

    // Creates the match between the 2 teams recieved
    void groupMatch(Country** group, int x, int y);

    // Orders each group by points to get the winner and runner up
    void groupWinners();

    // Creates the BracketPhase with the qualified teams.
    // Creates the matches in the round16
    void round16();

    // Creates the matches in the quarterFinals
    void quarterFinals();

    // Creates the matches in the semFinals
    void semiFinals();

    // Creates the final match
    void finals();

    // Creates a match between the recieved teams
    // Recieves a counter to place the winner team on the correct index of the BracketPhase
    void bracketMatch(int x, int y, int counter);

    // Orders the group according to points
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
