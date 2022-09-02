#include<iostream>
using namespace std;

class Circle{
    private:
    int radius;
    public:
    Circle(int r){ //constructor
        radius=r;
    }
    void setRadius(){ //setter method
        this -> radius=radius;  //same as self.argument = something (in python) 
    }
    int getRadius(){
        return radius;
    }
};

class Utility{
    public:
    double calculateArea(Circle C){
        int r=C.getRadius();
        return 3.14*r*r;
    }
};

int main(){
    int radius=0;
    cout<<"Enter the radius of the circle :";
    cin>>radius;

    Circle obj(radius);
    Utility c1;
    cout<<"The area is :"<<c1.calculateArea(obj)<<"cm^2"<<endl;
    return 0;

}