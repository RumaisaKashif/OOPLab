#include <iostream>
using namespace std;

inline double battingavg(int dismissals, int totalruns)
{
    if (dismissals==0)
    {
        return 0.0;
    }
    else
    {
        return (double)totalruns/dismissals;
    }
}

inline double strikerate(int totalruns, int ballsfaced)
{
    if (ballsfaced==0)
    {
        return 0.0;
    }
    else
    {
        return (double)totalruns/ballsfaced * 100;
    }
}

int main()
{
    cout<<"Rumaisa Kashif, BS AI 2A, 23K0744"<<endl;
    cout<<"Enter total runs of player: ";
    int totalruns;
    cin>>totalruns;
    cout<<"Enter no. of balls faced by player: ";
    int ballsfaced;
    cin>>ballsfaced;
    cout<<"Enter no. of player dismissals: ";
    int dismissals;
    cin>>dismissals;

    cout<<"\nBatting average is : "<<battingavg(dismissals, totalruns)<<endl;
    cout<<"\nStrike rate is : "<<strikerate(totalruns, ballsfaced)<<endl;
}
