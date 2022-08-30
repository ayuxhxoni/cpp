#include<math.h>    
#include<bits/stdc++.h> 
using namespace std;
int main(){
    cout<<"what's your name?"<<endl;
    string name;
    getline(cin,name);
    cout<<"what do you want to order?"<<endl;
    string order;
    getline(cin,order);
    cout<<name<<" your order "<<order<< " will be ready in 5 min"<<endl;
    return 0;
}
