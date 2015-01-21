// Nick Monaco
//  boolean functions


#include <iostream>
using namespace std;

int containDigit(int number);

int number;
int digit;
int templow;
int temphigh;

int main()
{
    cout<<"enter a temperature between 0 and 999: ";
    cin>>number;
    
    containDigit(number);
    
    cout<<digit<<endl<<temphigh<<templow<<endl;
    
    system("pause");
    return 0;
}

int containDigit(int number)
{
    int firstDigit;
    int secondDigit;
    int tenth;
    int thirdDigit;
    int subFirst1, subFirst2;
    int subSecond1, subSecond2;
    int subThird1, subThird2;
    
    firstDigit = number/100;
    tenth = (number-firstDigit);
    secondDigit = tenth/10;
    thirdDigit = number/tenth;
    
    if(firstDigit != 1 && 4 && 7)
    {
        subFirst1 = firstDigit + 1;
        subFirst2 = firstDigit - 1;
        return subFirst1;
        return subFirst2;
    }
    else
    {
        return firstDigit;
    }
    
    if(secondDigit != 1 && 4 && 7)
    {
        subSecond1 = secondDigit + 1;
        subSecond2 = secondDigit - 1;
        return subSecond1;
        return subSecond2;
    }
    else
    {
        return secondDigit;
    }
    
    if(thirdDigit != 1 && 4 && 7)
    {
        subThird1 = thirdDigit + 1;
        subThird2 = thirdDigit - 1;
        return subThird1;
        return subThird2;
    }
    else
    {
        return thirdDigit;
    }
    
    digit = (firstDigit*100)+(secondDigit*10)+(thirdDigit);
    temphigh = (subFirst1*100)+(subSecond1*10)+(subThird1);
    templow = (subFirst2*100)+(subSecond2*10)+(subThird2);
    
}