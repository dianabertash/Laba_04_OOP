#include <iostream>
#include "AdvertTV.h"
#include "Advert.h"
using namespace std;

void SortArray(AdvertTV** ad, int n);
int FullSum(AdvertTV** ad, int n);
void main()
{
	const int NumberOfAd = 4;
	AdvertTV **ad = new AdvertTV*[NumberOfAd];
	ad[0] = new AdvertTV("Ukraine", 2, 250, 5000);
	ad[1] = new AdvertTV("BBC", 1, 150, 10000);
	ad[2] = new AdvertTV("1+1", 1, 200, 8000);
	ad[3] = new AdvertTV("M1", 3, 50, 4000);
	int fullprice[4];
	int newfullprice[4];
	cout << "[Price per week]" << endl;
	for (int i = 0; i < 4; i++)
	{
		fullprice[i] = ad[i]->FullPrice();
		cout << ad[i]->GetChannel() << ":" << fullprice[i] << endl;
	}
	cout << "FullSum:" << FullSum(ad, NumberOfAd) << endl;
	SortArray(ad, NumberOfAd);
	cout << "Fraction array after sorting: " << endl;
	for (int i = 0; i < NumberOfAd; i++)
	{
		newfullprice[i] = ad[i]->FullPrice();
		cout << ad[i]->GetChannel() << ":" << newfullprice[i] << endl;
	}

	for (int i = 0; i < NumberOfAd; i++)
	{
		newfullprice[i] = ad[i]->FullPrice();
		cout << ad[i]->GetChannel() << ":" << newfullprice[i] << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		delete ad[i];
	}
	delete[] ad;

	system("pause");
}

int FullSum(AdvertTV** ad, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		k+= ad[i]->FullPrice();
	}
	return k;
}

void SortArray(AdvertTV** ad, int n)
{
	AdvertTV *temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < (n - 1 - i); j++)
		{
			if (ad[j]->FullPrice() > ad[j + 1]->FullPrice())
			{
				temp = ad[j];
				ad[j] = ad[j + 1];
				ad[j + 1] = temp;
			}
		}
	}
}