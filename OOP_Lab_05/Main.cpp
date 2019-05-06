#include "Vacation.h"
#include "BusTour.h"
#include "RestIn.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void SetDataR(RestIn Obj[], const int amount);
void SetDataB(BusTour Obj[], const int amount);
void ShowDataR(RestIn Obj[], int amount);
void ShowDataB(BusTour Obj[], int amount);
void Sort(RestIn Obj[], int amount);

int main(void)
{
	const int size = 1;
	Vacation** List = new Vacation*[2*size];
	RestIn RList[size];
	BusTour BList[size];
	int i = 0;
	double sum = 0;
	SetDataR(RList, size);
	SetDataB(BList, size);
	for (i; i < size; i++)
	{
		List[i] = &RList[i];
	}
	for (i; i < 2 * size; i++)
	{
		List[i] = &BList[i];
	}
	ShowDataR(RList, size);
	ShowDataB(BList, size);
	system("pause");
	return 0;
}