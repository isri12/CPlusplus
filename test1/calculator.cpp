#include<iostream>

class Calculate
{
    public:
    void displayAvaluableCalculations();

};


class Addition:public Calculate
{
    private:
    double x;  //data member
    double y;
    double sum;

    public:
    void readNumber();  //method 
    void printNumber();  
    double add(double x,double y);
};

void Addition::readNumber()
{
    std::cout<<"Enter first number: "<<std::endl;
    std::cin>>x;
    std::cout<<"Enter second number: "<<std::endl;
    std::cin>>y;
} 

void Addition::printNumber()
{
    std::cout<<"you entered "<<x<<" and "<<y<<std::endl;
}

double Addition::add(double x,double y)
{
    sum = (x+y);
    std::cout<<"The sum is: "<<sum<<std::endl;
    return sum;
}

int main()
{
    Addition a;
    a.readNumber();
    a.add();
}