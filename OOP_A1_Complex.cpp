#include<iostream>
using namespace std;
int a1,a2,b1,b2,ch,flag;


class CompleX
{
    public:
    int real,imaginary;
    // parameterised constructor
    CompleX(int inReal=0,int inImaginary=0)
    {
        real=inReal;
        imaginary=inImaginary;
    }

    CompleX addComp(CompleX C1,CompleX C2)
    {
        CompleX temp;
        // add real part
        temp.real= C1.real+C2.real;
        // add complex part
        temp.imaginary= C1.imaginary+C2.imaginary;
        return temp;
    }

    CompleX subComp(CompleX C1,CompleX C2)
    {
        CompleX temp;
        // add real part
        temp.real= C1.real-C2.real;
        // add complex part
        temp.imaginary= C1.imaginary-C2.imaginary;
        return temp;
    }

    CompleX multiComp(CompleX C1,CompleX C2)
    {
        CompleX temp;
        //real part
        temp.real=(C1.real*C2.real)-(C1.imaginary*C2.imaginary);
        //complex part
        temp.imaginary=(C1.real*C2.imaginary)+(C1.imaginary*C2.real);
        return temp;
    }
    

};


int main()
{
    
    cout<<"Complex no.1: a1 + ib1,enter a1 and b1"<<endl;
    cin>>a1>>b1;
    CompleX C1(a1,b1);
    cout<<"Complex no. C1 "<<C1.real<<" + i "<<C1.imaginary<<endl;

    cout<<"Complex no.2: a2 + ib2,enter a2 and b2"<<endl;
    cin>>a2>>b2;
    CompleX C2(a2,b2);
    cout<<"Complex no. C2 "<<C2.real<<" + i "<<C2.imaginary<<endl;

    flag=1;
    while (flag==1)
    {   
        cout<<" Select your choice:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Stop"<<endl;
        cin>>ch;
        if (ch==1)
        {
            CompleX C3;
            C3=C3.addComp(C1,C2);
            cout<<"Sum: "<<C3.real<<" + i "<<C3.imaginary<<endl;
        }
        else if (ch==2)
        {
            CompleX C3;
            C3=C3.subComp(C1,C2);
            cout<<"Difference: "<<C3.real<<" + i "<<C3.imaginary;
        }
        else if (ch==3)
        {
            CompleX C3;
            C3=C3.multiComp(C1,C2);
            cout<<"Multiplication: "<<C3.real<<" + i "<<C3.imaginary;
        }
        else if (ch==4)
        {
            break;
        }    
    }       
    
    return 0;
}


    

