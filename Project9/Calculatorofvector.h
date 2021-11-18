#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Vectorrange
{
protected:
	int x, y;
public:
	virtual void draw()
	{

	}

	void setorigin(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	virtual double 덧셈x() { return 0; }
	virtual double 덧셈y() { return 0; }
	virtual double 덧셈z() { return 0; }
	virtual double 뺄셈x() { return 0; }
	virtual double 뺄셈y() { return 0; }
	virtual double 뺄셈z() { return 0; }
	virtual double 내적() { return 0; }
	virtual double 외적() { return 0; }
};

class Calculator :public Vectorrange
{
private:
	int x, y, z;
	int xx, yy, zz;
	int a = 0;
	int b = 0;
	int c = 0;
public:
	Calculator(int x0, int y0, int z0, int x1, int y1, int z1) : x(x0), y(y0), z(z0), xx(x1), yy(y1), zz(z1) {}
	virtual double 덧셈x()
	{
		return x + xx;
	}
	virtual double 덧셈y()
	{
		return y + yy;
	}
	virtual double 덧셈z()
	{
		return z + zz;
	}
	virtual double 뺄셈x()
	{
		return x - xx;
	}
	virtual double 뺄셈y()
	{
		return y - yy;
	}
	virtual double 뺄셈z()
	{
		return z - zz;
	}
	virtual double 내적()
	{
		return x * xx + y * yy + z * zz;
	}
	virtual double 외적()
	{
		return (y * zz - z * yy) * (z * xx - x * zz) * (x * yy - y * xx);
	}
};

int main()
{
	{
		Vectorrange* arr[1];

		arr[0] = new Calculator(1, 1, 2, 4, 5, 6);// 순서대로 점1의 x,y,z 좌표 , 점2의 x,y,z 좌표 


		arr[0]->draw();
		{
			cout << "덧셈 :  " << arr[0]->덧셈x() << " i, " << arr[0]->덧셈y() << " j, " << arr[0]->덧셈z() << " k" << endl;
			cout << "뺄셈 :  " << arr[0]->뺄셈x() << " i, " << arr[0]->뺄셈y() << " j, " << arr[0]->뺄셈z() << " k" << endl;
			cout << "내적 :  " << arr[0]->내적() << endl;
			cout << "외적 :  " << arr[0]->외적() << endl;
		}

	}
	return 0;
}