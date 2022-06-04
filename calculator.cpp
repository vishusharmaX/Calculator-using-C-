#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //variables
    string c,y,z,s;
    s = "s_a_t_y_a's c_a_l_c_u_l_a_t_o_r";
    c = "Enter your number to get O of your number: ";
    y = "Enter your first number: ";
    z = "Enter second second number: ";
    float a;
    float x;
    cout<<"which type of calculation u wanna to perform?"<<endl<<"(+ , - , / , %1 , %2 , squareRoot , findRemainder)"<<endl<<"Use %1 to find out remainder and %2 to percentage: ";
    string type;
    cin>>type;
    //square root
    if (type == "squareRoot"){
        c.replace(25,1,"Square root");
        cout<<c;
        cin>>a;
        cout<<"Your square root of "<<a<<" is "<<sqrt(a)<<endl<<endl<<s;
    }
    //sum
    else if(type == "+"){
        cout<<y;
        cin>>a;
        cout<<z;
        cin>>x;
        cout<<"Your sum of "<<a<<" and "<<x<<" is "<<a + x<<endl<<endl<<s;
    }
    //difference
    else if(type == "-"){
        cout<<y;
        cin>>a;
        cout<<z;
        cin>>x;
        cout<<"Your difference of "<<a<<" and "<<x<<" is "<<a - x<<endl<<endl<<s;
    }
    //quotient
    else if(type == "/"){
        cout<<"Enter your divident: ";
        cin>>a;
        cout<<"Enter your divisor: ";
        cin>>x;
        cout<<"Your quotient of "<<a<<" and "<<x<<" is "<<a/x<<endl<<endl<<s;
    }
    //remainder
    else if(type == "%1"){
        int d,dd;
        cout<<"Enter your divident: ";
        cin>>d;
        cout<<"Enter your divisor: ";
        cin>>dd;
        cout<<"Your remainder of "<<d<<" and "<<dd<<" is "<<d%dd<<endl<<endl<<s;
    }
    //percentage
    else if(type == "%2"){
        cout<<"Enter your number: ";
        cin>>a;
        cout<<"Enter total number: ";
        cin>>x;
        cout<<"Your percentage of "<<a<<" in "<<x<<" is "<<a/x*100<<"%"<<endl<<endl<<s;
    }
    //else
    else{
        cout<<"Invalid input or we're unable to get your command."<<endl<<"Thanks for using our project."<<endl<<"bbye... take care"<<endl<<endl<<s;
    }
    return 0;
}
