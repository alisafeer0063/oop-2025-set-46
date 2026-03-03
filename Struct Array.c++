#include<iostream>
using namespace std;
struct Student
{
    string First_name;
    string Last_name;
    int roll_no;
    int marks;
    
    void DisplayStudentInfo()
    {
      cout<<"Full Name: "<<First_name<<" "<<Last_name<<endl;
      cout<<"Roll No: "<<roll_no<<endl;
      cout<<"Marks: "<<marks<<endl; 
    }
};
int main()
{
    Student s1;

        s1.First_name = "Ali";
        s1.Last_name = "SAFEER";
        s1.roll_no = 46;
        s1.marks = 84;
    
    Student s2;
        s2.First_name = "SARDAR";
        s2.Last_name = "SERAJ";
        s2.roll_no = 47;
        s2.marks = 80;

    Student Students[2] = {s1, s2};
        for(int i=0; i<2; i++)
        {
            Students[i].DisplayStudentInfo();
        }
        
}
