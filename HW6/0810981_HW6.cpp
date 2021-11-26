#include <iostream>
#include <cmath>
using namespace std;

double BMP(double P){
	return(70.0 * pow((P/2.2), 0.756));
}

double PA(double P, double intense, double min){
	return(0.0385 * intense * P * min);
}

double digestEnergy(double totalCalConsumed){
	return(totalCalConsumed * 0.1);
}

int main(){
	double P;
	double intense;
	double min;
	double totCalsCons;
	char c = 'y';
	while(c == 'y'){
		cout<<"Weight: ";
		cin>>P;
		cout<<"Intensity: ";
		cin>>intense;
		cout<<"Minutes: ";
		cin>>min;
		cout<<"Calories: ";
		cin>>totCalsCons;

		double req = (BMP(P) + PA(P, intense, min));//calculate energy required without eating
		double additional = digestEnergy(req);//calculate energy required to digest this amount of calories

		cout<<"You need to eat "<<(req + additional) / totCalsCons<<" servings a day"<<endl;

		cout<<"Do you want to calculate parameters again? (y|n)"<<endl;
		cin>>c;
	}
	return 0;
}
