#include "WorldCup.h"
#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////
//     Constructor and Destructor Section.
//////////////////////////////////////////////////////////////

WorldCup::WorldCup()
{
  A = new Country*[4];
  A[0] = new Country("Russia") ;
  A[1] = new Country("Saudi Arabia") ;
  A[2] = new Country("Egypt") ;
  A[3] = new Country("Uruguay") ;

  B = new Country*[4];
  B[0] = new Country("Portugal") ;
  B[1] = new Country("Spain") ;
  B[2] = new Country("Morocco") ;
  B[3] = new Country("Iran") ;

  C = new Country*[4];
  C[0] = new Country("France") ;
  C[1] = new Country("Australia") ;
  C[2] = new Country("Peru") ;
  C[3] = new Country("Denmark") ;

  D = new Country*[4];
  D[0] = new Country("Argentina") ;
  D[1] = new Country("Iceland") ;
  D[2] = new Country("Croatia") ;
  D[3] = new Country("Nigeria") ;

  E = new Country*[4];
  E[0] = new Country("Brazil") ;
  E[1] = new Country("Switzerland") ;
  E[2] = new Country("Costa Rica") ;
  E[3] = new Country("Serbia") ;

  F = new Country*[4];
  F[0] = new Country("Germany") ;
  F[1] = new Country("Mexico") ;
  F[2] = new Country("Sweden") ;
  F[3] = new Country("Korea Republic") ;

  G = new Country*[4];
  G[0] = new Country("Belgium") ;
  G[1] = new Country("Panama") ;
  G[2] = new Country("Tunisia") ;
  G[3] = new Country("England") ;

  H = new Country*[4];
  H[0] = new Country("Poland") ;
  H[1] = new Country("Senegal") ;
  H[2] = new Country("Colombia") ;
  H[3] = new Country("Japan") ;

  BracketPhase = new Country*[16];
}

WorldCup::~WorldCup()
{
  for (int i=0; i<4; i++)
  {
    delete A[i];
  }
  delete A;

  for (int i=0; i<4; i++)
  {
    delete B[i];
  }
  delete B;

  for (int i=0; i<4; i++)
  {
    delete C[i];
  }
  delete C;

  for (int i=0; i<4; i++)
  {
    delete D[i];
  }
  delete D;

  for (int i=0; i<4; i++)
  {
    delete E[i];
  }
  delete E;

  for (int i=0; i<4; i++)
  {
    delete F[i];
  }
  delete F;

  for (int i=0; i<4; i++)
  {
    delete G[i];
  }
  delete G;
}



//////////////////////////////////////////////////////////////
//      Public methods
//////////////////////////////////////////////////////////////

void WorldCup::groupPhase()
{
  groupMatches(A);
  groupMatches(B);
  groupMatches(C);
  groupMatches(D);
  groupMatches(E);
  groupMatches(F);
  groupMatches(G);
  groupMatches(H);
}

void WorldCup::groupMatches(Country** group)
{
  std::cout << "---------- GROUP ---------- \n";
  groupMatch(group,0,1);
  groupMatch(group,2,3);
  groupMatch(group,0,2);
  groupMatch(group,3,1);
  groupMatch(group,3,0);
  groupMatch(group,1,2);
}

void WorldCup::groupMatch(Country** group, int x, int y)
{
  int scoreX=0, scoreY=0;
  cout << group[x]->getName() << " vs. " << group[y]->getName() << "\n";
  cout << "  " << group[x]->getName() << ": " ;
  cin >> scoreX;
  cout << "  " << group[y]->getName() << ": " ;
  cin >> scoreY;
  if(scoreX > scoreY)
  {
    group[x]->addPoints(3);
  }
  else if(scoreX < scoreY)
  {
    group[y]->addPoints(3);
  }
  else
  {
    group[x]->addPoints(1);
    group[y]->addPoints(1);
  }
}

void WorldCup::groupWinners()
{
  selectionSort(A);
  selectionSort(B);
  selectionSort(C);
  selectionSort(D);
  selectionSort(E);
  selectionSort(F);
  selectionSort(G);
  selectionSort(H);
}

void WorldCup::round16()
{
    BracketPhase[0] = A[0];
    BracketPhase[1] = B[1];
    BracketPhase[2] = C[0];
    BracketPhase[3] = D[1];
    BracketPhase[4] = E[0];
    BracketPhase[5] = F[1];
    BracketPhase[6] = G[0];
    BracketPhase[7] = H[1];
    BracketPhase[8] = B[0];
    BracketPhase[9] = A[1];
    BracketPhase[10] = D[0];
    BracketPhase[11] = C[1];
    BracketPhase[12] = F[0];
    BracketPhase[13] = E[1];
    BracketPhase[14] = H[0];
    BracketPhase[15] = G[1];

    std::cout << "Teams in the round of 16: ";
    for (int i=0; i<16; i++)
    {
      std::cout << BracketPhase[i]->getName() << "\n" ;
    }

    bracketMatch(0,1,0);
    bracketMatch(2,3,1);
    bracketMatch(4,5,2);
    bracketMatch(6,7,3);
    bracketMatch(8,9,4);
    bracketMatch(10,11,5);
    bracketMatch(12,13,6);
    bracketMatch(14,15,7);
}

void WorldCup::quarterFinals()
{
  std::cout << "Teams in the quarter finals: ";
  for (int i=0; i<8; i++)
  {
    std::cout << BracketPhase[i]->getName() << "\n" ;
  }

  bracketMatch(0,1,0);
  bracketMatch(2,3,1);
  bracketMatch(4,5,2);
  bracketMatch(6,7,3);

}

void WorldCup::semiFinals()
{
  std::cout << "Teams in the semi finals: ";
  for (int i=0; i<4; i++)
  {
    std::cout << BracketPhase[i]->getName() << "\n" ;
  }
  bracketMatch(0,1,0);
  bracketMatch(2,3,1);
}

void WorldCup::finals()
{
  std::cout << "Teams in the final: ";
  for (int i=0; i<2; i++)
  {
    std::cout << BracketPhase[i]->getName() << "\n" ;
  }
  bracketMatch(0,1,0);

  std::cout << "CHAMPION: " << BracketPhase[0]->getName() << "\n";
}

void WorldCup::bracketMatch(int x, int y, int counter)
{
  int scoreX=0, scoreY=0;
  cout << BracketPhase[x]->getName() << " vs. " << BracketPhase[y]->getName() << "\n";
  cout << "  " << BracketPhase[x]->getName() << ": " ;
  cin >> scoreX;
  cout << "  " << BracketPhase[y]->getName() << ": " ;
  cin >> scoreY;
  if(scoreX > scoreY)
  {
    BracketPhase[counter] = BracketPhase[x] ;
  }
  else if(scoreX < scoreY)
  {
    BracketPhase[counter] = BracketPhase[y] ;
  }
  else
  {
    int p=0;
    std::cout << "  Penalties! Choose # of penalties winner: \n" ;
    std::cout << "    1 " << BracketPhase[x]->getName() << "\n";
    std::cout << "    2 " << BracketPhase[y]->getName() << "\n";
    std::cin >> p ;
    if (p==0)
    {
      BracketPhase[counter] = BracketPhase[x] ;
    }
    else
    {
      BracketPhase[counter] = BracketPhase[y] ;
    }
  }
}


void WorldCup::selectionSort(Country** group)
{
  Country* temp ;
  for (int lastIndex=3 ; lastIndex>=1 ; lastIndex--)
  {
    int largestIndex = 0 ;
    for (int currentIndex=1 ; currentIndex <(lastIndex+1) ; currentIndex++)
    {
      if (group[currentIndex]->getPoints() < group[largestIndex]->getPoints() )
      {
        largestIndex = currentIndex ;
      }
    }
    // Swap
    temp = group[largestIndex] ;
    group[largestIndex] = group[lastIndex] ;
    group[lastIndex] = temp ;
  }
}
