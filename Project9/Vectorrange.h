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
	virtual double size() { return 0; }
	virtual double way1() { return 0; }
	virtual double way2() { return 0; }
};

class Size :public Vectorrange
{
private:
	int x, y, z;
	int xx, yy, zz;
	int a = pow(xx + x, 2);
	int b = pow(yy + y, 2);
	int c = pow(zz + z, 2);
public:
	Size(int x0, int y0, int z0, int x1, int y1, int z1) : x(x0), y(y0), z(z0), xx(x1), yy(y1), zz(z1) {}
	virtual double size()
	{
		return abs(sqrt(a + b + c));
	}
};

class Way :public Vectorrange
{
private:
	int x, y, z;
	int xx, yy, zz;
	int a = pow(x, 2) + pow(y, 2);
	int b = pow(xx, 2) + pow(yy, 2);
	int c = pow(z, 2) + pow(y, 2);
	int d = pow(zz, 2) + pow(yy, 2);
public:
	Way(int x0, int y0, int z0, int x1, int y1, int z1) : x(x0), y(y0), z(z0), xx(x1), yy(y1), zz(z1) {}
	virtual double way1()
	{
		return acos(-1) * (x * xx + y * yy) / (a * b);
	}
	virtual double way2()
	{
		return acos(-1) * (z * zz + y * yy) / (c * d);
	}
};


int main()
{
	Vectorrange* arr[2];

	arr[0] = new Size(0, 1, 0, 0, 1, 0);// 순서대로 점1의 x,y,z 좌표 , 점2의 x,y,z 좌표 
	arr[1] = new Way(0, 1, 0, 0, 1, 0);// 순서대로 점1의 x,y,z 좌표 , 점2의 x,y,z 좌표 두 배열의 입력된 좌표 값이 같게 해야 됩니다.

	for (int i = 0; i < 2; i++)
	{
		arr[0]->draw();
		{
			cout << "벡터의 크기는 : " << arr[0]->size() << endl;
		}
		arr[1]->draw();
		{
			cout << "벡터의 방향은" << endl << "x, y 평면에서 " << arr[1]->way1() << "도" << endl;
			cout << "y, z 평면에서 " << arr[1]->way2() << "도 만큼 입니다." << endl;
		}
		break;
	}
	return 0;
}