//
//  main.cpp
//  square display
//
//  Created by Nick Monaco on 3/13/13.
//  Copyright (c) 2013 Nick Monaco. All rights reserved.
//

#include <iostream>
using namespace std;
int main ()
{
	int number;
	cout<<"Enter a positive integer no greater than 15: "<<" "<<endl;
	cin>>number;
	if (number < 1)
        number = 1;
    else if (number > 15)
        number = 15;
	for (int i=0; i <number; i++)
	{
		for (int j=0; j <number; j++)
		{
			cout<<'X';
		}
		cout<<endl;
	}
    system("pause");
    return 0;
}
