/*C++ program to create a class to read and add two distance. */
#include  <iostream>
using namespace std;
 
class Distance
{
    private:
        int feet;
        int inch;
    public:
             Distance (); //Constructor
        void getDist  ();
        void showDist ();
        Distance addDist( Distance d2 );
        Distance subDist( Distance d2 );
};
 
Distance:: Distance ()
{
    feet = 0; inch = 0;
}
 
void Distance:: getDist()
{
    cout << "Enter Value of feets : "; cin >> feet;
    cout << "Enter value of inches : "; cin >> inch;
     
    inch = (inch >= 12) ? 12 : inch;
}
 
void Distance:: showDist()
{
    cout << endl << "\tFeets : " << feet;
    cout << endl << "\tInches: " << inch;
}
 
 
Distance Distance:: addDist( Distance d2 )
{
    Distance temp;
 
    temp.feet = feet + d2.feet;
    temp.inch = inch + d2.inch;
 
    if( temp.inch >= 12)
    {
        temp.feet++;
        temp.inch -= 12;        
    }
    return temp;    
}
 
Distance Distance:: subDist( Distance d2 )
{
    Distance temp;
 
    temp.feet = feet - d2.feet;
    temp.inch = inch - d2.inch;
 
    if( temp.inch < 0 )
    {
        temp.feet--;
        temp.inch = 12 + temp.inch;     
    }
    return temp;    
}
 
int main()
{
    Distance d1;
    Distance d2;
    Distance d3;
    Distance d4;
 
    cout << "Enter Distance1 : " << endl;
    d1.getDist();
     
    cout << "Enter Distance2 : " << endl;
    d2.getDist();
 
    d3 = d1.addDist(d2);
    d4 = d1.subDist(d2);
 
    cout << endl << "Distance1 : " ;
    d1.showDist();
 
    cout << endl << "Distance2 : " ;
    d2.showDist();
 
    cout << endl << "Distance3 : " ;
    d3.showDist();
 
    cout << endl << "Distance4 : " ;
    d4.showDist();
 
    cout << endl;         
    return 0;
}