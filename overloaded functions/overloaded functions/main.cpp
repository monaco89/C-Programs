//
//  main.cpp
//  overloaded functions
//
//  Created by Nick Monaco on 4/14/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;

double max(double num1, double num2, double num3);
double largestNum;

int main()
{
    double num1, num2, num3;
    cout<<"enter a number: ";
    cin>>num1;
    cout<<"enter another number: ";
    cin>>num2;
    cout<<"enter another number: ";
    cin>>num3;
    
    largestNum = max(num1, num2, num3);
    
    cout<<"the largest number is: "<<largestNum<<endl;
    
    system("pause");
    return 0;
    
}

double max(double num1,  double num2,  double num3)
{
    double largerNum;
    
    if (num1>num2)
    {
        largerNum = num1;
    }
    else
    {
        largerNum = num2;
    }
    
    if (largerNum>num3)
    {
        largestNum = largerNum;
    }
    else
    {
        largestNum = num3;
    }
    
    return largestNum;
}
