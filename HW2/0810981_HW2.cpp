#include <iostream>

using namespace std;

//function that returns slope value (m)
double slope(double x1, double x2, double y1, double y2){
	return ((y2-y1)/(x2-x1));
}

//function that returns C value
double C(double m, double  x1, double y1){
	return (y1 - (m * x1));	
}

int main(){
	double x1, y1, x2, y2;

	cout<<"\nEnter value for x1: ";
	cin>>x1;
	cout<<"Enter value for y1: ";
	cin>>y1;
	cout<<"Enter value for x2: ";
	cin>>x2;
	cout<<"Enter value for y2: ";
	cin>>y2;
	
	double m = slope(x1, x2, y1, y2);
	
	cout<<"\n\nm = "<<m<<endl;
	
	double c = C(m, x1, y1);
	
	//just few if else statements to make the output look better
	//when the value of "m" or "c" is negative,
	//the value is being printed with parenthesis
	if (m < 0 && c < 0)
		cout<<"y = "<<"("<<m<<")"<<"*"<<"x"<<" + "<<"("<<c<<")"<<endl;
	else if (m > 0 && c < 0)
		cout<<"y = "<<m<<"*"<<"x"<<" + "<<"("<<c<<")"<<endl;
	else if (m < 0 && c > 0)
		cout<<"y = "<<"("<<m<<")"<<"*"<<"x"<<" + "<<c<<endl;
	else
		cout<<"y = "<<m<<"*"<<"x"<<" + "<<c<<endl;
}
