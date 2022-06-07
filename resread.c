#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
    string BAND_COLOR_CODE[10] = { "black", "brown", "red", "orange",
                                   "yellow", "green", "blue", "violet",
                                   "grey", "white" };

    string MULTIPLIER_COLOR_CODE[12] = { "black", "brown", "red", "orange",
                                         "yellow", "green", "blue", "violet",
                                         "grey", "white", "gold", "silver" };

    string TOLERANCE_COLOR_CODE[4] = { "brown", "red", "gold", "silver" };
    
    int bandValues[10]={0,1,2,3,4,5,6,7,8,9};
    int multValues[12]={0,1,2,3,4,5,6,7,8,9,0.1,0.01};
    int tolValues[4]={1,2,5,10};

    string band1,band2,band3;  //band color choices
    string mult,tol;

    getBandColor(BAND_COLOR_CODE,band1,band2,band3);
    //getMultiplyerColor(MULTIPLYER);
    //getToleranceColor(TOLERANCE);

//    cout<<"This resistor has "<<bandColor;
    return 0;
}

void getBandColor(bandColor[],string a,string b,string c)
{
    cout<<"Enter a color for band 1: ";
    cin>>a;
    cout<<"Enter a color for band 2: ";
    cin>>b;
    cout<<"Enter a color for band 3: ";
    cin>>c;
}
