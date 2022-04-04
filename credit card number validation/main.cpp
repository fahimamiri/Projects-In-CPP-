#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
bool isvalidcc(const string card_num ) {
    //assigned the card lenght
    int card_lenght = card_num.length();
    //set my condition to meet the program requirement
    if (card_lenght >= 13 || card_lenght <= 16) {
        //
        if (card_num[0] == '4' || card_num[0] == '5' || card_num[0] == '6' && card_num[1] == '37') {
            string store = card_num;
            int val1 = 0;
            int val2 = 0;
//loops though card numbers
            for (int i = card_lenght-2; i>= 0; i-= 2) {

//cout<<cars_num[i]<<" card number      "<<endl;
                //double it
                val2 = (card_num[i] - '0') * 2;
                //to find our which one them has reminder of 1
                val2 = val2 % 10 + (val2 / 10) % 10;
                // cout<<val2<<"has reminder"<<endl;    ;
                val1 += val2;
                store[i] = (val2 + '0');
            }

            for (int i = card_lenght - 1; i >= 0; i -= 2) {
                val1 += card_num[i] - '0';



            }
            //that has 0 reminder
            return val1 % 10 == 0;
        }
    }

    return false;
}


int main()
{
	//
	// PLEASE DO NOT CHANGE function main
	//
	vector<string> cardnumbers = {
		 "371449635398431", "4444444444444448", "4444424444444440", "4110144110144115",
		"4114360123456785", "4061724061724061", "5500005555555559", "5115915115915118",
		"5555555555555557", "6011016011016011", "372449635398431", "4444544444444448",
		"4444434444444440", "4110145110144115", "4124360123456785", "4062724061724061",
		"5501005555555559", "5125915115915118", "5556555555555557", "6011116011016011",
		 "372449635397431", "4444544444444448", "4444434444544440", "4110145110184115",
		"4124360123457785", "4062724061724061", "5541005555555559", "5125115115915118",
		"5556551555555557", "6011316011016011"
	};

    int i;

    //
    vector<string>:: iterator itr;
    for(i =1, itr= cardnumbers.begin();itr !=cardnumbers.end();++itr,i++)
	 {
		cout << setw(2)  << i << " "
			 << setw(20) << *itr
			 << ((isvalidcc(*itr)) ? " is valid" : " is not valid") << endl;
	}

	return 0;
}


