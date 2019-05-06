#pragma once
#include "Vacation.h"

class RestIn : public Vacation
{
private:
	
	double transport;
public:
	RestIn();
	~RestIn();
	void SetTransport(double transport);
	double GetTransport() const;

	double GetTravelPrice(Vacation &Obj) override;
};