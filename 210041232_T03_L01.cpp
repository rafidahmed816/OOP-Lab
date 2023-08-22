#include<iostream>
using namespace std;
class Student{
    private:
        string firstName,lastName,course;
        int studentId,birthYear,marks;
    public:
    void setDetails(string frst,string lst,int id,int birth_yr,string c,int num){
        firstName=frst;
        lastName=lst;
        studentId=id;
        birthYear=birth_yr;
        course=c;
        marks=num;
    }
    void displayDetails(){
        cout<<"First Name : "<<firstName<<endl;
        cout<<"Last Name  : "<<lastName<<endl;
        cout<<"Student Id : "<<studentId<<endl;
        cout<<"Birth Year : "<<birthYear<<endl;
        cout<<"Course     : "<<course<<endl;
        cout<<"Marks       : "<<marks<<endl;
    }
    int displayAge(){
        int temp;
        temp=2023-birthYear;
        return temp;
    }
    float displayGPA(){
        if(marks>=80) return 4.00;
        else if (marks>=75 && marks<80) return 3.75;
        else if(marks>=70 && marks<75) return 3.50;
        else if(marks>=65 && marks<70) return 3.25;
        else if(marks>=60 && marks<65) return 3.00;
        else if(marks>=55 && marks<60) return 2.75;
        else if(marks<55) return 0;
    }
    void willGraduate(){
        if(marks<55)
        cout<<"Student will not graduate"<<endl;
        else
        cout<<"Student will graduate"<<endl;

    }
    float updatedGPA(){
        marks=marks+marks*0.1;
        if(marks>=80) return 4.00;
        else if (marks>=75 && marks<80) return 3.75;
        else if(marks>=70 && marks<75) return 3.50;
        else if(marks>=65 && marks<70) return 3.25;
        else if(marks>=60 && marks<65) return 3.00;
        else if(marks>=55 && marks<60) return 2.75;
        else if(marks<55) return 0;
    }
    void printTranscript(){
        cout<<"Full name: "<<firstName<<" "<<lastName<<endl;
        cout<<"Student Id: "<<studentId<<endl;
        cout<<"Current Age: "<<displayAge()<<endl;
        cout<<"Updated Gpa: "<<updatedGPA()<<endl;
    }

       

};


int main(){
    Student s1;
    s1.setDetails("Rafid","Ahmed",210041232,2000,"OOP",75);
    s1.displayDetails();
    s1.willGraduate();
    s1.printTranscript();

    



    

}