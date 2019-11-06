//#pragma once  - you don't need to use 'ifndef' but some old compilers can't recognize
#ifndef BoXXXX_h  //like '#indef 123box_h', if you start name from number
#define BoXXXX_h  //other files cannot recognize.

//class declaration
class Box {
	int width, height;
	char fill;
public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};

#endif //if you use 'pragma once', you don't need this
