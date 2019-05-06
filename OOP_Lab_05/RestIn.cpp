#include "Vacation.h"
#include "RestIn.h"
#include <string.h>
RestIn::RestIn()
{

	this->transport = 0;
}


void RestIn::SetTransport(double transport)
{
	this->transport = transport;
}


double RestIn::GetTransport() const
{
	return this->transport;
}

double RestIn::GetTravelPrice(Vacation &Obj) 
{
	this->travelprice = this->GetTime() * this->GetCost() + this->GetTransport();
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
	return this->travelprice;
}

RestIn::~RestIn()
{
}