#include <iostream>
#include <cmath>

using namespace std;

class Movie
{
private:
    int IntRate[5];
    int ratings;
    string movie;
    string UserRate[5] = {"Terrible","Bad","Okay","Good","Great"};
    string MPAA;
public:
    Movie(string title,string MpaaRating)
    {
        movie = title;
        MPAA = MpaaRating;
        ratings = 0;
        for(int i = 0; i < 5; i++)
            IntRate[i] = 0;
    }
    void SetMPAA(string MpaaRating)
    {
        MPAA = MpaaRating;
    }
    float getAverage()
    {
        int total = 0;
        ratings = 0;
        for(int i = 0; i < 5; i++)
        {
            ratings += IntRate[i];
            total += IntRate[i] * (i+1);
        }
        if(ratings > 0)
            return floorf((total / ratings)*10) / 10;
        else
            return 0;
    }
    void addRating(int rating)
    {
        if(rating >= 1 && rating <= 5)
            IntRate[rating-1]++;
    }
    friend ostream& operator<<(ostream &out, Movie &M)
    {
        out<< "Movie: "<<M.movie<<endl;
        out<< "MPAA rating: "<<M.MPAA<<endl;
        out<< "viewer Rating: "<<M.getAverage()<<endl;
        return out;
    }
};

int main()
{
    Movie A("A movie","PG");
    A.addRating(1);
    A.addRating(2);
    A.addRating(3);
    A.addRating(4);
    A.addRating(5);
    cout << A << endl;
}