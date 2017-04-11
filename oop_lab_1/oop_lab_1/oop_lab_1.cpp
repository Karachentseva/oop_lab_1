// oop_lab_1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Parallelogram.h"
#include <iostream>
using namespace std;

void parallelogram::get(int n)
{
		cout << "Введите первую сторону паралелограмма: " << endl;
		cin >> first_side;
		cout << "Введите вторую сторону паралелограмма: " << endl;
		cin >> second_side;
		cout << "Введите угол между ними:" << endl;
		cin >> angle;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int i,n;
	cout << "Введите количество фигур:"<<endl;
	cin >> n;
	parallelogram *par=new parallelogram[n];
	for (int i = 0; i < n; i++)
	{
		par[i].get(n);
		cout << endl;
	}
	cout << "Выберите фигуру с которой будут произведены операции:" << endl;
	cin >> n;
	n -= 1;
	cout << "Выберете желаемую операцию: " << endl;
	while (true)
	{
		cout << "Изменение размера первой стороны- нажмите 1 " << endl;
		cout << "Изменение размера второй стороны- нажмите 2 " << endl;
		cout << "Нахождение периметра-нажмите 3 " << endl;
		cout << "Нахождение площади- нажмите 4" << endl;
		cout << "Нахождение высоты, проведенной к первой стороне-нажмите 5" << endl;
		cout << "Нахождение высоты, проведенной к второй стороне-нажмите 6" << endl;
		cout << "Нахождение большей диагонали-нажмите 7 " << endl;
		cout << "Нахождение меньшей диагонали-нажмите 8 " << endl;
		cin >> i;
		switch (i)
		{
		case 1:
		{
			double k;
			cout << "Введите коефициент изменения размера,меньше нуля- для уменьшения сторон, больше нуля- для увеличения: " << endl;
			cin >> k;
			cout << par[n].resizing_first_side(k);
			break;
		}
		case 2:
		{
			double k;
			cout << "Введите коефициент изменения размера,меньше нуля для уменьшения сторон, больше нуля для увеличения: " << endl;
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



