#include <iostream>
#include <string>
using namespace std;

void calculatePoints (double points, double average){

    int day=0;
    int week=0;
    while (day <= 77){ // assuming (11 weeks in a quarter) * (7 days a week)
        if (day % 7 == 0){ // if the day is a factor of 7 (the end of the week)
            cout<<endl;
            week++; // increment to next week
            if (week == 12){break;} // there is no week 12, end loop when/if 12 is reached
            cout<<"WEEK "<<week<<" LISTED BELOW" <<endl; // begin output for new week
        }

        points=points-average; // subtracts average amount spent per day from previous day's point value
        if (points <= 0){ // if you run out of points before the quarter is over, end loop and notify user
            cout<<"Points entered negative, program ended"<<endl;
            return;
        }
        cout<< points <<endl; // outputs current day's value
        ++day; // increments day


    }
    cout<<"You should have about "<<points<<" left. Remember that a max of 75 extra points"<<endl;
    cout<<"move over to next quarter, but not between school years."<<endl;
}


int main()
{

double average = 22.64; // calculated average points spent per day (per SCU's weekly point chart)
double points; // how many points the user has

cout<<"This program lists about how many points you should have by"<<endl<<"the END of each day of the week, in the order: "<<endl;
cout<<"Saturday"<<endl;
cout<<"Sunday"<<endl;
cout<<"Monday"<<endl;
cout<<"Tuesday"<<endl;
cout<<"Wednesday"<<endl;
cout<<"Thursday"<<endl;
cout<<"Friday"<<endl;
cout<<endl;

cout<<"How many points did you start the quarter with? (1887 if 75 rolled over from last quarter)"<<endl;
cout<<endl;
cout<<"You can also enter in how many current points you have, in which case"<<endl;
cout<<"the program will calculate how many weeks those points will last if you average 22.64 points spent a day"<<endl;
cin>>points; // input points
//points=1812;

cout<<endl;
cout<<"***Assuming you spend about "<<average<<" points per day***"<<endl;
cout<<endl;

calculatePoints (points, average); // calculate and output points per day

    return 0;
}
