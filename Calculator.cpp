// Your First C++ Program

#include <iostream>
using namespace std;

int day_of_month(int day, int month, int year){
    year -= month < 3;
    static int t[] ={0,3,2,5,0,3,5,1,4,6,2,4};
    return (year +year/4 + year/100 + year/400 + t[month-1] + day) % 7;
    //return index from 0 - 6
};
int no_of_day(int month, int year){
    if (month==1 || month==3 ||month == 5 || month==7 || month==8 || month==10 || month==12){
        return 31;
    }

        if (month==4  || month==6 || month==9 || month==11){
            return 30;
        }
    if (year%100==0 || year%400==0 || month ==2)  {
        return 29;
    }  
    if (year%100!=0 || year%400!=0 || month !=2)  {
        return 28;
    } 
    return 0; 
}

int main(int argc, const char** argv) {
    int month, year;
    cout <<"Enter the Year:"; cin>> year;
    cout <<"Enter the Month:"; cin>> month;
    cout<< "-------------"<<year<< "" <<month << "--------\n";
    cout<<"SUN MON TUE WED THUR FRI SAT\n";
    for (int k =0; k<day_of_month(1,month,year);k++) {
        cout<<"  "; 
    }
    for (int k=1; k<no_of_day(month, year); k++){
        cout<<k<< "  ";
        if(++k>6){
            cout<<"\n";
            k=0;
        }
    }

    return 0;
}
