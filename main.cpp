#include <iostream>
#include "T.h"

using namespace std;
int main()
{
	int frequency, money, num;
	Tran t;
	cout << "請輸入搭乘次數:";
	cin >> frequency;
	cout << endl;
	if (frequency == 0)
	{
		cout << "搭乘0次，金額為0";
	}
	else
	{
		for (int i = 0; i < frequency; i++)
		{
			cout << "請選擇搭乘工具:" << endl << "1.MRT 2.Ubike 3.BUS" << endl;
			cin >> num;
			cout << "請輸入金額:" << endl;
			cin >> money;
			if (i == 0)
			{
				t = Tran(i, money, num);
			}
			else
			{
				t.addFreq();
				t.addMoney(money);
				t.discount(num);
			}
		}
		cout<< "搭乘"<<t.retFreq()<< "次，金額為"<<t.retMoney()<< "，優惠為"<<t.retNum2();
	}
}
