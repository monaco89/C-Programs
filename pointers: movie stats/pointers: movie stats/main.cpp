#include <iostream>

using namespace std;

int main()
{
    int * students, n, avg;
    cout << "How many students were surveyed? \n";
    cin >> n;
    if(n <= 0)
    {
        cout << "Invalid number\n";
        return 1;
    }
    students = new int[n];
    for(int i = 0; i < n; i++)
    {
        cout << "How many movies did student #" << i + 1 << " see?\n";
        cin >> students[i];
        avg += students[i];
    }
    avg /= n;
    cout << "The average number of movies is " << avg << " movies.\n";
    return 0;
}