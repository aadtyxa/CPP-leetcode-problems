#include<iostream>
using namespace std;
int main() {
int amount;
cout<<  " Enter the amount "<<endl;
cin >>amount;
int note, am100=0, am50=0, am20=0, am1=0;

if ( amount>= 100){
    note=100;
}
else if ( amount >= 50){
    note=50;
}
else if ( amount >= 20){
    note=20;
}
else if ( amount >= 1){
    note=1;
}

switch(note){
    case 100: am100=(amount/100);
    amount%=100;
    
    case 50: am50=(amount/50);
    amount%=50;

    case 20: am20=(amount/20);
    amount%=20;

    case 1: am1=(amount/1);
    amount%=1;
}
cout<<"no of 100 rupee note: "<<am100<<endl;
cout<<"No. of 50 rupee note: "<<am50<<endl;
cout<<"No. of 20 rupee note: "<<am20<<endl;
cout<<"No. of 1 rupee note:"<<am1<<endl;
}