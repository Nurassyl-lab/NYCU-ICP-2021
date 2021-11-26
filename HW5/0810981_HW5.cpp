#include <iostream>

using namespace std;

int main(){
	int address;
	int sum;
	for(int i = 1; i<=9; i++)
		for(int j = 1; j <= 9; j++)
			for(int k = 1; k <= 9; k++)
				for(int l = 1; l <= 9; l++){
					sum = i + j + k + l;
					if(sum == 27 && (j*3) == l) address = (1000*i)+(100*j)+(10*k)+l;
				}
	cout<<"The address is "<<address<<" Pennsylvania Avenue"<<endl;
	return 0;
}
