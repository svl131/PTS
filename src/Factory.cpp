#include "Factory.h"

void Game::UpPrice(size_t value) {
	price += value;
}

void Game::SetBrand(const char* val) {
	Brand = val;
}
void Game::Print() {
	std::cout << "Brand: " << Brand << " Price: " << price << std::endl;

}

ShotterGame::ShotterGame() {
	this->Brand = "none";
	this->price = 100;
	std::cout << "Shotter Game " << " Price " << price << " Brand: " << Brand << std::endl;
}

RpgGame::RpgGame() {
	this->Brand = "none";
	this->price = 400;
	std::cout << "Rpg Game " << " Price " << price << " Brand: " << Brand << std::endl;
}


RpgGame ValvFactory::createRpg() {
	RpgGame gm = RpgGame();
	gm.SetBrand("Valv");
	return gm;
}
RpgGame UBFactory::createRpg() {
	RpgGame gm = RpgGame();
	gm.SetBrand("UB");
	return gm;

}
ShotterGame ValvFactory::createShooter() {
	ShotterGame gm = ShotterGame();
	gm.SetBrand("Valv");
	return gm;

}
ShotterGame UBFactory::createShooter() {
	ShotterGame gm = ShotterGame();
	gm.SetBrand("UB");
	return gm;
}

