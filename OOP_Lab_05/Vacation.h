#pragma once
class Vacation
{
protected:
	char Place[20];
	int timein;
	double costcur;
	double travelprice;
	char Currency[4];
public:
	Vacation();
	~Vacation();
	void SetPlace(char *place);
	void SetTime(int time);
	void SetTravelPrice(double travpl);
	void SetCost(double cost);
	void SetCurrency(char *currency);
	char* GetPlace();
	double GetCost() const;
	int GetTime() const;
	virtual double GetTravelPrice(Vacation &Obj) = 0;
}; 
