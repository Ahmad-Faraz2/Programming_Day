#include <iostream>
using namespace std;
main(){
	cout<<"Enter the movie name:";
	string name;
	cin>>name;
	cout<<"Enter the adult ticket price:";
	int adult_ticket;
	cin>>adult_ticket;
	cout<<"Enter the child ticket price:";
	int child_ticket;
	cin>>child_ticket;
	cout<<"Enter the number of adult tickets sold:";
	int adult_no;
	cin>>adult_no;
	cout<<"Enter the number of child tickets sold:";
	int child_no;
	cin>>child_no;
	cout<<"Enter the percentage of the amount to be donated to charity:";
	float percentage;
	cin>>percentage;
	int total;
	total=(adult_ticket*adult_no)+(child_ticket*child_no);
	float donation;
	donation=total/percentage;
	int remains;
	remains=total-donation;
	cout<<"Movie:" << name << endl;
	cout<<"Total amount generated from ticket sales:" <<total << endl;
	cout<<"Donation to charity(10%):" <<donation << endl;
	cout<<"Remaining amount after donation:" <<remains;
      }
	