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
	case 3:
	{
		cout << "3. \n";
		/*3.	������ � ������ ����� �� 1 �� 12. �� ������ ������ ������ ��������� � ������� ����.
		���� ������������ ������ ������������ �����, ��������� ������ ������ ��������� �� ������*/
		unsigned short int mes;
		MES:
		cout << "������� ����� ������ \n";
		cin >> mes;
		if ((mes == 1) || (mes == 2) || (mes == 12))
		{
			cout << mes << " ��� ������ ����� \n";
			goto start;
		}
		else if ((mes == 3) || (mes == 4) || (mes == 5))
		{
			cout << mes << " ��� ������� ����� \n";
			goto start;
		}
		else if ((mes == 6) || (mes == 7) || (mes == 8))
		{
			cout << mes << " ��� ������ ����� \n";
			goto start;
		}
		else if ((mes == 9) || (mes == 10) || (mes == 11))
		{
			cout << mes << " ��� ������ ����� \n";
			goto start;
		}
		else
		{
			cout << "������� ��������� ����� ������. � ���� �� 12 (�� 1 �� 12) \n";
			goto MES;
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