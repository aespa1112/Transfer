#ifndef T_H
#define T_H
class Tran
{
public:
	Tran();
	Tran(int, int, int);
	void setFreq(int);
	void setMoney(int);
	void setNum(int);
	void addFreq();
	void addMoney(int);
	void discount(int);
	int retFreq();
	int retMoney();
	int retNum2();

private:
	int freq, money, num, num2;
};
#endif
