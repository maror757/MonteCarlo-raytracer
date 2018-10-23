#ifndef COLORDBL_H
#define COLORDBL_H
#include "Definitions.h"

const int LAMBERTIAN = 0, SPECULAR = 1, LIGHTSOURCE = 2;

class ColorDbl {

public:
	ColorDbl(); //DEfault white
	ColorDbl(double r, double g, double b); 
	ColorDbl(double r, double g, double b, int surfType);
	~ColorDbl() = default;
	ColorDbl operator/(float x) { return ColorDbl(_r / x, _g / x, _b / x); }
	ColorDbl operator*(float x) { return ColorDbl(_r * x, _g * x, _b * x); }
	

	double _r, _g, _b;
	int _surfType = LAMBERTIAN;
private:
	
};

#endif //COLORDBL_H