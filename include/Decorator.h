#include "Factory.h"

class Decorator : public Game {
protected:
	Game* gm;
public:
	Decorator(Game* game) : gm(game) {};
	virtual void AddNewUpdate() = 0;
};

class DecoratorUpdOne : public Decorator {
public:
	DecoratorUpdOne(Game* game) : Decorator(game) {};
	void AddNewUpdate() override;
};

class DecoratorUpdTwo : public Decorator {
public:
	DecoratorUpdTwo(Game* game) : Decorator(game) {};
	void AddNewUpdate() override;
};