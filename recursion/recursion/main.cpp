//
//  main.cpp
//  recursion
//
//  Created by Nick Monaco on 4/14/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;

int handshake(int n);

int main()
{
    int n;
    int total;
    cout<<"enter number of people in the room: ";
    cin>>n;
    total = handshake(n);
    cout<<"the total number of handshakes in the room: "<<total<<endl;
    
    system("pause");
    return 0;
}

int handshake(int n)
{
    if(n==2)
    {
        return 1;
    }
    else
    {
        return (n-1)+(n-1);
    }
}
