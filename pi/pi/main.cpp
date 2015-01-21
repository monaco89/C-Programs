//
//  main.cpp
//  pi
//
//  Created by Nick Monaco on 3/13/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    
    double x=0.0;
    long double pi;
    int i;
    cout << " To how many terms?:";
    cin >> i;
    
    for (long int n = 2; n <= i; n++)
    {
        x += 1.0/(n*n);
    }
    pi =sqrt(4*(1+x));
    cout << " Estimated PI value to " << i << " terms: "<< pi;
    
    
}

