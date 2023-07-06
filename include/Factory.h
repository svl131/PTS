#pragma once
#include <iostream>
#include <map>
#include <string>

class Game {
protected:
	std::string Brand = "";
	size_t price = 0;
public:
	void UpPrice(size_t value);
	void SetBrand(const char* val);
	void Print();
};

class RpgGame: public Game {
public:
	RpgGame();
};

class ShotterGame: public Game {
public:
	ShotterGame();
};

class GameFactory {
public:
	virtual RpgGame  createRpg() = 0;
	virtual ShotterGame  createShooter() = 0;
};

class ValvFactory: public GameFactory {
public:
	RpgGame createRpg() override;
	ShotterGame createShooter() override;

};

class UBFactory: public GameFactory {
public:
	RpgGame createRpg() override;
	ShotterGame createShooter() override;

};

