#include<stdio.h>

enum Weekday{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};

const char* names[]={
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
};
int main(){
    enum Weekday days;
    for(days=Sunday;days<=Saturday;days++){
        printf("Today is %s\n",names[days]);
    }
    return 0;
}