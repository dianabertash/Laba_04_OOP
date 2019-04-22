#define _CRT_SECURE_NO_WARNINGS
#include "AdvertTV.h"
#include <iostream>

AdvertTV::AdvertTV()
{
}

AdvertTV::AdvertTV(const char*ch, int t, int n, int c)
{
	strcpy(this->channel , ch);
	this->time = t;
	this->number = n;
	this->cost = c;
}

AdvertTV::~AdvertTV()
{
}

void AdvertTV::SetChannel(char* ch)
{
	strcpy(this->channel, ch);
}

void AdvertTV::SetTime(int t)
{
	this->time=t;
}

void AdvertTV::SetNumber(int n)
{
	this->number = n;
}

void AdvertTV::SetCost(int c)
{
	this->cost = c;
}

const char* AdvertTV::GetChannel() const
{
	return channel;
}

int AdvertTV::GetTime() const
{
	return time;
}

int AdvertTV::GetNumber() const
{
	return number;
}

int AdvertTV::GetCost() const
{
	return cost;
}

double AdvertTV::FullPrice()
{
	return this->time * this->number * this->cost;
}
