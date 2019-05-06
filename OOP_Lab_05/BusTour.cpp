#include "Vacation.h"
#include "BusTour.h"
#include <string.h>

BusTour::BusTour()
{
	this->costUAH = 0;
	this->timeout = 0;
}

void BusTour::SetCostUAH(double costUAH)
{
	this->costUAH = costUAH;
}

double BusTour::GetCostUAH() const
{
	return this->costUAH;
}

void BusTour::SetTimeOut(double timeout)
{
	this->timeout = timeout;
}

double BusTour::GetTimeOut() const
{
	return this->timeout;
}

BusTour::~BusTour()
{
}

double BusTour::GetTravelPrice(Vacation &Obj)
{
	this->travelprice = this->GetCost();
	if (strcmp(this->Currency, "USD") == 0) //covnert to UAH
	{
		this->travelprice *= 26;
	}
	if (strcmp(this->Currency, "EUR") == 0)
	{
		this->travelprice *= 29;
	}
	if (strcmp(this->Currency, "RUR") == 0)
	{
		this->travelprice /= 4;
	}
	this->travelprice *= this->GetTimeOut();
	this->travelprice += (this->GetCostUAH()*this->GetTime());
	return this->travelprice;
}
