/*Define a class named Movie. Include private fields for the title, year, and name of the director.
Include three public functions with the prototypes void Movie::setTitle(string);, void Movie::setYear(int);, 
and void setDirector(string);. Include anothervfunction that displays all the information about a Movie.
Write a main()function that declares a movie object named myFavoriteMovie. 
Set and display the objects fields.*/

#include<iostream>
using namespace std;

class Movie{
	private:
		string moviename;
		int year;
		string director;
	public:
		void setTitle(string x);
		void setYear(int x);
		void setDirector(string x);
		void Display();
};
void Movie::setTitle(string x){
	moviename = x;
}
void Movie::setYear(int x){
	year = x;
}
void Movie::setDirector(string x){
	director = x;
}
void Movie::Display(){
	cout<<"Movie Title: "<<moviename<<endl;	cout<<"Movie Released year: "<<year<<endl;
	cout<<"Director of the Movie: "<<director<<endl;
}
int main(){
	Movie m;
	cout<<"Enter the Movie name: ";
	string movie;
	cin>>movie;
  m.setTitle(movie);
	cout<<"\nEnter the Movie year: ";
	int year;
	cin>>year;
  m.setYear(year);
	cout<<"\nEnter the Director name: ";
	string name;
	cin>>name;
	cout<<endl;
  m.setDirector(name);
	m.Display();
}
