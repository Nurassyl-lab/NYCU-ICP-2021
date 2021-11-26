#include <iostream>
#include <assert.h>

using namespace std;

double discountPercentage(double p, double d){
	assert(d >= 0);
	p = p-((p*d)/100);
	assert(p > 0);
	return p;
}

int main(){
	double price, discount;
       	bool z;
	cin>>price>>discount>>z;

	if(z == false){
		price = discountPercentage(price, discount);
		cout<<price<<endl;
	}
	else if(z == true){
		assert(discount >= 0);
		price = price - discount;
		assert(price > 0);
		cout<<price<<endl;
	}	

	return 0;
}
