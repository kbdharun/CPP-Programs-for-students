/*Create a class called CarPark that has the members CarRegnno(int),
ChargePerHour(int) and ParkingDuration(float). Set the data and show
the charges and parked hours of a car based on CarRegnNo. Make two
member functions for setting and showing the data. Member function
should be called from other functions.*/

#include <iostream>
using namespace std;
class CarPark
{
    int CarRegNo;
    static int ChargePerHr;
    float ParkingDuration;
    public:
    CarPark()
    {
        CarRegNo = 0; 
        ChargePerHr = 0;
        ParkingDuration = 0;
    }
    ~CarPark();
    CarPark(int regno, float parktime)
    {
        CarRegNo = regno; 
        ParkingDuration = parktime;
    }     
    void showCharge() const
    {
        cout << "Charge Per Hr: "<<ChargePerHr<<endl;
        cout << "Parking duration(in hrs): "<<ParkingDuration<<endl;
        float totalc = ChargePerHr * ParkingDuration;
        cout << "Total Charge: Rs."<<totalc<<endl;
    }
};
int CarPark::ChargePerHr = 100;
int main()
{
    int regno;
    float parktime;
    cout << "Enter registration number of vehicle: ";
    cin >> regno ;
    cout << "Enter Parking duration:";
    cin >> parktime;
    CarPark c1(regno, parktime);
    c1.showCharge();
    return 0;
}
