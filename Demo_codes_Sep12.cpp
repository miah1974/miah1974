// Demo_codes_Sep12.cpp
// Example 3-1

#include <iostream>
using namespace std;

int a, b;
double z;
//char ch;
string ch;

int main()
{
	cout << "Statement 1" << endl;
	cin >> ch;
	cout << endl;
	cout << "ch = " << ch << endl;
	//
	//cout << "Statement 2" << endl;
	//cin >> ch;
	//cout << endl;
	//cout << "ch = " << ch << endl;
	//
	
	return 0;
}

//.................................................................
/*
// Examle 3-2
# include <iostream>
using namespace std;

int a;
double z;
char ch;

int main()
{
	cout << "Statement 1" << endl;
	cin >> a >> ch >> z;
	cout << "a = " << a << endl;
	cout << "ch = " << ch << endl;
	cout << "z = " << z << endl;
	//
	

	return 0;
}
//....................................................................
*/
// Example 3-4
//
//How to use predefined functions.
//This program uses the math functions pow and sqrt to determine
//and output the volume of a sphere, the distance between two
//points, respectively, and the string function length to find
//the number of characters in a string.
//If the radius of the sphere is r, then the volume of the sphere
//is (4/3)*PI*r^3. If (x1,y1) and (x2,y2) are the coordinates of two
//points in the XY-plane, then the distance between these points is
//sqrt((x2-x1)^2 + (y2-y1)^2).
//
/*
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
const double PI = 3.1416;

int main()
{
	double sphereRadius;
	double sphereVolume;
	double X1, Y1;
	double X2, Y2;
	double distance;
	
	string str;
	int str_length;
	
	cout << "Enter the radius of the sphere: ";
	cin >> sphereRadius;
	cout << endl;
	//
	sphereVolume = (4 / 3) * PI * pow(sphereRadius, 3);
	cout << "The volume of the sphere is: " << sphereVolume << endl;

	cout << "Enter the coordinates of two points in the X-Y plane: ";
	cin >> X1 >> Y1 >> X2 >> Y2;
	cout << endl;
	
	distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
	cout << "The distance between the two given points = " << distance << endl;

	str = "Programming with C++";
	str_length = str.length();
	cout << "The number of characters, including blanks = " << str_length << endl;


	return 0;
}
*/