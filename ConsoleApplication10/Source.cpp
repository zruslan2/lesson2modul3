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
	cout << "������� ����� ������� \n";
	cin >> nz;
	// C������ �������
	switch (nz)
	{
	case 1:
	{
		cout << "1. \n";
		/*1.	�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20 %
		������.������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).*/
		int Sp, R, Cp = 2;
		unsigned short int Dn;
	DN:
		cout << "������� ����� ��� ������ \n";
		cin >> Dn;
		if (Dn < 1 || Dn>7)
		{
			cout << "� ������ 7 ���� \n";
			goto DN;
		}
		else
		{
			cout << "������� ����������������� ����������� \n";
			cin >> R;
			if ((Dn == 6) || (Dn == 7))
			{
				Cp = Cp - Cp*0.2;
				cout << "� ��� ���� ��������������� ������ �� 20% \n";
			}
			Sp = R*Cp;
			cout << "��������� ����������� = " << Sp << endl;
			goto start;
		}
	}
	break;
	case 2:
	{
	
		cout << "2. \n";
		/*2.	��������� ��������� ������� � ������ ������.������ 5 % ���������������, 
		���� ����� ������� ��������� 500 ����� � 10 % , ���� ������ 1000 �����.*/
		double Sp;
		cout << "������� ��������� ������� \n";
		cin >> Sp;
		if ((Sp > 500)&&(Sp<1000))
		{
			Sp = Sp - Sp*0.05;
			cout << "��� ������������� ������ 5%. C�������� ������� ����� \n"<<Sp<<endl;
			goto start;
		}
		else if (Sp > 1000)
		{
			Sp = Sp - Sp*0.1;
			cout << "��� ������������� ������ 10%. C�������� ������� ����� \n" << Sp << endl;
			goto start;
		}
		else
		{
			Sp = Sp;
			cout << "C�������� ������� ����� \n" << Sp << endl;
			goto start;
		}

	}
	break;

	default:
	{
		cout << "������ ������� �� ���������� \n";
		goto start;
	}
	break;
	}
}