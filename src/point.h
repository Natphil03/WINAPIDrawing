#pragma once
class point
{
public:
	point();
	point(short x, short y);
	point(short x, short y, bool startofnewline);
	point(const point& p);

	short getX() const;
	void setX(const short x);
	short getY() const;
	void setY(const short y);
	bool isStartOfLine();

	point& operator= (const point& other);
	bool operator== (const point& rhs) const;

private:
	short _x;
	short _y;
	bool _startofnewline;
};

