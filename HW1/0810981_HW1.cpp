#include <iostream>
using namespace std;

int main(){
	const float a = 32;
	float t, d;
	cout<<"Enter time in seconds: "<<endl;
	cin>>t;
	d = (a * (t * t)) / 2;
	cout<<"Distance = "<<d<<"(ft)"<<endl;
}
