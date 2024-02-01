#pragma once
#include "Car.h"

class Policecar : public Car
{
public:

	Policecar();
	~Policecar() override;

	void Purr() override;

private:


};

