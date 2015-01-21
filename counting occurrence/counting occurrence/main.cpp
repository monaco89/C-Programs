//
//  main.cpp
//  counting occurrence
//
//  Created by Nick Monaco on 4/10/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    
	double list[10];
	double integers[100];
	int numberOfIntegers = 1;
    
	cout<<"Enter some integers between 1 and 100: ";
    
	for (int i = 0; i < numberOfIntegers; i++)
	{
		cin>>list[i]; 
		numberOfIntegers++;
        
        for (int j = 0; j<10; j++)
        {
            if (list[i] = j)
                integers[j]++;
            else
                integers[j] = 0;
            
            for (int j = 0; j<10; j++)
            {
                
                if (integers[j] != 1 && integers[j] != 0)
                {
                    cout<< integers[i] << " occurs " << integers[j] << " times"<<endl;
                }
                else if (integers[j] == 1 && integers[j] != 0)
                {
                    cout<< integers[i] << " occurs 1 time"<<endl;
                }
            }
        }
	}
	system("pause");
	return 0;
}
