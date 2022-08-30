#include<iostream>
using namespace std;
double price = 60.0;
int main(){
    cout<<"do you want to drink coffee?"<<endl;
    string ans1;
    getline(cin,ans1);
    cout<<"enter you account balance"<<endl;
    double ans2;
    cin>>ans2;

    if(ans1=="yes"&&ans2>=price){
        cout<<"here is your coffee, sir "<<endl;
        cout<<" your account balance is "<<ans2-price<<endl;
    }else{
        cout<<"your account balance is low you can't buy our coffee";
    }


    return 0;
}