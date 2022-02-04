#include <iostream>
#include <string>
using namespace std;

//This program calculates the average Grade and the largest and lowest Grade
int main()
{
	int f,i,c,id,mat,eng,sci,ara,avg;
	string n;
	c = 1;


    for(i=0;i<50;i++){

    cout<<c<<":student\n";
    c++;

    cout<<"Enter your name:"<<endl;
    cin>>n;

    cout<<"Enter your ID:"<<endl;
    cin>>id;

    cout<<" Enter your Grade in math:"<<endl;
    cin>>mat;

    for(f=0;f<10;f++){
        if(mat>=20){
            cout <<" Enter your Grade in math again(maximum=20):"<<endl;
            cin >>mat;}
        else
            break;
    }

    if(mat<10){
        cout <<"you field in math"<<endl;
    }

    cout<<" Enter your Grade in English:"<<endl;
    cin>>eng;

    for(f=0;f<10;f++){
        if(eng>=20){
            cout <<" Enter your Grade in English again (maximum=20):"<<endl;
            cin >>eng;}
        else
            break;
    }


    if(eng<10){
        cout <<"you field in English"<<endl;
    }

    cout<<" Enter your Grade in Science:"<<endl;
    cin >>sci;

    for(f=0;f<10;f++){
        if(sci>=20){
            cout <<" Enter your Grade in Science again (maximum=20):"<<endl;
            cin >>sci;}
        else
            break;
    }

    if(sci<10){
        cout <<"you field in Science"<<endl;
    }

    cout<<" Enter your Grade in Arabic:"<<endl;
    cin>>ara;

    for(f=0;f<10;f++){
        if(ara>=20){
            cout <<" Enter your Grade in Arabic again (maximum=20):"<<endl;
            cin >>ara;}
        else
            break;
    }

    if(ara<10){
        cout <<"you field in Arabic"<<endl;
    }

//This part calculates the average Grade
    avg=(mat+eng+sci+ara)/4;
    cout<<"\nThe Average is:"<<avg<<endl;


//This part calculates the highest Grade
    if (mat>eng && mat>sci && mat>ara)
         cout<<"\n math is largest";
    else if (eng>sci && eng>ara)
         cout<<"\n English is largest";
    else if (sci>ara)
         cout<<"\n Science is largest";
    else
         cout<<"\n Arabic is largest"<<endl;


//This part calculates the smallest Grade
     if (mat<eng && mat<sci && mat<ara)
         cout<<"\n Math is smallest\n\n";
    else if (eng<sci && eng<ara)
         cout<<"\n English is smallest\n\n";
    else if (sci<ara)
         cout<<"\n Science is smallest\n\n";
    else
         cout<<"\n Arabic is smallest\n\n";

    }

     cout << "Thanks for all students"<<endl;
     return 0;
}
