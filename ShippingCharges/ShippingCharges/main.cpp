//
//  main.cpp
//  ShippingCharges
//
//  Created by Nick Monaco on 2/19/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int weight, distance;
    double rate;
    cout<<"Enter weight of package (kilograms): ";
    cin>>weight;
    cout<<"Enter distance (miles): ";
    cin>>distance;
    
    if (distance<10)
    {
        cout<<"distance is too short"<<endl;
    }
    else if (distance>3000)
    {
        cout<<"distance is too long"<<endl;
    }
    
    if (weight<=2)
    {
        rate= 0.0022*distance;
        cout<<"the rate is: "<<rate<<endl;
    }
    else if (weight>2 && weight<=6)
    {
        rate = 0.0044*distance;
        cout<<"the rate is: "<<rate<<endl;
    }
    else if (weight>6 && weight<=10)
    {
        rate= 0.0074*distance;
        cout<<"the rate is: "<<rate<<endl;
    }
    else if (weight>10 && weight<=20)
    {
        rate= 0.0096*distance;
        cout<<"the rate is: "<<rate<<endl;
    }
    else if (weight<2)
    {
        cout<<"Under weight"<<endl;
    }
    else if (weight>20)
    {
        cout<<"Over weight"<<endl;
    }
}