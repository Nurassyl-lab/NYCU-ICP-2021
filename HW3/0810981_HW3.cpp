#include <iostream>

using namespace std;

int main(){
	char c = 'y';
	int i = 1;
	do{
		int max;
		int att;
		cout<<"Maximum room capacity for meeting "<<i<<": ";
		cin>>max;
		cout<<"Number of people attending the meeting "<<i++<<": ";
		cin>>att;
		if(att > max){
			cout<<"The amount of people exceeds maximum room capacity, \naccording to fire regulations this meeting cannot be held!"<<endl;
		}
		cout<<"continue? (y|n)";
		cin>>c;
		cout<<endl;
	}while(c == 'y' || c == 'Y');
}
