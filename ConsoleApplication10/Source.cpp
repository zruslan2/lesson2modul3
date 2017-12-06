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
	case 3:
	{
		cout << "3. \n";
		/*3.	Ввести с экрана число от 1 до 12. По номеру месяца выдать сообщение о времени года.
		Если пользователь введет недопустимое число, программа должна выдать сообщение об ошибке*/
		unsigned short int mes;
		MES:
		cout << "Введите номер месяца \n";
		cin >> mes;
		if ((mes == 1) || (mes == 2) || (mes == 12))
		{
			cout << mes << " это зимний месяц \n";
			goto start;
		}
		else if ((mes == 3) || (mes == 4) || (mes == 5))
		{
			cout << mes << " это весений месяц \n";
			goto start;
		}
		else if ((mes == 6) || (mes == 7) || (mes == 8))
		{
			cout << mes << " это летний месяц \n";
			goto start;
		}
		else if ((mes == 9) || (mes == 10) || (mes == 11))
		{
			cout << mes << " это осений месяц \n";
			goto start;
		}
		else
		{
			cout << "Введите правильно номер месяца. В году их 12 (от 1 до 12) \n";
			goto MES;
		}

	}
	break;
	case 4:
	{
		cout << "4. \n";
		//4.	Даны три числа a, b, c.Определить, имеется ли среди них хотя бы одна пара равных
		int a, b, c;
		cout << "Введите первое число \n";
		cin >> a;
		cout << "Введите второе число \n";
		cin >> b;
		cout << "Введите третье число \n";
		cin >> c;
		if ((a == b) || (a == c) || (b == c))
		{
			cout << "Среди них имеется пара равных \n";
			goto start;
		}
		else
		{
			cout << "Среди них нет пары равных \n";
			goto start;
		}
	}
	break;
	case 5:
	{
		cout << "5. \n";
		/*5.	Написать программу для определения времени суток по данному текущему времени и вывести сообщение
		(утро – с 6 до 12, день – с 12 до 18, вечер – с 18 до 24, ночь – с 0 до 6).*/
		int ch;
		CH:
		cout << "Введите время \n";
		cin >> ch;
		if (ch > 6 && ch <= 12)
		{
			cout << "Утро \n";
			goto start;
		}
		else if(ch>12&&ch<=18)
		{
			cout << "День \n";
			goto start;
		}
		else if (ch>18 && ch<=24)
		{
			cout << "Вечер \n";
			goto start;
		}
		else if (ch>0 && ch<=6)
		{
			cout << "Ночь \n";
			goto start;
		}
		else
		{
			cout << "Введите правильно время \n";
			goto CH;
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