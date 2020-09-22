#include <iostream>
#include <math.h>

using namespace std;

class PlatonicSolid{
public:
	double edge;
	virtual void getArea() = 0;
	virtual void getVolume() = 0;
};

class Tetrahedron :public PlatonicSolid
{
public:
	Tetrahedron() {

	}
	Tetrahedron(double e) {
		edge = e;
	}


	void getArea()
	{
		cout << "The area of Tetrahedron is "<< sqrt(3) * (edge*edge) << endl;
	}
	void getVolume()
	{
		cout << "The volume of Tetrahedron is " << (edge * edge *edge) / (6*(sqrt(2))) << endl;
	}
};

class Octahedron :public PlatonicSolid
{
public:
	Octahedron(double e){
		edge = e;
	}
	
	void getArea()
	{
		cout << "The area of Octahedron is " << 2*(sqrt(3)) * (edge * edge) << endl;
	}
	void getVolume()
	{
		cout << "The volume of Octahedron is " << (edge * edge * edge) * ((sqrt(2)/3)) << endl;
	}
};

class Icosahedron :public PlatonicSolid
{
public:
	Icosahedron(double e) {
		edge = e;
	}

	void getArea()
	{
		cout << "The area of Icosahedron is " << 5 * (sqrt(3)) * (edge * edge) << endl;
	}
	void getVolume()
	{
		cout << "The volume of Icosahedron is " << (edge * edge * edge) * (((sqrt(5)+3)*5 / 12)) << endl;
	}
};

class Cube :public PlatonicSolid
{
public:
	Cube() {

	}
	Cube(double e) {
		edge = e;
	}

	void getArea()
	{
		cout << "The area of Cube is " << (edge*edge*6) << endl;
	}
	void getVolume()
	{
		cout << "The volume of Cube is " << (edge * edge * edge) << endl;
	}
};

class Dodecahedron :public PlatonicSolid
{
public:
	Dodecahedron(double e) {
		edge = e;
	}

	void getArea()
	{
		cout << "The area of Dodecahedron is " << 3*(sqrt(25+10*(sqrt(5))))*(edge * edge) << endl;
	}
	void getVolume()
	{
		cout << "The volume of Dodecahedron is " << ((15+7*(sqrt(5)))/4)*(edge * edge * edge) << endl;
	}
};

class Parallelpiped : public Cube
{
public:
	double edge1, edge2, edge3;

	Parallelpiped(double e1, double e2, double e3) {
		
		edge1 = e1;
		edge2 = e2;
		edge3 = e3;

	}

	void getArea() {
		
		cout << "The area of a parallelopipe is " << 2 * (edge1 * edge2 + edge1 * edge3 + edge2 * edge3) << endl;
	}
	void getVolume() {
		cout << "The volume of a parallelopipe is " << edge1 * edge2 * edge3 << endl;
	}
};

class RightSquarePyramid : public Tetrahedron
{
public:
	double edge;
	double height;

	RightSquarePyramid(double e, double h) {
		edge = e;
		height = h;
	}
	
	void getArea() {
		cout << "The area of a right square pyramid is " << edge*edge + (2*edge)*(sqrt((edge*edge)/4+(height*height)))<< endl;
	}
	void getVolume() {
		cout << "The Volume of a right square pyramid is " << (edge * edge) * (height / 3) << endl;
	}
};
