//
//  main.cpp
//  smallest element
//
//  Created by Nick Monaco on 4/10/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>

using namespace std;

int indexofSmallestElement(double array[10], int size);


int main()
{
    int index= 0;
    int size = 10;
    double array[10];
    
    for (int i = 0; i <= size; i++)
    {
        cout << "Enter an integer: ";
        cin >> array[i];
    }
    
    index = indexofSmallestElement(array, size);
    cout<<"the smallest element is: "<<index<<endl;
    system("pause");
    return 0;
}

int indexofSmallestElement(double array[], int size)
{
    int index = 0;
    
    if (size != 1)
    {
        
        int n = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] < n)
            {
                n = array[i];
                index = i;
            }
        }
    }
    return index;
}
