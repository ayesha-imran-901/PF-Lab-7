#include <iostream>
using namespace std;
int main()
{
    const int NUM_STUDENTS = 10;
    int hoursStudied[NUM_STUDENTS];
    cout << "Enter hours studied by each student:"<<endl;
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout<< "Student " << (i + 1) << ": ";
        cin>> hoursStudied[i];
    }
    cout<< "\nHours Studied by Each Student:"<<endl;
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
    cout<< "Student " << (i + 1) << ": " << hoursStudied[i] << " hours\n";
    }
    int maxHours = hoursStudied[0];
    int maxStudent = 1;
    for (int i = 1; i < NUM_STUDENTS; i++) 
    {
        if (hoursStudied[i] > maxHours)
        {
            maxHours = hoursStudied[i];
            maxStudent = i + 1;
        }
    }  
    cout<< "\nStudent Who Studied the Most:"<<endl;
    cout<< "Student " << maxStudent << " with " << maxHours << " hours\n";
    return 0;
}