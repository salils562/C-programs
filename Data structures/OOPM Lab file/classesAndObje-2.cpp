// Creating the array of objects

#include<iostream>
using namespace std;
class SuzukiCars{
private:
string modelName;
float price;
public:
void setData(string name,float price){
this->modelName=name;
this->price=price;    
}
void showData(void){
    cout<<"The model name of car is: "<<modelName<<endl;
    cout<<"The price of car is: "<<price<<endl;
}
};
int main(){
int n;
string name;
float price;
cout<<"Enter number of cars data you want to add: ";
cin>>n;    
SuzukiCars *cars=new SuzukiCars[n];    
for(int i=0;i<n;i++){
cout<<"Enter the name of "<<(i+1)<<" car: ";
cin>>name;
cout<<"Enter the price of "<<(i+1)<<" car: ";
cin>> price;
cars[i].setData(name,price);
}
cout<<"\nThe details of cars you entered are:\n\n";
for(int i=0;i<n;i++){
cars[i].showData();
}
return 0;
}