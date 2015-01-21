//
//  main.cpp
//  assigning grades
//
//  Created by Nick Monaco on 4/10/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    const int students= 10;
    int scores[students];
    char grade;
    
    for (int i = 0; i< students; i++)
    {
        cout<<"enter 10 scores: ";
        cin>>scores[i];
    }
    
    for (int j=0; j<students; j++)
    {
        if (scores[j]>=90)
        {
            grade = 'A';
        }
        else if (scores[j]>=80)
        {
            grade = 'B';
        }
        else if (scores[j]>=70)
        {
            grade = 'C';
        }
        else if (scores[j]>=60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
        cout<<"student "<<j<<" score is "<<scores[j]<<" and grade is: "<<grade<<endl;
            
    }
}
