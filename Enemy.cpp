#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::FuncTable[])()
{
	&Enemy::kApproach,
		& Enemy::kFire,
		& Enemy::kRelease
};

void Enemy::Update()
{
	(this->*FuncTable[(int)phase_])();
}

void Enemy::kApproach()
{
	printf("�ڋ�\n");

	phase_ = Phase::kFire;
}

void Enemy::kFire()
{
	printf("�U��\n");

	phase_ = Phase::kRelese;
}

void Enemy::kRelease()
{
	printf("���E\n");

}

