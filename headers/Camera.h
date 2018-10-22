#include "Definitions.h"
#include "Pixel.h"
#include "ColorDbl.h"
#include "Scene.h"
#include <array>
#include <fstream>

const int WIDTH = 800;
const int HEIGHT = 800;

class Camera {
public:
	Camera(bool useEyePoint1 = true);
	~Camera() {
		delete [] _pixelArray;
	}
	
	ColorDbl trace(const Direction &rayorig, const Direction &raydir,const std::vector<Triangle> &triangles,const int &depth);
	void render(Scene&);
	void createImage(Scene&);
	void imageToFile();

	Pixel *_pixelArray = new Pixel[WIDTH * HEIGHT];
	Pixel *_pixelBuffer = _pixelArray;

private: 
	double clamp(double v, double lo, double hi);
	bool _useEyePoint1;
	Vertex _eyePoint;
	

};