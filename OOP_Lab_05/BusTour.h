#pragma once
#include "Vacation.h"

class BusTour : public Vacation
{
private:
	double costUAH;
	double timeout;
public:
	BusTour();
	~BusTour();
	void SetCostUAH(double costUAH);
	double GetCostUAH() const;
	void SetTimeOut(double timeout);
	double GetTimeOut() const;

	double GetTravelPrice(Vacation &Obj) override;
};
