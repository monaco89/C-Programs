//Nick Monaco
// Coint Toss

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int coinFlip();		
const int HEADS = 1;
const int TAILS = 2;
int main()
{
	int tosses, count;	
	count = 0;
	cout << "How many tosses should I make?: ";		
	cin >> tosses;
	
	while (count <= tosses)   
	{	coinFlip();
		count++;
	}
    system("pause");
    return 0;					
}
int coinFlip() 
{
	
	int flip = (rand()%2)+1;	
	if (flip == HEADS)
        cout << "Heads!\n";  
    else if (flip == TAILS)
        cout << "Tails!\n";  
    return flip;
}

