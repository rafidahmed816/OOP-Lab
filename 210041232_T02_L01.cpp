#include<iostream>
using namespace std;
class Book{
    private:
       string title,author;
       int publicationYear;
       bool availibilityStatus;

    public:
       void setDetails(string tl,string auth,int yr){
            title=tl;
            author=auth;
            publicationYear=yr;
       }
       void checkOut(){
            availibilityStatus=false;
       }
       void checkIn(){
        availibilityStatus=true;
       }
       void displayStatus(){
        cout<<"Name of the book : "<<title<<endl;
        cout<<"Auhor of the book: "<<author<<endl;
        cout<<"Publication Year : "<<publicationYear<<endl;
        if(availibilityStatus)
        cout<<"It's available"<<endl;
        else
        cout<<"It's not available"<<endl;
       }
       bool isClassic(){
            int cnt;
            cnt=2023-publicationYear;
            if(cnt>50)
            return true;
            else
            return false;

       }

};


int main(){
   Book book1;
   book1.setDetails("To kill a mockingbird","Haruki Murakami",1970);
   book1.checkIn();
   book1.displayStatus();
   
    if(book1.isClassic())
        cout<<"It's a classic"<<endl;
    else
        cout<<"It's Not a classic"<<endl;
        
    book1.checkOut();




}