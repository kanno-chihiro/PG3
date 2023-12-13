#pragma once

class Enemy
{
public:

	void Update();

	bool IsGameLoop() { return gameLoop_; }

private:

	enum class Phase
	{
		kApproach,
		kFire,
		kRelese
	};

	void kApproach();

	void kFire();

	void kRelease();

	Phase phase_ = Phase::kApproach;

	static void (Enemy::* FuncTable[])();

	bool gameLoop_ = true;

};

