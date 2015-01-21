//
//  main.cpp
//  prime numbers
//
//  Created by Nick Monaco on 3/13/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    for (int i=2; i<100; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i))
            {
                cout<< i << " ";
                
            }
            
        }
    
    system("pause");
    return 0;
}
