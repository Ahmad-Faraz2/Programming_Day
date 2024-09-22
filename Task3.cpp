#include <iostream>
using namespace std;
main(){
	cout<<"Enter initial velocity(m/s):";
	int Vi;
        cin>>Vi;
        cout<<"Enter Acceleration(m/s^2:";
	int a;
	cin>>a;
	cout<<"Enter Time(s):";
	int t;
	cin>>t;
	int Vf;
	Vf=Vi+(a*t);
	cout<<"Final velocity(m/s): " <<Vf ;
      }