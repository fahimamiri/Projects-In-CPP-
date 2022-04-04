#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include <iomanip>
using namespace std;

//G-data types declared
const int random_number = 1000;
float Arr[random_number];


//reading the data from file
//declaring a  function
void random_numnbers_readed_from_file(){
    int count;
    // reading form and creating object
    ifstream file;
    file.open("/Users/FahimAmiri/ascending_mostly_sorted.txt");
    // descending_mostly_sorted.txt is the name fie that reading the data form

    count= 0;
    while (!file.eof()){//will check up the end of file
        file>>Arr[count];
        file.ignore(1000,','); // this fucntion will ignore ,   while reading form file.

        count++;
    }
    // loop the filling  the arrya
    for ( int i =0; i<random_number; i++){
        cout<<Arr[i]<<" ";
    }

}

//decalaring  bubble function
void Insertion_sort() {
    //declaring ints.
    float temp;
    int j;
    //this loop will iterates
    for (int i = 0; i <1000; i++) {
        //Assigned element that are in index i to J.
        j = i;
        //this while loop will see if the element in the array of J
        // that are greather then zero and[j-1]  will use the zero index
        // t swap index ilements to arry [j]
        while (j > 0 && Arr[j - 1] > Arr[j]) {
            temp = Arr[j];
            Arr[j] = Arr[j - 1];
            Arr[j - 1] = temp;
            j--;
        }
    }
    cout << "Arry after sort" << endl;

// this for loop will file the Array
    for (int i = 0; i < 1000; i++) {
        cout << Arr[i] << ", "<<endl;
    }
    cout << endl;
}

int main() {
    clock_t
            time = clock();
    cout << "Random Number readied form File  " << endl;
    random_numnbers_readed_from_file();
    cout << "The Random Number Sort it with Insertion Sort" << endl;
    Insertion_sort();
    cout << "The Excution Time Of This Program is " << ((float)time)/CLOCKS_PER_SEC << " Seconds " << endl;


    return 0;

}
