#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include "point.h"

namespace acc
{

	class Rectangle : public Shape
	{
	public:
		Rectangle(wxDC, dc, Point p, int w, int n,): Shape(dc), point(p).
			width(w), height(h) {}
		void draw() override;

	private:
		Point point;
		int width;
		int height;
	};
}

#endif // ! RECTANGLE_H