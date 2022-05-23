#include <iostream>
using namespace std;

class Color{

    string color="ROSSO";

    public:
    Color(){}
    Color(string color){
        this->color=color;
    }
    
    friend ostream& operator<<(ostream&os,Color &c){
        os << c.color;
    }
    
};

class Shape:public Color{

    protected:
    Color color="ROSSO";
    public:
    Shape(){}
    Shape(Color c):Color(c){
        this->color=c;
    }

    Color getcolor(){
        return this->color;
    }

    void setColor(Color color){
        this->color=color;
    }

    void print(){
        cout << color << endl;
    }

   virtual double getarea()=0;
};

class Rectangle:public Shape{

    double height=1;
    double width=1;

    public:
    Rectangle(double a,double b):height(a),width(b){}
    Rectangle(double a,double b,Color c):height(a),width(b),Shape(c){}
    double getHeight(){
        return height;
    }
    void setHeight(double a){
        this->height=a;
    }
    double getWidth(){return width;}
    void setWidth(double a){width=a;}
    bool isasquare(){
        if(width==height){
            return true;
        }
        return false;
    }
    double getarea(){
        return height*width;
    }
};

class Circle:public Shape{
    double radius=1;
    double xc=0;
    double yc=0;
    public:
    Circle(double a,double b,double c):radius(a),xc(b),yc(c){}
    Circle(double a,double b,double c,Color d):radius(a),xc(b),yc(c),Shape(d){}
    double getXc(){return xc;}
    void setXc(double a){xc=a;}
    double getYc(){return yc;}
    void setYc(double a){yc=a;}
    double getRadius(){return radius;}
    void setRadius(double a){radius=a;}
    double getCircumference(){return 2*3,14*getRadius();}
    bool isGoniometric(){}
    double getarea(){return pow(2,radius)*3,14;}
};

class Triangle:public Shape{
    double base = 1;
    double height = 1;
    public:
    Triangle(double a,double b):base(a),height(b){}
    Triangle(double a,double b, Color c):base(a),height(b),Shape(c){}
    double getHeight(){return height;}
    void setHeight(double h){height=h;}
    double getBase(){return base;}
    void setBase(double b){base=b;}
    double getarea(){return base*height/2;}
};