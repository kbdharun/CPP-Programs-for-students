/* Write a program that calculates the average of up to 10 English
distances input by the user. Create an array of objects of the Distance
class with the data members as feet and inches to calculate the average
and create a member function called avgDistance(). (Hint: 12 inches = 1
Feet)*/

#include <iostream> 
using namespace std;
class Distance {
private:
	float feets;
	float inches;
public:
	Distance(){}
	~Distance(){}
	Distance(float feets){
		inches=12*feets;
	}
	float getInches(){
		return inches;
	}
};
float avgDistance(Distance distance[]){
	float total=0;
	for(int i=0;i<10;i++){
		total+=distance[i].getInches();
	}
	return total/10.0;
}
int main (){
	Distance distance[10];
	float feets;
	for(int i=0;i<10;i++){
		cout<<"Enter english distance "<<(i+1)<<" (in feet): ";
		cin>>feets;
		distance[i]=Distance(feets);
	}
	cout<<"\nThe average is: "<<avgDistance(distance)<< " inches\n\n";;
	return 0;
}
