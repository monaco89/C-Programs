//
//  main.cpp
//  ascii codes
//
//  Created by Nick Monaco on 3/13/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char ascii = 'A';
    
    for (int i = 32; i <= 127; i++)
    {
        if (i % 16 ==0)
            cout << endl;
        cout << ascii << " ";
        ascii++;
       
    }
    
    return 0;
}