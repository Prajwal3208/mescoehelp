#include<iostream>
#include<string>
using namespace std;

class Publication{
    public:
        string title;
        double price;

    public:
        Publication(){
            cout<<"Enter Title"<<endl;
            cin>>title;

            cout<<"Enter Price"<<endl;
            cin>>price;
        }
        
    public:
        void getTitle(){
            cout<<"Title : "<<title<<endl;      
        }
        void Price() {
            cout<<"Price: Rs. "<<price<<endl;            
        }    

};

class Book : public Publication {
    public:
        int totalpages;

    public:
        Book(){
            cout<<"Enter no. of pages"<<endl;
            cin>>totalpages;
        }
        

    public:
        void TotalPages(){
            cout<<"Total no. of pages are :"<<totalpages<<endl;
        }
};

class Tape : public Publication {
    public:
        int minutes;

    public:
        Tape(){
            cout<<"Enter length of tape";
            cin>>minutes;
        }

    public:
        void tapelength() {
            cout<<"The tape is "<<minutes<<" mins long"<<endl;
        }    
};

int main()
{
    int ch,flag=1;
    cout<<"Select your input choice \n 1.Book\n 2.Tape";
    cin>>ch;
    while (flag==1)
    {
        if (ch==1)
        {
            Book obj1;
            obj1.getTitle();
            obj1.Price();
            obj1.TotalPages();
            break; 
        }
        else if (ch==2)
        {
            Tape obj2;
            obj2.getTitle();
            obj2.Price();
            obj2.tapelength();
            break;
        }
        else
        {
            cout<<"invalid input";
            break;
        }
            
    }
    
    return 0;
}


