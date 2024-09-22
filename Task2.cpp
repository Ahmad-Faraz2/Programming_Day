#include <iostream>
using namespace std;
main(){
	cout<<"Number of Minutes:";
	int Minutes;
	cin>>Minutes;
	cout<<"Frames per second:";
	int fps;
	cin>>fps;
	int total;
	total=fps*Minutes*60;
	cout<<"Total number of frames: " <<total;
      }