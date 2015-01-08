/* 
 * File:   main.cpp
 * Author: Jose Roman
 *Created on January 8, 2015, 8:15 AM
 * Purpose:
 */

 //System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
 const char CONVPCT= 100;//Percent conversion 
 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    short custSrv=12467;//Customers Surveyed
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers
    //Calculate customers number requested 
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinker
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
    //Output
    cout<<"Customer surveyed that are Energy Drinkers = ";
    cout<<custE<<endl;
    cout<<"Customer surveyed that are Citrus Drinkers = ";
    cout<<custC<<endl;
    //Exit stage right
    
    return 0;
}
