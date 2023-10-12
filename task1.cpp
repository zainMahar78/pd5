#include<iostream>
using namespace std;
double PyramidVolume(float l, float w, float h, string output);
main()
{
	double l, w, h;
	string unit;
	cout << "Enter the length of the pyramid (in meters): ";
	cin >> l;
	cout << "Enter the width of pyramid (in meters): ";
	cin >> w;
	cout << "Enter the height of the pyramid (in meters): ";
	cin >> h;
	cout << "Enter the desirsd output unit (millimeters, centimeters, meters, kilometers): ";
	string output;
	cin >> output;
	if (output == "meters")
	{
		unit = "metercube";
	}
	if (output == "millimeters")
	{
		unit = "cubic millimeter";
	}
	if (output == "kilometers")
	{
		unit = "cubic kilometer";
	}
	if (output == "centimeters")
	{
		unit = "cubic centimeter";
	}
	double result;
	result = PyramidVolume(l, w, h, output);
	cout << "The volume of the pyramid is: " << to_string(result) <<  "  "<<unit;
}

double PyramidVolume(float l, float w, float h, string output)
{
	double volume;
	if (output == "meters")
	{
		volume = l * w * h;
		return volume;
	}
	if (output == "millimeters")
	{
		volume = l * w * h * 1000;
		return volume;
	}
	if (output == "centimeters")
	{
		volume = l * w * h * 100;
		return volume;
	}
	if (output == "kilometers")
	{
		volume = (l * w * h) / 1000;
		return volume;
	}
	return 0.0;
}