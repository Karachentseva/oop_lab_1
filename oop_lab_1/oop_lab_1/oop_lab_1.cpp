// oop_lab_1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Parallelogram.h"
#include <iostream>
using namespace std;

void parallelogram::get(int n)
{
		cout << "������� ������ ������� ��������������: " << endl;
		cin >> first_side;
		cout << "������� ������ ������� ��������������: " << endl;
		cin >> second_side;
		cout << "������� ���� ����� ����:" << endl;
		cin >> angle;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int i,n;
	cout << "������� ���������� �����:"<<endl;
	cin >> n;
	parallelogram *par=new parallelogram[n];
	for (int i = 0; i < n; i++)
	{
		par[i].get(n);
		cout << endl;
	}
	cout << "�������� ������ � ������� ����� ����������� ��������:" << endl;
	cin >> n;
	n -= 1;
	cout << "�������� �������� ��������: " << endl;
	while (true)
	{
		cout << "��������� ������� ������ �������- ������� 1 " << endl;
		cout << "��������� ������� ������ �������- ������� 2 " << endl;
		cout << "���������� ���������-������� 3 " << endl;
		cout << "���������� �������- ������� 4" << endl;
		cout << "���������� ������, ����������� � ������ �������-������� 5" << endl;
		cout << "���������� ������, ����������� � ������ �������-������� 6" << endl;
		cout << "���������� ������� ���������-������� 7 " << endl;
		cout << "���������� ������� ���������-������� 8 " << endl;
		cin >> i;
		switch (i)
		{
		case 1:
		{
			double k;
			cout << "������� ���������� ��������� �������,������ ����- ��� ���������� ������, ������ ����- ��� ����������: " << endl;
			cin >> k;
			cout << par[n].resizing_first_side(k);
			break;
		}
		case 2:
		{
			double k;
			cout << "������� ���������� ��������� �������,������ ���� ��� ���������� ������, ������ ���� ��� ����������: " << endl;
			cin >> k;
			cout << par[n].resizing_second_side(k);
			break;
		}
		case 3:
		{
			cout << par[n].perimetr() << endl;
			break;
		}
		case 4:
		{
			cout << par[n].area() << endl;
			break;
		}
		case 5:
		{
			cout << par[n].first_height() << endl;
			break;
		}
		case 6:
		{
			cout << par[n].second_height() << endl;
			break;
		}
		case 7:
		{
			cout << par[n].first_diagonal() << endl;
			break;
		}
		case 8:
		{
			cout << par[n].second_diagonal() << endl;
			break;
		}
		case 9:
		{
			break;
		}
		
		}
system("pause");
	}
}



