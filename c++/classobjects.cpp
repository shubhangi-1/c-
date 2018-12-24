
#include <bits/stdc++.h>

using namespace std;

class Distance {
    protected:
        int feet;
        float inches;

    public:
        virtual void setFeetAndInches(int feet, float inches) = 0;
        virtual int getFeet() = 0;
        virtual float getInches() = 0;
        virtual string getDistanceComparison(Distance *dist2) = 0;

};

class DistanceImplementation{

};

int Distance::getFeet()
{
        return feet;
}
float Distance::getInches()
{
        return inches;
}
void Distance::setFeetAndInches(int a,float b)
{
        feet=a;
        inches=b;
}

string Distance:: getDistanceComparison(Distance *d)
{
        cout<<"feet="<<d->getFeet()+feet<<endl;
        cout<<"inches="<<d->getInches()+inches<<endl;

}



int main()
{
	DistanceImplementation d1, d2;
    Distance *dist1 = &d1;
    Distance *dist2 = &d2;

    int feet1, feet2;
    float inches1, inches2;
    cin >> feet1 >> inches1 >> feet2 >> inches2;

    dist1->setFeetAndInches(feet1, inches1);
    dist2->setFeetAndInches(feet2, inches2);

    cout << dist1->getDistanceComparison(dist2) << endl;

	return 0;
}
