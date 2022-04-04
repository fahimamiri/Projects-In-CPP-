#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

//collecting informaton and store in file
void registering_Drivers_info(){
    string F_name,address , licince_plate, DL , DL_expiration, L_name,DOB, vehicle_plate, Licince_plate_exp, state_for_car,St_num,apt_num ,city, Zip_code ,state;
    ofstream search_data_base("search.txt",ios::app);
    cin.ignore();
    cout<<"Enter Vehicle Licence plate Number  :\n";
    getline(cin,licince_plate);

    cout<<"Diver licence  number\n";
    getline(cin,DL);
    cout<<"Driver Licence Expiration   :\n";
    getline(cin,DL_expiration);

    cout<<"Driver Last Name \n";
    getline(cin,L_name);

    cout<<"Driver First Name \n";
    getline(cin,F_name);

    cout<<"Driver current Address  \n";
    cout<<"Street Number  \n";
    getline(cin,St_num);
    cout<<"Apartment or Unit number \n";
    getline(cin,apt_num);
    cout<<"City \n";
    getline(cin,city);
    cout<<"state\n";
    getline(cin,state);
    cout<<"Zip code \n";
    getline(cin,Zip_code);

    cout<<"Driver DOB   Date// month // year  \n";
    cin>>DOB;


    cout<<"Licence Plate expiration\n";
    cin>>Licince_plate_exp;

    cout<<"State of Licence Plate issued\n";
    cin>>state_for_car;

    search_data_base<<"Vehicle_licence_plate_number: "<<licince_plate<<" Driver_licence_Number: "<<DL<<" DL_Expiration: "<<DL_expiration<<" Last_Name: "<<L_name<<" First_Name: "<<F_name<<" Street_Number: "<<St_num<<" Apartment_Number: "<<apt_num<<" City: "<<city<<" State: "<< state<<" Zip Code: "<<Zip_code<<" DOB "<<DOB<<" LP_experiration "<< Licince_plate_exp<<" State of Licence Plate issued "<<state_for_car<<endl;

    search_data_base.close();
}


void search_data_base_function(){
    const int size = 3000;
    string  array1[size];
    int count;
    string search;

    ifstream search_data_base;
    search_data_base.open("search.txt");

    cout<<"Enter the licence Plate you would like search"<<endl;
    cin>>search;

    count =0;
    while(!search_data_base.eof()){
        search_data_base>>array1[count];

        count++;

    } for (int i =0 ; i< size-1;i++) {


        if (search == array1[i]) {

            cout << "Driver Information Has Been Found In Data Base " << endl;
            cout << "Driver Licence Plate  Number  Is : " << array1[i] << endl;
            cout << "Driveling Number/ Or Californian ID number :  " << array1[i + 2] << endl;
            cout << "Diver licence expiration :   " << array1[i + 4] << endl;
            cout << "Last Name  :   " << array1[i + 6] << endl;
            cout << "First Name  :   " << array1[i + 8] << endl;

            cout << "Address On File " << array1[i + 9] << "  " << array1[i + 10] << "  " << array1[i + 11]
                 << " Apartment OR Unit number " << array1[i + 14] << " " << array1[i + 16] << " " << array1[i + 18]
                 << " " << array1[i + 21] << " " << endl;
            cout << "Date Of Birth  :   " << array1[i + 23] << endl;

//bool licence_valid(int array[]){

//for(int i = 0 ; i < 0; i++)

            //   }
            cout << "Vehicle Licence Plate Expiration  is on  :   " << array1[i + 25] << endl;
            cout << "State Of Licence Plate Issued  :   " << array1[i + 31] << endl;

            break;

        }
        else if(i==size-2)
        {
            cout << search << " Was not exsit in our data base" << endl;

        }
    }







}
void search_by_name() {
    const int size = 10000;
    string array1[size];
    int count;
    string NamE_search;

    ifstream search_data_base;
    search_data_base.open("search.txt");

    cout << "Enter the Name You would like to search " << endl;
    cin >> NamE_search;

    count = 0;
    while (!search_data_base.eof()) {
        search_data_base >> array1[count];

        count++;

    }
    for (int i = 0; i < size - 1; i++) {


        if (NamE_search == array1[i]) {

            cout << "The Information Has Been Found In Data Base " << endl;

            cout << "First Name : " << array1[i] << endl;
            cout << "Last Name  :  " << array1[i + 2] << endl;
            cout<<"Resident OF "<<array1[i+4]<<" "<<array1[i+6]<<" "<<array1[i+8]<<" "<< array1[i + 9] << "  " << array1[i + 10] << "  " << array1[i + 11]<<" "<<array1[i+12]<<endl;



            break;

        }
    }
}
void delete_Record (){

}
void User_namefunction (){


    string Username ="";
    string password= "";
    bool loginSuccess = false;
    bool createaccountsuccessful= false;
    do {
        cout << "Username:";
        cin >> Username;
        cout << "Password";
        cin >> password;
        if (Username == "FahimAmiri" & password == "Fahim!23") {
            cout << "login sucessful ";
            loginSuccess = true;
        } else {
            cout << "Incorrect Username or password \n";
            cout << "Please try to login \n";
        }


    } while (!loginSuccess);
}

int main() {
    int User_input;


    while (true) {
        cout<<"Enter your User name and password to access search"<<endl;
        User_namefunction();
        cout<<endl;


        cout
                << "---------------------------------                                             ----------------------------------- "
                << endl;
        cout
                << "                                            please Select one of the option                                       "
                << endl;
        cout
                << "---------------------------------                                             ----------------------------------- "
                << endl;
        cout
                << "******************************************************************************************************************"
                << endl;
        cout
                << "*                                                                                                                *"
                << endl;
        cout
                << "*     1- Registrations                                                                                           *"
                << endl;
        cout
                << "*     2- Searching data base for collecting driver information based on their vehicle licence plate number       *"
                << endl;
        cout
                << "*     3- Search data By Individual Name                                                                          *"
                << endl;
        cout
                << "*     enter  0 for exiting the program                                                                           *"
                << endl;
        cout
                << "*****************************************************************************************************************"
                << endl;
        cout << "Enter you option : " << endl;
        cin >> User_input;

        if (User_input == 1) {
            registering_Drivers_info();
        }

        else if (User_input == 2) {
            search_data_base_function();
        }
        else if (User_input == 3) {
            search_by_name();
        }

        else if (User_input == 0) {
            exit(0);
        }
        else {
            cout << "wrong selection " << endl;
        }

    }
    return 0;
}
