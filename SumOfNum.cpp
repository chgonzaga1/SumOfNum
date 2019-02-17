#include<iostream>
using namespace std;
int getNum();
void sumThis(int num);

int main()
{
int result = getNum();//thisfunction will activate once! and should be only once!, i learn if i write another functino call, itw ill really make a call

cout<<"The number is "<<result<<endl;
sumThis(result);

return 0;
}

int getNum(){

int num;
cout<<" Please enter a number and this program use a loop to get the sum of all, the integers from 1 to the number you will enter, please enter now: "<<endl;
cin>>num;
//Valdies the correct input here
while(num<0){
cout<<"sorry!, the number you type has to be a positive number"<<endl;
cout<<"please enter again: /n";
cin>>num;
}

return num;
}

void sumThis(int num){

int total;
cout<<"Hi"<<endl;
//suppose to be i that has to be incremented, yikes!
for(int i = 0; i<=num; i++)
total += i;//the i should be added.

cout<<"Your total is: "<<total<<endl;

}
//
//4+4+4+4 that's what happened if I used total +=num, i should really practice on loops!
//