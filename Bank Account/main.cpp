#include<iostream>
#include <string>
#include <fstream>
using namespace std;


//declaring bank account  class in here
class Bank_account
{
private:
    float Acc_balance[50]; //declearing an Array that will sotore the account in baland in it
    int Acc_balance_counter=-1;// this will truck my Arry of balance
    float Amount;
    int count;// keeping truck of thw while loop

public:

    Bank_account(){
        /*ifstream read;

        read.open("accfile.txt");
        if(!read.is_open()){
            exit(EXIT_FAILURE);
        }

       while(!read.eof()){
        read>>Acc_balance[count];
          count++;
        }*/

    }

    // this function is to deposit the balance
    void deposit_balanc()
    {
        cout<<"\nplease enter the amount you want to Deposit:";
        cin>>Amount;
        Acc_balance_counter ++;// trucking the array
        Acc_balance[Acc_balance_counter]=Amount;//  money will be store in this Arry
    }
    // withdrawal function is used for with drwal amount
    void set_withdrawal()
    {
        // whill withdraw when the amount is greather then zero
        if(Acc_balance_counter<0)
        {
            // if the amont  is not greather then zero this massage will presented
            cout<<"\nnot enough funds!"<<endl;
        }
        else
        {
            cout<<"\nplease enter the amount you want to withdrawal:";
            cin>>Amount;
            Amount=Amount*-1;
            Acc_balance_counter ++;
            Acc_balance[Acc_balance_counter]=Amount;
        }
    }
// this fucntion will display balance
    void display_balance()
    {
        int sum=0;
        for(int i=0;i<=Acc_balance_counter;i++)
        {
            sum = sum+Acc_balance[i];
        }
        cout<<"\nyour current balance is:"<<sum<<endl;
    }

    void get_w_record()
    {
        cout <<"your withdrawals:";
        for(int i=0;i<=Acc_balance_counter;i++)
        {
            if (Acc_balance[i]<=0)
            {
                cout<<Acc_balance[i]<<",";

            }
        }
    }
//fucntion will display all deposite
    void Display_desposits ()

    {
        cout <<"your deposits:";
        for(int i=0;i<=Acc_balance_counter;i++)
        {
            if (Acc_balance[i]>=0)
            {
                cout<<Acc_balance[i]<<",";

            }
        }

    }

    void file_save(){
        ofstream file;
        file.open("accfile.txt");
        for(int i=0; i<=Acc_balance_counter;i++){
            file<<Acc_balance[i]<<" ";
            file.close();
        }

    }




};

class menu{

    char User_input;
    char x;

public:

    void run(){
        cout<<"here"<<endl;
        Bank_account b;
        Bank_account obj;
        // keeping the programe running till user decides to quite
        //giving the user menu options to select from
        do {
            // user prompt
            cout <<
                 "\n-------------------------------Select on of the option----------------------------------*"
                 "\n***************************************************************************************"
                 "\n*        Bank Account Program:                                                        *"
                 "\n*                                                                                     *"
                 "\n*                                                                                      *"
                 "\n*    1- Make a Deposit                                                                *"
                 "\n*    2- Make a Withdrawal                                                             *"
                 "\n*    3- OutPutBALANCE                                                                 *"
                 "\n*    5- Output All Deposits                                                           *"
                 "\n*    6- Quit                                                                          *"
                 "\n*                                                                                     *"
                 "\n***************************************************************************************"<<endl;

            cin >> User_input;
            Bank_account obj;
            // user seletion options
            if (User_input == '1') {
                cout<<"you Have selected Deposit a first choice "<<endl;
                obj.deposit_balanc();

            } else if (User_input =='2') {
                obj.set_withdrawal();

            } else if (User_input =='3') {
                obj.get_w_record();

            } else if (User_input == '4'){
                obj.Display_desposits();

            } else if (User_input == '5'){
                obj.display_balance();

            } else if (User_input == '6'){
                obj.file_save();
                exit(0);
            }
            else{
                cout<<"Invalid selection"<<endl;
            }
            cout <<"Do you want another run(Y/N)"<<endl;
            cin>>x;
        }

        while(x==User_input);



    }



};

int main(){

    menu l;
    l.run();
}