#include "Vacation.h"
#include "RestIn.h"
#include "BusTour.h"
#include <string.h>
#include <iostream>

using namespace std;

void SetDataR(RestIn Obj[], const int amount)
{
	int time;
	double dayprice = 0, trans = 0, travel_price = 0;
	char place[20] = "", currency[5] = { 0 };
	for (int i = 0; i < amount; i++)
	{
		cout << "Input place" << endl;
		cin >> place;
		Obj[i].SetPlace(place);
		cout << "Enter the duration (in days):" << endl;
		cin >> time;
		Obj[i].SetTime(time);
		cout << "Enter the price for one day:" << endl;
		cin >> dayprice;
		Obj[i].SetCost(dayprice);
		cout << "Enter the price for the transport:" << endl;
		cin >> trans;
		Obj[i].SetTransport(trans);
		cout << "Enter currency:" << endl;
		cin >> currency;
		Obj[i].SetCurrency(currency);
		cout << endl;
	}
}

void SetDataB(BusTour Obj[], const int amount)
{
	int time, time2;
	double dayprice = 0, dayprice2 = 0;
	char place[20] = "", currency[5] = { 0 };
	for (int i = 0; i < amount; i++)
	{
		cout << "Input place" << endl;
		cin >> place;
		Obj[i].SetPlace(place);
		cout << "Enter the duration (in country):" << endl;
		cin >> time;
		Obj[i].SetTime(time);
		cout << "Enter the price for one day in country (in UAH):" << endl;
		cin >> dayprice;
		Obj[i].SetCostUAH(dayprice);
		cout << "Enter the duration (abroad):" << endl;
		cin >> time2;
		Obj[i].SetTimeOut(time2);
		cout << "Enter the price for one day in abroad:" << endl;
		cin >> dayprice2;
		Obj[i].SetCost(dayprice2);
		cout << "Enter currency:" << endl;
		cin >> currency;
		Obj[i].SetCurrency(currency);
		cout << endl;
	}
}

void ShowDataR(RestIn Obj[], int amount)
{
	for (int i = 0; i < amount; i++)
	{
		cout << "---------------------------------------------" << endl;
		cout << "Place: " << Obj[i].GetPlace() << endl;
		cout << "Duration: " << Obj[i].GetTime() << endl;
		cout << "Price for one day: " << Obj[i].GetCost() << endl;
		cout << "Price for the transport: " << Obj[i].GetTransport() << endl;
		cout << "Total price: " << Obj[i].GetTravelPrice(Obj[i]) << endl << endl;
	}
}

void ShowDataB(BusTour Obj[], int amount)
{
	for (int i = 0; i < amount; i++)
	{
		cout << "---------------------------------------------" << endl;
		cout << "Place: " << Obj[i].GetPlace() << endl;
		cout << "Duration (in country): " << Obj[i].GetTime() << endl;
		cout << "Duration (in abroad): " << Obj[i].GetTimeOut() << endl;
		cout << "Price for one day (in country): " << Obj[i].GetCostUAH() << endl;
		cout << "Price for one day (abroad): " << Obj[i].GetCost() << endl;
		cout << "Total price: " << Obj[i].GetTravelPrice(Obj[i]) << endl << endl;
	}
}


void Sort(RestIn Obj[], int amount)
{
	RestIn tmp;
	for (int i = 1; i < amount; i++)
	{
		for (int j = i; j > 0 && Obj[j - 1].GetTravelPrice(Obj[i]) > Obj[j].GetTravelPrice(Obj[i]); j--)
		{
			tmp = Obj[j];
			Obj[j] = Obj[j - 1];
			Obj[j - 1] = tmp;
		}
	}
}
