#include <iostream>
#include <cstdlib>
#include <string>
#include "string"
#include <ctime>
#include <fstream>

using namespace std;

class Mulitiple_algorithms
{
public:
//declaring array
    int Arr[1000];
    void  out_put_all_values();
    void  out_the_sum_of_all_values();
    void  out_the_all_odd_numbers ();
    void  out_the_all_even_numbers ();
    void  Linear_search();
    void  Sum_odds ();
    void  First_values_in_arry ();
    void  Last_value_in_the_arry();
    void  Max_number_in_arry();
    void Lowest_number_in_arry ();
    void Buble_sort();


    };
void Mulitiple_algorithms ::out_put_all_values() {
    ifstream random_number("rand.txt");
    if (!random_number) {
        cout<<"Can not open the file "<<endl;
    }
    srand(time(0)); // this function will generate number
    // based on the time if i didnt put this so there will
    // one number in every arr element
    for(int i =0; i <=1000; i++){
        Arr[i] = rand()%1000;   // store 1000 random numbers in array
    }
    for(int j =0; j <=1000; j++){
        cout<< j <<"      "<<Arr[j]<<endl;
    }
    random_number.close();
}

//this function will out the summ of all values that are in the array
// loop will help in going to every element and add by each other.
//the sum of all value will be stored in the int sum.
void Mulitiple_algorithms::out_the_sum_of_all_values(){
int sum_of_all_numbers;

for(int i =0; i<=1000;i++){
    sum_of_all_numbers = sum_of_all_numbers + Arr[i];
}
cout<<"The Sum All Number in th Array is" << sum_of_all_numbers<<endl;
}
//this function will out put the odd number is the array
void Mulitiple_algorithms::out_the_all_odd_numbers(){
    for(int k=0; k<=1000;k++){
        Arr[k] = (rand()%1000)+1;
    }
cout << "The odd numbers in the array " << endl;

    for (int i = 0; i <= 1000; i++) {
        if (Arr[i] % 2 !=0 ) {
            cout << Arr[i]<<",";

        }

}

}
void Mulitiple_algorithms::out_the_all_even_numbers() {
    for(int k=0; k<=1000;k++){
        Arr[k] = (rand()%1000)+1;
    }
    cout << "The even numbers in the array " << endl;
    for (int i = 0; i <= 1000; i++) {
        if (Arr[i] % 2 == 0) {
            cout << Arr[i] << ",";
        }

    }
}
void Mulitiple_algorithms::Linear_search() {


    srand(time(0)); // this function will generate number
    // based on the time if i didnt put this so there will
    // one number in every arr element
    for(int i =0; i <=1000; i++){
        Arr[i] = rand()%1000;   // store 1000 random numbers in array
    }
    for(int j =0; j <=1000; j++){
        cout<< j <<"      "<<Arr[j]<<endl;
    }
    int Search_value, i;
    cout << "Enter Key To Search  in Array";
    cin >> Search_value;
    for (i = 0; i < 1000; i++) {
        if (Search_value == Arr[i]) {
            cout << "Key Found At Index Number :  " << i << endl;
            break;
        }
    }
    if (i != 1000) {
        cout << "KEY FOUND at index :  " << i<<endl;
    } else {
        cout << "KEY NOT FOUND in Array  "<<endl;
    }
}
void Mulitiple_algorithms::Sum_odds() {
  int sum;
  for(int i =0; i<=1000;i++){
      if (Arr[i] %2==1)
      {
          sum = sum +Arr[i];
      }

  }
    cout<<"The Sum of All odd number is =  "<<sum <<endl;
}
void Mulitiple_algorithms::First_values_in_arry() {
    for(int k=0; k<=1000;k++){
        Arr[k] = (rand()%1000)+1;
    }
    cout<<"The first element in Arry i s= "<<Arr[0]<<endl;
}
void Mulitiple_algorithms::Last_value_in_the_arry() {
    for(int k=0; k<=1000;k++){
        Arr[k] = (rand()%1000)+1;
    }
    cout << "The Last  element in Arry is= " << Arr[1000] << endl;
}
void Mulitiple_algorithms::Max_number_in_arry() {
    for(int k=0; k<=1000;k++){
        Arr[k] = (rand()%1000);
    }
int high= Arr[0] ;
for ( int i = 0 ; i <=1000 ;i++){
    if (Arr[i]>high){
        high=Arr[i];
    }
}
  cout << "The Max  element in Arry i s= " << high << endl;
}
void Mulitiple_algorithms::Lowest_number_in_arry() {
    for(int k=0; k<=1000;k++){
        Arr[k] = (rand()%1000);
    }
    int low= Arr[0] ;
    for ( int i = 0 ; i <=1000 ;i++){
        if (Arr[i]<low){
            low=Arr[i];
        }
    }
    cout << "The Max  element in Arry i s= " << low << endl;
}
void Mulitiple_algorithms::Buble_sort() {
    int i ,j;
    for(int k=0; k<=1000;k++){
        Arr[k] = (rand()%1000);
    }

    for (i = 0; i <= 998; i++) {
        for (j = i + 1; j < 999; j++) {
            int temp;
            if (Arr[i] > Arr[j]) {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;

            }
        }
    }
    for (i = 0; i <= 998; i++) {
        cout << Arr[i]<<",";
    }
cout<<endl;
}

int main() {



while (true) {

    int User_input;
    cout << "**************************************************************\n"
            " 1- Output All values\n"
            " 2- Out the SUM of All values\n"
            " 3- Out the All ODD numbers\n"
            " 4- Out the All EVEN numbers\n"
            " 5- Linear search\n"
            " 6- Sum ODDs\n"
            " 7- First values in array\n"
            " 8- Last value in the array\n"
            " 9- Max number in aray;\n"
            " 10-Lowest number in array\n"
            " 11-Buble sort\n"
            "**************************************************************" << endl;


    cin >> User_input;
    if (User_input == 1) {
        Mulitiple_algorithms connect;
        connect.out_put_all_values();
    } else if (User_input == 2) {
        Mulitiple_algorithms connect;
        connect.out_the_sum_of_all_values();
    } else if (User_input == 3) {
        Mulitiple_algorithms connect;
        connect.out_the_all_odd_numbers();
    } else if (User_input == 4) {
        Mulitiple_algorithms connect;
        connect.out_the_all_even_numbers();
    } else if (User_input == 5) {
        Mulitiple_algorithms connect;
        connect.Linear_search();
    } else if (User_input == 6) {
        Mulitiple_algorithms connect;
        connect.Sum_odds();
    } else if (User_input == 7) {
        Mulitiple_algorithms connect;
        connect.First_values_in_arry();
    } else if (User_input == 8) {
        Mulitiple_algorithms connect;
        connect.Last_value_in_the_arry();
    } else if (User_input == 9) {
        Mulitiple_algorithms connect;
        connect.Max_number_in_arry();
    } else if (User_input == 9) {
        Mulitiple_algorithms connect;
        connect.Max_number_in_arry();
    } else if (User_input == 10) {
        Mulitiple_algorithms connect;
        connect.Lowest_number_in_arry();
    } else if (User_input == 11) {
        Mulitiple_algorithms connect;
        connect.Buble_sort();
    } else
        cout << "worng option " << endl;
}
    return 0;
}
