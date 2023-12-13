#include <stdio.h>
#include "Enemy.h"

int main()
{

	Enemy enemy_;

	bool GameLoop = true;

	int i = 0;

	while (i < 3)
	{
		enemy_.Update();
		i++;
	}


	return 0;
}
