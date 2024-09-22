#include <iostream>
using namespace std;
main(){
	cout<<"Enter the size of the fertilizer bag in pounds:";
	int size;
	cin>>size;
	cout<<"Enter the cost of the bag:";
	int cost;
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag:";
	int area;
	cin>>area;
	int fertilizer_cost;
	fertilizer_cost=cost/size;
	int fertilizing_cost_per_square_feet;
	fertilizing_cost_per_square_feet=cost/area;
	cout<<"Cost of fertilizer per pound:" <<fertilizer_cost << endl;
	cout<<"Cost of fertilizing per square foot:" <<fertilizing_cost_per_square_feet;
      }
	