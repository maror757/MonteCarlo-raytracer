#ifndef SCENE_H
#define SCENE_H

#include "Definitions.h"
#include "ColorDbl.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Light.h"

#include <vector>
#include <list>
class Scene {
public:
	Scene();
	~Scene() = default;

	void createScene();

	Direction CalculateSurfaceNormal(const Vertex &p1, const Vertex &p2, const Vertex &p3) const;
	float findIntersectedTriangle(Ray &arg);
	float findIntersectedSphere(Ray &arg, ColorDbl &clr);
	std::vector<Triangle> getTriangles();
	void addSphere(Sphere &s);
	void addTetra(const float xPos, const float width, const float height, const float depth);
	void importTriangles(std::vector<Triangle>);
	Light getLight() { return _light; }


		private:

	std::vector<Triangle> _triangleList;
	std::vector<Sphere> _sphereList;
	std::vector<Vertex> vertex_list;
	Light _light;

};

#endif //SCENE_H