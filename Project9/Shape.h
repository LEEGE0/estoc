#include <iostream>
#include <math.h>
using namespace std;
#define pie 3.14
#define e 2

class shape

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
	virtual void move(int x, int y) = 0;
	virtual double getarea() { return 0; }
	virtual double getround() { return 0; }
};

class triangle : public shape //이등변삼각형
{
private:
	int base, height;
public:
	triangle(int b, int h) : base(b), height(h) {}
	virtual double getarea()
	{
		return 0.5 * base * height;
	}
	virtual double getround()
	{
		int a = pow(base / 2, 2);
		int b = pow(height, 2);
		return base + e * sqrt(a + b);
	}
	void move(int x, int y)
	{
		base = x;
		height = y;
	}
	void draw()
	{
		cout << "삼각형의";
	};
};

class square : public shape//직사각형
{
private:
	int width, height;
public:
	square(int w, int h) : width(w), height(h) {}
	virtual double getarea()
	{
		return width * height;
	}
	virtual double getround()
	{
		return e * (width + height);
	}
	void setwidth(int w)
	{
		width = w;
	}
	void setheight(int h)
	{
		height = h;
	}
	void move(int x, int y)
	{
		width = x;
		height = y;
	}
	void draw()
	{
		cout << "사각형의";
	}
};

class circle : public shape //원
{
private:
	int r;
public:
	circle(int r) : r(r) {}
	virtual double getarea()
	{
		return pie * r * r;
	}
	virtual double getround()
	{
		return e * pie * r;
	}
	void move(int x, int y)
	{
		r = x;
		r = y;
	}
	void draw()
	{
		cout << "원의";
	}
};

int main()
{
	shape* shapearray[3];

	shapearray[0] = new triangle(12, 20);//삼각형 밑변 & 높이
	shapearray[1] = new square(4, 11);//사각형 밑변 & 높이
	shapearray[2] = new circle(pie);//원의 반지름

	for (int i = 0; i < 3; i++)
	{
		shapearray[i]->draw();
		cout << "넓이는 : " << shapearray[i]->getarea() << endl;

		shapearray[i]->draw();
		cout << "둘레는 : " << shapearray[i]->getround() << endl << endl;

	}
	return 0;
}