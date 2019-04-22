#pragma once
#include "Advert.h"
#define N 20
class AdvertTV : public Advert
{
private:
	char channel[N]; 
	int time; 
	int number; 
	int cost;
public:
	AdvertTV();
	AdvertTV(const char*ch, int t, int n, int c);
	~AdvertTV();
	void SetChannel(char* ch);
	void SetTime(int t);
	void SetNumber(int n);
	void SetCost(int c);
	const char* GetChannel() const;
	int GetTime() const;
	int GetNumber() const;
	int GetCost() const;
	double FullPrice();
};

