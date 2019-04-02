// this program calculates the cost of filling a pool
#include <iostream>
using namespace std;

int main()
{
	double width, length, depth, volume, cost;

	//get the width of the pool
	cout << "What is the width of the pool? ";
	cin >> width;

	//get the length of the pool
	cout << "What is the length of the pool? ";
	cin >> length;

	//get the depth of the pool
	cout << "What is the depth of the pool? ";
	cin >> depth;

	//calculate the volume
	volume = width * length * depth;
	cout << "The Volume of the pool is " << volume << " cubic feet" << endl;


	cout << "Press [Enter] key to end..."; //prompt lets user know
	cin.ignore(256, '\n');
	cin.get();

	return 0;

}