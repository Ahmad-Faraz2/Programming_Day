#include <iostream>
using namespace std;
main(){
	cout<<"Enter the name of the person:";
	string name;
	cin>>name;
	cout<<"Enter the target weight loss in Kilogram:";
	float weight_loss;
	cin>>weight_loss;
	float days;
	days=weight_loss*15;
	cout<< name << " will need " << days << " days to lose " << weight_loss <<" kg by following the doctor's suggestion";
      }