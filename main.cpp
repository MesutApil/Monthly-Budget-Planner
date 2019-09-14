//Program coded by Mesut Apil
#include<iomanip>
#include<iostream>
#include<string>

using namespace std;

struct Budget{
    double Housing, Utilities, Householdexp, Transportation, Food, Medical, Insurance, Entertainment, Clothing, Miscellaneous;
    
    double H;
    double U;
    double HE;
    double T;
    double F;
    double M;
    double I;
    double E;
    double C;
    double Mis;
    double entirebudget;
    double a,b,c,d,e,f,g,h,k,m,total,totalinput;
};

void Display(Budget);

int main()
{
    Budget Student;
    
    cout<<" Budget for Housing: ";
    cin>>Student.H;
    cout<<" Budget for Utilities: ";
    cin>>Student.U;
    cout<<" Budget for Household Expenses: ";
    cin>>Student.HE;
    cout<<" Budget for Transportation: ";
    cin>>Student.T;
    cout<<" Budget for Food: ";
    cin>>Student.F;
    cout<<" Budget for Medical: ";
    cin>>Student.M;
    cout<<" Budget for Insurance: ";
    cin>>Student.I;
    cout<<" Budget for Entertainment: ";
    cin>>Student.E;
    cout<<" Budget for Clothing: ";
    cin>>Student.C;
    cout<<" Budget for Miscellaneus: ";
    cin>>Student.Mis;
    
    Student.entirebudget = (Student.H + Student.U + Student.HE + Student.T + Student.F + Student.M + Student.I + Student.E + Student.C + Student.Mis);
    
    cout<<" Your entire budget is: "<<Student.entirebudget<<endl;
    
    cout<<" Enter Your Expenses"<<endl;
    cout<<" Housing: ";
    cin>>Student.Housing;
    cout<<" Utilities: ";
    cin>>Student.Utilities;
    cout<<" Household Expenses: ";
    cin>>Student.Householdexp;
    cout<<" Transportation: ";
    cin>>Student.Transportation;
    cout<<" Food: ";
    cin>>Student.Food;
    cout<<" Medical: ";
    cin>>Student.Medical;
    cout<<" Insurance: ";
    cin>>Student.Insurance;
    cout<<" Entertainment: ";
    cin>>Student.Entertainment;
    cout<<" Clothing: ";
    cin>>Student.Clothing;
    cout<<" Miscellaneous: ";
    cin>>Student.Miscellaneous;
    
    Student.a = (Student.H - Student.Housing);
    Student.b = (Student.U - Student.Utilities);
    Student.c = (Student.HE - Student.Householdexp);
    Student.d = (Student.T - Student.Transportation);
    Student.e = (Student.F - Student.Food);
    Student.f = (Student.M - Student.Medical);
    Student.g = (Student.I - Student.Insurance);
    Student.h = (Student.E - Student.Entertainment);
    Student.k = (Student.C - Student.Clothing);
    Student.m = (Student.Mis - Student.Miscellaneous);
    Student.totalinput = (Student.Housing + Student.Utilities+ Student.Householdexp +Student.Transportation + Student.Food + Student.Medical + Student.Insurance + Student.Entertainment + Student.Clothing + Student.Miscellaneous);
    Student.total = Student.entirebudget - Student.totalinput;
    Display(Student);
    
}

void Display(Budget Student){

    cout<<" Report of Expenses"<<endl;
    cout<<"-------------------"<<endl;
    cout<<" Housing: "<<Student.a<<endl;
    cout<<" Utilities: "<<Student.b<<endl;
      cout<<" Household Expenses: "<<Student.c<<endl;
    cout<<" Transportation: "<<Student.d<<endl;
    cout<<" Food: "<<Student.e<<endl;
    cout<<" Medical: "<<Student.f<<endl;
      cout<<" Insurance: "<<Student.g<<endl;
     cout<<" Entertainment: "<<Student.h<<endl;
    cout<<" Clothing: "<<Student.k<<endl;
    cout<<" Miscellaneous: "<<Student.m<<endl;
    cout<<" Entire Month Profit or Loss: "<<Student.total<<endl;
    
}
