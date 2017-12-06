#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
unsigned short int nz;


void main()
{
	setlocale(LC_ALL, "Rus");

start:
	cout << "Введите номер задания \n";
	cin >> nz;
	// Cредний уровень
	switch (nz)
	{
	case 1:
	{
		cout << "1. \n";
		/*1.	Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется 20 %
		скидка.Ввести продолжительность разговора и день недели(цифра от 1 до 7).*/
		int Sp, R, Cp = 2;
		unsigned short int Dn;
	DN:
		cout << "Введите номер дня недели \n";
		cin >> Dn;
		if (Dn < 1 || Dn>7)
		{
			cout << "В неделе 7 дней \n";
			goto DN;
		}
		else
		{
			cout << "Введите продолжительность переговоров \n";
			cin >> R;
			if ((Dn == 6) || (Dn == 7))
			{
				Cp = Cp - Cp*0.2;
				cout << "В это день предоставляется скидка на 20% \n";
			}
			Sp = R*Cp;
			cout << "Стоимость переговоров = " << Sp << endl;
			goto start;
		}
	}
	break;
	case 2:
	{
	
		cout << "2. \n";
		/*2.	Вычислить стоимость покупки с учетом скидки.Скидка 5 % предоставляется, 
		если сумма покупки превышает 500 тенге и 10 % , если больше 1000 тенге.*/
		double Sp;
		cout << "Введите стоимость покупки \n";
		cin >> Sp;
		if ((Sp > 500)&&(Sp<1000))
		{
			Sp = Sp - Sp*0.05;
			cout << "Вам предоставлена скидка 5%. Cтоимость покупки равна \n"<<Sp<<endl;
			goto start;
		}
		else if (Sp > 1000)
		{
			Sp = Sp - Sp*0.1;
			cout << "Вам предоставлена скидка 10%. Cтоимость покупки равна \n" << Sp << endl;
			goto start;
		}
		else
		{
			Sp = Sp;
			cout << "Cтоимость покупки равна \n" << Sp << endl;
			goto start;
		}

	}
	break;

	default:
	{
		cout << "Такого задания не существует \n";
		goto start;
	}
	break;
	}
}