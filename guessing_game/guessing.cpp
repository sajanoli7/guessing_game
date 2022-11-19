#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include<unistd.h>
using namespace std;
class A{
    private:
void prizepool();
    public:
    char name[100];
    double money=0,bet=0;
    int n;
    int number;
void get_input();
void compare();
void guessing();
void result();

};
void A::get_input(){
    cout<<"Enter your name"<<endl;
    cin.getline(name,100);
    cout<<"Enter the amount you have"<<endl;
    cin>>money;
    system("clear");
    cout<<"**********WELCOME*********"<<endl;
}
void A::compare(){
    if(money<100){
        cout<<"you don't have enough fund"<<endl;
        exit(0);
    }
    else{
        sleep(1);
        cout<<"                                 Let's Begin the guessing game           "<<endl;
    }
}
void A::prizepool(){
    cout<<"   |>7|"<<"*2.3 "<<"|=7|"<<"*10 "<<"|<7|"<<" *2.3"<<endl;
    do
        {
            cout << "Hey, " <<name<<", enter amount to bet : $";
            cin >> bet;
            if(bet> money)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(bet>money);
}
void A::guessing(){
    prizepool();
cout<<"choose the number between 1 to 12"<<endl;
cin>>n;
if(n>12){
    system("clear");
guessing();
}

}
void A::result(){
    srand(time(0));
    number=rand()%12+1;
    cout<<"the pool number is "<<number<<endl;
    if(n==number){
        cout<<"congratuations"<<endl;
        if(n<7 || n>7){
            money=money+bet*2.3;
            cout<<"total money="<<money<<endl;
        }
        else {
            money=money+bet*7;
usleep(100);
            cout<<"total money="<<money<<endl;
        }
    }
    else{
        sleep(1);
        cout<<"oops!"<<endl;
        money=money-bet;
        usleep(100);
        cout<<"your money="<<money<<endl;
        
            }

}
int main(){
    A s1;
    char ch;
s1.get_input();
do{
    s1.compare();
s1.guessing();
s1.result();
system("clear");
cout<<"money:$"<<s1.money<<endl;
cout<<"Do you want to play more y/Y"<<endl;
cin>>ch;
}while(ch=='y'||ch=='Y');
return 0;
}