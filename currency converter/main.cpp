#include <iostream>
using namespace std;

int main()

{
    int dollars ;
    int user_iput;


    cout << "Welcome to currency convertor  " <<endl;
    cout << "please select the converots from the menu   " <<endl;
    cout<<"************************************************************************\n";
    cout<<"*  1- Yen                                                               *\n";
    cout<<"*  2- Euro                                                              *\n";
    cout<<"*  3- Peso                                                              *\n";
    cout<<"*************************************************************************\n";
cout<<" Select from the above menu the currency that  you want to convert it in to US  dollars"<<endl;
cin>> user_iput;
if (user_iput ==1) {
    cout << "You have Selected Dollar to Japaneses yen  Converter" << endl;
    cin>> dollars;
    if (dollars > 0){
        float result = dollars *109.36;
        cout<<dollars << "  Dollars  is equal to "<<result<<" yens  "<<endl;
    }
    else{
        cout<<" Please input the amount greater then 0  "<<endl;
    }
    }

else if (user_iput==2) {

    cout << " You have Selected Dollar to Euro Converter" << endl;

    cin>> dollars;
    if (dollars > 0){
        float result = dollars *1.10;
        cout<<dollars<< " Dollar  is equal to "<<result<<" Euros "<<endl;
    }
    else {
        cout<<" Please input the amount greater then 0  "<<endl;
    }
}
else if (user_iput==3) {
    cout << " You have Selected to US Pesos Converter" << endl;
    cin>>dollars;
if (dollars >0 ){
    float result = dollars *19.71;
    cout<<dollars << " Dollars is equal to "<<result<<" Pesos"<<endl;

}
else {
    cout<<" Please input the amount greater then 0  "<<endl;

}
}
else
    cout<<"Wrong selection select a number fom the menu"<<endl;
    return 0;
}
