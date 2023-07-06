#include "Factory.h"
#include "Decorator.h"
#include <vector>

int main() {
	/*Factory of games*/
	GameFactory* fact1 = new ValvFactory();
	GameFactory* fact2 = new UBFactory();

	/*Vector of games */
	std::vector<Game> games;
	games.push_back(fact1->createRpg());
	games.push_back(fact1->createShooter());
	games.push_back(fact2->createRpg());
	games.push_back(fact2->createShooter());

	/*ouput*/
	for (auto& gm : games) {
		gm.Print();
	}

	/*Add New Updtes to games*/
	std::vector<Decorator*> decs;
	decs.push_back(&DecoratorUpdOne(&games[0]));
	decs.push_back(&DecoratorUpdOne(&games[1]));
	decs.push_back(&DecoratorUpdTwo(&games[2]));
	decs.push_back(&DecoratorUpdTwo(&games[3]));

	/*Call update*/
	for (auto& dec : decs) {
		dec->AddNewUpdate();
	}

	/*output*/
	for (auto& gm : games) {
		gm.Print();
	}
	
	delete fact1;
	delete fact2;
	
}