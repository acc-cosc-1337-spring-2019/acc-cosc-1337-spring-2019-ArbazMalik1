#include "rectangle.h"

void acc::Rectangle::draw()
{
	device context->DrawRectangle(point.x, point.y, width, height);
}