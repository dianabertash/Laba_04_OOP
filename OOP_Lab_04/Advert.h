#pragma once
#define N 20

class Advert
{
private:
	char name[N];
	char customer[N];
public:
	Advert();
	Advert(char* n, char* c);
	~Advert();
	void SetName(char* n);
	void SetCustomer(char* c);
	const char* GetName() const;
	const char* GetCustomer() const;
};

