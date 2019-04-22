#define _CRT_SECURE_NO_WARNINGS
#include "Advert.h"
#include <iostream>
#include <string.h>

Advert::Advert()
{
}
Advert::Advert(char* n, char* c) 
{
	strcpy(this->name, n);
	strcpy(this->customer, c);
}
Advert::~Advert()
{
}

void Advert::SetName(char* n)
{
	strcpy(this->name, n);
}

void Advert::SetCustomer(char* c)
{
	strcpy(this->customer, c);
}

const char* Advert::GetName() const
{
	return name;
}

const char* Advert::GetCustomer() const
{
	return customer;
}
