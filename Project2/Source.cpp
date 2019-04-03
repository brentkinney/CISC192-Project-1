// this program calculates the cost of filling a pool
#include <iostream>
using namespace std;

int main()
{
	double width, length, depth, volume, cost, waterNeeded;

	//get the width of the pool
	cout << "What is the width of the pool? ";
	cin >> width;

	//get the length of the pool
	cout << "What is the length of the pool? ";
	cin >> length;

	//get the depth of the pool
	cout << "What is the depth of the pool? ";
	cin >> depth;

	//Display the given measurements
	cout << "The pool dimensions given are: " << width << "w " << length << "l and " << depth << "d" << endl;

	//calculate the volume and display it
	volume = width * length * depth;
	cout << "The Volume of the pool is " << volume << " cubic feet" << endl;

	//calculate the water needed to fill the pool and display it
	waterNeeded = (width - 0.25) * (length - 0.25) * (depth - 0.25);
	cout << "The water needed to fill the pool is " << waterNeeded << " cubic feet" << endl;

	//calculate the cost and display it
	cost = (waterNeeded * 0.77) + 100.00;
	double round1 = round(cost * 100) / 100;
	cout << "The cost to fill the pool is $" << round1 << endl;

	cout << "Programmed by Brent Kinney" << endl;

	cout << "Press [Enter] key to end..."; //prompt lets user know
	cin.ignore(256, '\n');
	cin.get();

	return 0;

}