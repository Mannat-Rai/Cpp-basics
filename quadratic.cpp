#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //The quadratic eqaution is given by ax^2+bx+c=0.
    //The discriminant is given by : b^2-4ac . Which gives two roots.
    int a , b, c;
    int Dis;
    int root1 , root2;
    cout<<"Enter the value of coefficients a , b, c "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    //Discriminant.
    Dis = ((b*b)-(4*a*c));

    
    if(Dis>0){
        root1= (-b+sqrt(Dis))/(2*a);
        root2= (-b-sqrt(Dis))/(2*a);
        cout<<"The two  distinct real roots are "<<root1<<" ,"<<root2;
    }
    else if(Dis==0){
        root1 = root2 = -b/(2*a);
        cout<<"The two equal real roots are  "<<root1<<", "<<root2;
    }
    else{
        cout<<"There exists no real roots for this quadratic equation.";
    }
     return 0;
}
