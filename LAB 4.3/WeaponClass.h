#pragma once
#include <iostream>
using namespace std;
class WeaponClass
{
public:
	string name;
	int damage;
	int weight;

	WeaponClass(string name, int damage, int weight);

	bool isHeavy();


	int sumWeights(WeaponClass* someWeapon);


	int sumWeights(int someWeight);
};