#include<iostream>
using namespace std;
int A(int number){
 int remain=0 , sum=0;
 while(number > 0){
 remain = number%10;
 sum = sum + (remain*remain);
 number = number/10;
 }
 return sum;
 }
    void B(int number)
 {
     int sumofNumber = number;
 while((sumofNumber != 1) && (sumofNumber != 4)){
 sumofNumber = A(sumofNumber);}

        if(sumofNumber == 1)
            cout<<"It is a happy number";
             else if(sumofNumber ==4)
                cout<<" It is a unhappy number";
 }

 int main()
 {
 int number;
 cout<<"Enter a number ";
 cin>>number;
 B(number);
 return 0;
 }