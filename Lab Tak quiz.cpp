// 212052 OOP Lab 3 question 2
#include <iostream>
using namespace std;

class tollbooth {

private :
    int payingcars;
    int nonpayingcars;
    float amount;


public :
    tollbooth (){

    payingcars = 0;
    nonpayingcars = 0;
    amount = 0;}

    void pay (){

    payingcars++;
    amount = amount + 50 ;
    }

    void nopay(){
     nonpayingcars++;
    }


    void display () {


    cout <<endl<< "The total number of paying cars are "<<payingcars;
    cout<< endl<< "The total number of non-paying cars are "<<nonpayingcars;
    cout<<endl<<"The total amount paid is Rs. "<<amount;
    }


    };

    int main() {

    tollbooth  t1, t2, t3, t4, t5, tf;

    t1.nopay();
    t1.pay();
    t1.pay();
    t1.nopay();
    t1.pay();
    t1.display();
    }




