#pragma once
#ifndef parallelogram
#define arallelogram
struct parallelogram
{
	double first_side, second_side, angle;
	void get(int);
	double resizing_first_side(double);
	double resizing_second_side(double);
	double perimetr();
	double area();
	double first_diagonal();
	double second_diagonal();
	double first_height();
	double second_height();
};

#endif // !parallelogram
