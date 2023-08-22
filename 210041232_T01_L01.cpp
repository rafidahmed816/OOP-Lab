#include<iostream>
using namespace std;
class Counter{
    private:
        int count;
        int incrementStep;

    public:
        void setIncrementStep(int step_val){
            incrementStep+=step_val;
        }
        int getCount(){
            return count;
        }
        void increment(){
            count+=incrementStep;
        }
        void resetCount(){
            count=0;
        }
        bool isEven(){
            if(count%2==0) return true;
            return false;
        }

};




int main(){
    Counter c1;
    c1.resetCount();
    c1.setIncrementStep(5);
    c1.increment();
    c1.increment();
    cout<<"Count after incrementing "<<c1.getCount()<<endl;
    if(c1.isEven()){
        cout<<"COunt is even"<<endl;
    }
    else
    cout<<"Count is odd"<<endl;
    c1.resetCount();
    cout<<"Count after reseting "<<c1.getCount();

}