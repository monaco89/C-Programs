//
//  main.cpp
//  BMR
//
//  Created by Nick Monaco on 2/19/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int weight, height, age, sex;
    double BMR;
    cout<<"Enter weight(pounds): ";
    cin>>weight;
    cout<<"Enter height(inches): ";
    cin>>height;
    cout<<"Enter age(years): ";
    cin>>age;
    cout<<"male(M) or female(F): ";
    cin>>sex;
    
    switch (sex)
    {
        case 'M': 
            BMR= 655+(4.3*weight)+(4.7*height)-(4.7*age);
            break;
        case 'F':
            BMR= 65+(6.3*weight)+(12.9*height)-(6.8*age);
            break;
        default:
            cout<<"wrong character";
            
    }
}
