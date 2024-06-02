#include "RectangleLec1.h"
#include <iostream>
using namespace std;
RectangleLec1::RectangleLec1() {
	width = height = 0;
}
RectangleLec1::RectangleLec1(int wdth, int heit) {
	width = wdth;
	height = heit;
}
int RectangleLec1::area() {
	return width * height;
}
RectangleLec1::~RectangleLec1(void) {
	cout << "end" << endl;
}




