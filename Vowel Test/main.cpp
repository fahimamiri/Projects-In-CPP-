#include <iostream>
#include <fstream>

using namespace std;



void Checking_for_charcters(){
    int i, spacial_char, numbers, consonants, vowel;
    string user_input;
    cout<<"Enter you statment to see how many Vowels, consoants, number and spacial charcters  are used! "<<endl;
    getline (cin, user_input);

    for (i= 0; i<user_input.length(); i++) {
        if (user_input[i] == 'a' || user_input[i] == 'e' || user_input[i] == 'i' || user_input[i] == 'o' ||
            user_input[i] == 'u' || user_input[i] == 'y') {
            vowel++;
        } else if (user_input[i] == '1' || user_input[i] == '2' || user_input[i] == '3' || user_input[i] == '4' ||
                   user_input[i] == '5' || user_input[i] == '6' || user_input[i] == '7' || user_input[i] == '8' ||
                   user_input[i] == '9' || user_input[i] == '0') {
            numbers++;


        }
        else if (user_input[i]=='!'||user_input[i]=='@'||user_input[i]=='#'||user_input[i]=='$'||user_input[i]=='%'||user_input[i]=='^'||user_input[i]=='*'||user_input[i]=='('||user_input[i]==')'||user_input[i]=='+'
                 ||user_input[i]=='-'||user_input[i]=='_'){

            spacial_char++;
        }
        else if (user_input[i] != 'a' || user_input[i] == 'e' || user_input[i] == 'i' || user_input[i] == 'o' ||
                 user_input[i] == 'u' || user_input[i] == 'y') {
            consonants++;
        }


    }

    cout<<"You have used " <<vowel<<" in your statments"<<endl;
    cout<<"You have used " <<consonants<<" in your statments"<<endl;
    cout<<"You have used " <<numbers<<" in your statments"<<endl;
    cout<<"You have used " <<spacial_char<<" in your statments"<<endl;
}


int main() {

    Checking_for_charcters();
/*
    ofstream charfile;
    charfile.open ("char.txt");
    charfile<< "lover Afghanistan!23#$% .\n";
    charfile.close ();



    string line;
    ifstream infile;
    infile.open("char.txt");
    if (infile.is_open())
    {
        while(getline(infile, line)){
            cout << line << "\n";
            line ;
        }
        infile.close();
    }
    else
    {
        cout << "Hard to Find The File";
    }
*/

    return 0;
}








/*#include <iostream>
#include <string>
using namespace std;

//function defination



int main() {

    int i;
    int spcail_char;
    int Numbers;
    int consonants;
    int count;


    string user_input;
    cout << "enter your string " << endl;
    getline(cin, user_input);
    for (i = 0; i < user_input.length(); i++) {
        if (user_input[i] == 'A' || user_input[i] == 'e' || user_input[i] == 'i' || user_input[i] == 'o' ||
            user_input[i] == 'u' || user_input[i] == 'y'
            || user_input[i] == 'a' || user_input[i] == 'E' || user_input[i] == 'I' || user_input[i] == 'O' ||
            user_input[i] == 'U' || user_input[i] == 'Y') {
            count++;


        } else if (user_input[i] == 'b' || user_input[i] == 'c' || user_input[i] == 'd' || user_input[i] == 'f' ||
                   user_input[i] == 'g' || user_input[i] == 'h' || user_input[i] == 'j' || user_input[i] == 'l' ||
                   user_input[i] == 'o' || user_input[i] == 'p' || user_input[i] == 'q'
                   || user_input[i] == 'v' || user_input[i] == 'w' || user_input[i] == 'x' || user_input[i] == 'y' ||
                   user_input[i] == 'z'
                   || user_input[i] == 'B' || user_input[i] == 'C' || user_input[i] == 'D' || user_input[i] == 'F' ||
                   user_input[i] == 'G'
                   || user_input[i] == 'H' || user_input[i] == 'J' || user_input[i] == 'L' || user_input[i] == 'O' ||
                   user_input[i] == 'P'
                   || user_input[i] == 'Q' || user_input[i] == 'V' || user_input[i] == 'W' || user_input[i] == 'X' ||
                   user_input[i] == 'Y' || user_input[i] == 'Z') {
            consonants++;
        } else if (user_input[i] == '1' || user_input[i] == '2' || user_input[i] == '3' || user_input[i] == '4' ||
                   user_input[i] == '5' || user_input[i] == '6' || user_input[i] == '7' || user_input[i] == '8' ||
                   user_input[i] == '9' || user_input[i] == '0') {

            Numbers++;
        }
        else if (user_input[i] == '!' || user_input[i] == '@' || user_input[i] == ',' || user_input[i] == '#' ||
                   user_input[i] == '$' || user_input[i] == '%' || user_input[i] == '^' || user_input[i] == '&' ||
                   user_input[i] == '*'
                   || user_input[i] == '(' || user_input[i] == ')' || user_input[i] == '_' || user_input[i] == '-' ||
                   user_input[i] == '+' || user_input[i] == '=' || user_input[i] == '|' || user_input[i] == '?'
                   || user_input[i] == '>' || user_input[i] == '<' || user_input[i] == '/') {
            spcail_char++;
        }


    }


    cout << "Total of Vowel                " << count << " " << endl;
    cout << "Total  of consonants are       " << consonants << endl;
    cout << "To Numeric is                  " << Numbers <<endl;


         return(0);
}

*/