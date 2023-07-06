#include "Decorator.h"
/*Some game upds that needs to up its price*/
void DecoratorUpdOne::AddNewUpdate() {
	gm->UpPrice(600);
}

void DecoratorUpdTwo::AddNewUpdate() {
	gm->UpPrice(800);
}