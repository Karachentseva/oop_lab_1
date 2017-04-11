#include "stdafx.h"
#include "Parallelogram.h"
#include <math.h>
#include <iostream>
using namespace std;

double parallelogram::resizing_first_side(double k)
{
	first_side=first_side*k;
	return first_side;
}
double parallelogram::resizing_second_side(double k)
{
	second_side = second_side*k;
	return second_side;
}
double parallelogram::perimetr()
{
	 double p = (2 * (first_side + second_side));
	return p;
}
double parallelogram::area()
{
	double a = abs(first_side*second_side*sin(angle));
	return a;
}
double parallelogram::first_height()
{
	double h = abs(second_side*sin(angle));
	return h;
}
double parallelogram::second_height()
{
	double h = abs(first_side*sin(angle));
	return h;
}
double parallelogram::first_diagonal()
{
	double d = abs(sqrt(first_side*first_side + second_side*second_side - 2 * second_side*first_side*cos(angle)));
	return d;
}
double parallelogram::second_diagonal()
{
	double d = abs(sqrt(first_side*first_side + second_side*second_side + 2 * second_side*first_side*cos(angle)));
	return d;
}