#include<iostream>
#include<iomanip>
#include<unistd.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
inline void intro(){
    cout<<setw(50)<<setfill('*')<<"TIMER"<<setfill('*')<<setw(50)<<endl;
}
void timer(){
    int hours=0,minute=0,seconds=0,n;
    while(1){
      system("clear");

    cout<<"    "<<hours<<":"<<minute<<":"<<seconds<<endl;
      sleep(1);
    seconds++;
    if(seconds==60){
        minute++;
        if(minute==60){
            hours++;
            minute=0;
            
        }
        seconds=0;
    }
    }

}

void option(){
    int n;
    cout<<"Enter the option 1 to start"<<endl;
    cin>>n;
    switch(n){
        case 1:
        timer(); 
        break;
        default:
        cout<<"pressed button is invalid"<<endl;
        break;
    }
}
int main(){
int hours=0,minute=0,seconds=0;
intro();
option();


return 0;
}