#include "T.h"

Tran::Tran()
{
	setFreq(0);
	setMoney(0);
	setNum(0);
}
Tran::Tran(int f, int m ,int n)
{
	setFreq(f);
	setMoney(m);
	setNum(n);
}
void Tran::setFreq(int f)
{
	freq = f;
}
void Tran::setMoney(int m)
{
	money = m;
}
void Tran::setNum(int n)
{
	num = n;
	num2 = 0;
}
void Tran::addFreq()
{
	freq += 1;
}
void Tran::addMoney(int m)
{
	money += m;
}
void Tran::discount(int n)
{
	if (num != n)
	{
		if (num != 2)
		{
			if (n == 2)
			{
				money -= 5;
				num2 += 5;
			}
			else
			{
				money -= 7;
				num2 += 7;
			}
		}
		else
		{
			money -= 5;
			num2 += 5;
		}
	}
	num = n;
}
int Tran::retFreq()
{
	return freq;
}
int Tran::retMoney()
{
	return money;
}
int Tran::retNum2()
{
	return num2;
}
