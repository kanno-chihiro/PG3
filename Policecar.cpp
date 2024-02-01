#include "Policecar.h"

Policecar::Policecar()
{
	name_ = "パトカー";
	printf("%sが走っている\n", name_);
}

Policecar::~Policecar()
{
	printf("%sは走り去った\n", name_);
}

void Policecar::Purr()
{
	printf("%sの音がなっている\n", name_);
}
