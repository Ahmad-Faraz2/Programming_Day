#include <iostream>
using namespace std;
main(){
	cout<<"Enter Imposter count:";
	float imposter;
	cin>>imposter;
	cout<<"Enter player count:";
	float player;
	cin>>player;
	int chance;
	chance=100*(imposter/player);
	cout<<"Chance of being an Imposter:" <<chance<<"%";
      }