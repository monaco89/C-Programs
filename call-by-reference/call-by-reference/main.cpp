//
//  main.cpp
//  call-by-reference
//
//  Created by Nick Monaco on 4/14/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;

int input();
int output(double meters, double centimeters);
int conversion(double feet, double inches);

double feet, inches, meters, centimeters;

int main()
{
    input();
    conversion(feet, inches);
    output(meters, centimeters);
    
    system("pause");
    return 0;
}

int input()
{
    cout<<"enter the feet: ";
    cin>>feet;
    cout<<"enter the inches: ";
    cin>>inches;
    
    return feet;
    return inches;
}

int conversion(double feet, double inches)
{
    meters = feet/3.2808;
    centimeters = inches/0.39370;
    
    return meters;
    return centimeters;
}

int output(double meters, double centimeters)
{
    cout<<"the length is "<<meters<<" meters "<<centimeters<<" centimeters"<<endl;
    
    return 0;
}