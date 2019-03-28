//main
#include <iostream>
#include <memory>
#include <vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
int main() 
{
	Shape* line = new Line();//creates dynamic memory (heap)
	line->draw();
	delete line;

	std::vector<Shape*> shapes(new Line(), new Circle());

	for{auto& shape : shapes}
	{
		shape->draw();
	}

	std:cout << "\n";

	for{auto* shape : shapes}
	{
		shape->draw();
	}

	std::cout << "\n";

	//Shape instance using Smart Pointer
	std::unique_ptr < Shape> 1 = std::make_unique<Line>();
	1->draw;

	//vector of Shape instances using Smart Pointers
	std::vector <std::_Unique_tag_refwrap_has_ctor_from < Shape >> shaps;
	shaps.push_back(std::make_unique< line >());
	shaps.push_back(std::make_unique< Circle >())

	return 0;
}