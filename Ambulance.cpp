#include "Ambulance.h"

Ambulance::Ambulance()
{
	name_ = "‹~‹}ŽÔ";
	printf("%s‚ª‘–‚Á‚Ä‚¢‚é\n", name_);
}

Ambulance::~Ambulance()
{
	printf("%s‚Í‘–‚è‹Ž‚Á‚½\n", name_);
}

void Ambulance::Purr()
{
	printf("%s‚Ì‰¹‚ª‚È‚Á‚Ä‚¢‚é\n", name_);
}
