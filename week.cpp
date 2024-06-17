#include<iostream>
using namespace std;

int main()
{
    //Program to give week day in by taking week number as an input.
    int week;
    cout<<"Enter a week day number"<<endl;//eg: 1 to 7.
    cin>>week;
    switch (week)
    {
        case 1 :
        cout<<"Monday";
        break;
    
        case 2 :
        cout<<"tuesday";
        break;

        case 3 :
        cout<<"Wednesday";
        break;

        case 4 :
        cout<<"Thursday";
        break;

        case 5 :
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Enter a valid week day number.";
        break;
    }
    return 0;
}