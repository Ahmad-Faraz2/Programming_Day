#include <iostream>
using namespace std;
main(){
	cout<<"Enter vegetable price per kilogram (in coins):";
	float veg_price;
	cin>>veg_price;
	cout<<"Enter fruit price per kilogram (in coins):";
	float fruit_price;
	cin>>fruit_price;
	cout<<"Enter total kilogram of vegetables:";
	int total_veg;
	cin>>total_veg;
	cout<<"Enter total kilograms of fruits:";
	int total_fruits;
	cin>>total_fruits;
	float total_earn;
	total_earn=((veg_price*total_veg)+(fruit_price*total_fruits))/1.94;
	cout<<"Total earning in rupees:" <<total_earn;
      }
	