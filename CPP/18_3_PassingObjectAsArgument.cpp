// We can also pass objects as an argument in cpp

// Example to find net time

#include <iostream>
using namespace std;

class Time
{
private:
    int h, m;

public:
    void getdata()
    {
        cout << "Enter hours and minutes : ";
        cin >> h >> m;
    }

    void showdata()
    {
        cout << "Time is : " << h << " hrs : " << m << " mintes\n";
    }

    void sum(Time t1, Time t2)
    {

        h = (t1.m + t2.m) / 60;     // converting minutes into hours
        m = (t1.m + t2.m) % 60;     // left out minutes
        h = h + (t1.h + t2.h);      
    }
};

int main()
{
    Time t1, t2, t3;

    t1.getdata();
    t2.getdata();
    t3.sum(t1, t2);

    t1.showdata();
    t2.showdata();
    t3.showdata();

    return 0;
}