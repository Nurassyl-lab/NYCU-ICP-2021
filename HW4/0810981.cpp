//Introduction to computers and programming
//Homework 4
//student id : 0810981
//
//I hope you will read my code :)
//It should be fun to read, especially the "switch()" part

#include <iostream>
#include <string>//included to store the name of signs 

using namespace std;

//structure for signs
struct sign{
	string s;//sign name
	int start;//day when sign starts 
	int maxDay;//maximum days in the month

	//constructor
	sign(string str, int a, int b){
		s = str;
		start = a;
		maxDay = b;
	}
};

int main(){
	//easier to use array of structures to store information about signs
	sign array[] ={
			sign("Aquarius", 20, 31),//1
			sign("Pisces", 19, 28),//2
			sign("Aries", 21, 31),//3
			sign("Taurus", 20, 30),//4
			sign("Gemini", 21, 31),//5
			sign("Cancer", 22, 30),//6
			sign("Leo", 23, 31),//7
			sign("Virgo", 23, 31),//8
			sign("Libra", 23, 30),//9
			sign("Scorpio", 23, 31),//10
			sign("Sagittarius", 22, 30),//11
			sign("Capricorn", 22, 31)//12
			};
	char c = 'y';
	while(c == 'y'){

		int m, d, y;//month, day, year

		cout<<"Enter day, month, and year! [MM/DD/YY]"<<endl;
		
		cin>>d>>m>>y;

		//here I'm checking if it is a leap year or not
		//deciding whether February has 28 or 29 days
		//since I don't know how you're gonna test HW, I included these "if else" statements
		if(y % 4 != 0)	array[2].maxDay = 28;
		else if(y % 4 == 0){
			if(y % 100 != 0) array[2].maxDay = 29;
			else array[2].maxDay = 28;
		}
		
		if(m < 1 || m > 12){
			cerr<<"Error! Wrong Month..."<<endl;
			exit(0);
		}
		if(d < 1 || d > array[m].maxDay){
			cerr<<"Error! Wrong Day..."<<endl;
			exit(0);
		}

		//for array reduce 'm' by 1, since array starts at index 0
		m -= 1;

		//I could have avoid using switch loop :)
		switch(m){
			case -1:{//fun
				cout<<"If this message was printed, something is wrong with this universe!"<<endl;
				cout<<"RUN! LEAVE! HIDE!"<<endl;
				cout<<"Just kidding! If the universe is wrong, then there is no place to escape!"<<endl;
				bool t = true;
				//infinite while loop XD
				//for fun
				//hope if you read my code you laugh a lot 
				//probably you have a lot of homeworks to check
				//at least mine will be fun to read
				//Happy Halloween!
				while(t){
					cout<<"AAAAA!"<<endl;//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
				}
				break;
			}

			default:{//not fun
				if(d >= array[m].start) cout<<array[m].s<<endl;//if d is bigger or equal to the sign starting day, 
				                                              //then output this sign
				else if (m - 1 == -1) cout<<array[11].s<<endl;//if d is smaller than the day when this sign starts,
			       							//output previous sign
				else cout<<array[m-1].s<<endl;
				break;
				}
		}

		cout<<"\nDo you want to continue? [y|n]"<<endl;
		cin>>c;
		cout<<endl;
	}

	cout<<"\nFinished successfully..."<<endl;
	return 0;
}
