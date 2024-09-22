#include <iostream>
using namespace std;
main() { 
	 int n, width, height, walls;

         cout << "Enter paint amount (square meters): ";
         cin >> n;
         cout << "Width of the single wall (in meters): ";
         cin >> width;
         cout << "Height of the single wall (in meters): ";
         cin >> height;

         walls= n/(width*height);
         cout << "Number of walls you can paint " << walls;
       }

