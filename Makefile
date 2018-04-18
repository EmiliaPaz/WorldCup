WorldCupBracket: main.o WorldCup.o Country.o
	g++ -std=c++11 -g -Wall main.o WorldCup.o Country.o -o WorldCupBracket
main.o: main.cpp WorldCup.h Country.h
	g++ -std=c++11 -g -Wall -c main.cpp
WorldCup.o: WorldCup.h WorldCup.cpp Country.h
	g++ -std=c++11 -g -Wall -c WorldCup.cpp
Country.o: Country.h Country.cpp
	g++ -std=c++11 -g -Wall -c Country.cpp
clean:
	rm *.o WorldCupBracket
