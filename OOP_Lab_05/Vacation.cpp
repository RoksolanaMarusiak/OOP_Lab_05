#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include "Vacation.h"

Vacation::Vacation()
{
	this->Place[20] = { 0 };
	this->timein = 0;
	this->costcur = 0;
}

void Vacation::SetPlace(char *place)
{
	strcpy(Place, place);
}

void Vacation::SetCurrency(char *currency)
{
	strcpy(Currency, currency);
}

void Vacation::SetTime(int time)
{
	this->timein = time;
}

void Vacation::SetTravelPrice(double travpl)
{
	this->travelprice = travpl;
}


void Vacation::SetCost(double cost)
{
	this->costcur = cost;
}

char* Vacation::GetPlace()
{
	return this->Place;
}

int Vacation::GetTime() const
{
	return this->timein;
}


double Vacation::GetCost() const
{
	return this->costcur;
}

Vacation::~Vacation()
{
}