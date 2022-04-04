#include <iostream>
#include<string>
#include <map>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
//map declared
map<string, vector<string>> dic_data;
//vec declared
vector<string>  data_vec;
vector<string> explode(const string &delimiter, const char &chacters)
{
    string key;
    vector<string> value_vec;
    //applies for ll the char in the vec
    for (string::const_iterator itr = delimiter.begin(); itr != delimiter.end(); itr++)
    {
        // if there was a matching char in itr
        if (*itr == chacters)
        {
            // applies for the rest
            if (!key.empty()) {
                //include them in the value vec
                value_vec.push_back(key);
                key.clear();
            }
        }
        else
        {
            // apply for the rest
            key += *itr;
        }
    }
    if (!key.empty())
        value_vec.push_back(key);
    return value_vec;
}

void reading_data_from_file(){
    string line;
    string value;
    //creating file object
    ifstream dictionary_data;
    //opening file form its source
    dictionary_data.open("/Users/fahimamiri/Desktop/CSC340 Assignment 03 /Data.CS.SFSU.txt", ios::in);
//if file is open
    if (dictionary_data.is_open()) {
        cout << "! Opening data file..." << endl;
        cout << "! Loading data ..." << endl;
        //getline form file
        while (getline(dictionary_data, line)){
            //cout<<line;

            vector<string> output = explode(line,'|');
            if(output.size()>0){
                value= output.at(0);
                output.erase(output.begin());
                dic_data.insert(pair<string, vector<string>>(value,output));
                //cout<<data_vec[1]<<"       "<<value<<"  "<<output[0]endl;
                //cout<<line<<"       "<<endl;
            }
        }
        //closing file if its success
        dictionary_data.close();
        cout << "! Loading data completed... " << endl;
        cout << "! cloasing data " << endl;
        cout << "\n====== DICTIONARY 340 C++ =====\n"
                "------ Keywords: 19\n"
                "------ Definitions: 61" << endl;

    }
        //if file was not able to open
    else {
        cout<<"<!>ERROR<!> ===> While reading file:\n"
              "<!>The File Did Not Opened ...."<<endl;
    }

}

string errorMassage = "PARAMETER HOW-TO,  please enter:\n"
                     " 1. A search key -then 2. An optional part of speech -then\n"
                     " 3. An optional 'distinct' -then 4. An optional 'reverse'\n";

bool IsParameters(string exist, int AtInddex)
{
    //made string of repeated words and called them when i need them
    string para2 ="<the entered 2nd parameter ";
    string para ="<the entered 3rd parameter '";
    string para4 ="the entered 4th parameter '";
    string dis_rev="<the entered 3rd parameter should be a part of speech or 'distinct' or 'reverse'.>\n";
    string rev_dis="<the entered 2nd parameter should be a part of speech or 'distinct' or 'reverse.'\n";
    if (AtInddex == 1)
    {
        //checking for the word if ther are apears as 3rd or 4rd user inputs
        if (find(data_vec.begin(), data_vec.end(), exist) == data_vec.end() || exist.compare("distinct") || exist.compare("reverse"))
        {
            //if not apeareed it will return ture
            return true;
        }
        else
        {
            cout<<para2<< exist << "' is Not a part of speech.>"<<endl;
            cout <<para2<< exist << "' is Not 'distinct'.>" << endl;
            cout <<para2<< exist << "' is Not 'reverse'.>" << endl;
            cout <<para2<< exist << "' was disregarded'.>" << endl;
            cout << rev_dis << endl;
            cout << "|"<<endl;

        }

    }
    else if (AtInddex == 2)
    {
        if (exist.compare("distinct")==0 || exist.compare("reverse")==0)
        {
            return true;
        }
        else
        {
            cout<<para<<exist << "' is Not 'distinct'.>" << endl;
            cout <<para<< exist << "' is Not 'reverse'.>" << endl;
            cout <<para<< exist << "' was disregarded'.>" << endl;
            cout << dis_rev;
            cout << "|"<<endl;
        }
    }

    else if (AtInddex == 3)
    {
        if (exist.compare("reverse")==0)
        {
            return true;
        }
        else
        {
            cout<<para4<< exist << "' is Not 'reverse'.>" << endl;
            cout << para4<< exist << "' was disregarded'.>" << endl;
            cout << "the entered 4th parameter should be 'reverse'.>" << endl;
            cout << "|"<<endl;

        }
    }
    return false;
}



void My_Results(vector<string> words, map<string, vector<string>> dic_Map)
{


    vector<string> search_vec;
    vector<string> Result_vec;
    string  search_value = "";

    cout<<"   |"<<endl;
    if ((int)words.size() == 0)
    {
        Result_vec = dic_Map["notfound"];
    }
    for (int i = 0; i < (int)words.size(); i++)
    {
        if (i == 0)
        {
            map<string, vector<string>>::iterator itr = dic_Map.find(words[i]);
            if (itr != dic_Map.end())
            {
                search_value = words[0];
                search_vec = itr->second;
                Result_vec = itr->second;
            }
            else if (words[i].compare("!q") == 0)
            {
                cout << "-----Thank You-----" << endl;
                exit(0);
            }
            else if (words[i].compare("!help") == 0)
            {
                Result_vec = dic_Map["notfound"];
            }

            else
            {
                cout << "<NOT FOUND> to be considered for next release. Thank you" << endl;

                Result_vec = dic_Map["notfound"];
            }
        }
        else if (!IsParameters(words[i], i))
        {
        }

        else if (find(data_vec.begin(), data_vec.end(), words[i]) != data_vec.end())
        {
            Result_vec.clear();
            for (string temp : search_vec)
            {
                if (temp.find(words[i]) != string::npos)
                {
                    Result_vec.push_back(temp);
                }
            }
            if (Result_vec.size() == 0)
            {
                //cout << "<NOT FOUND> to be considered for next release. Thank you" << endl;
                Result_vec = dic_Map["not listed "];
            }
            else
            {
                search_vec = Result_vec;
            }
        }
        else if (words[i].compare("distinct") == 0)
        {
            Result_vec.clear();
            for (string temp : search_vec)
            {
                if (find(Result_vec.begin(), Result_vec.end(), temp) == Result_vec.end())
                {
                    Result_vec.push_back(temp);
                }
            }
            search_vec = Result_vec;
        }
        else if (words[i].compare("reverse") == 0)
        {
            Result_vec.clear();

            // loop  for reverse
            for (int k = search_vec.size() - 1; k >= 0; k--)
            {

                Result_vec.push_back(search_vec.at(k));
            }
            search_vec = Result_vec;
        }
        else
        {
            Result_vec = dic_Map["Not listed "];
        }
    }
    for (string val : Result_vec)
    {
        int index = 0;

        index = val.find("-=>>", index);
        if (index != string::npos)
        {
            val.replace(index, 4, "]");
            cout << search_value << " [" << val << endl;
        }
        else
        {
            cout << search_value << "      " << val << endl;
        }
       }
cout<<" |"<<endl;
}
//main stars here
int main()
{
    vector<string> No_values;
    reading_data_from_file();// reading form file fucction called
    No_values.push_back(errorMassage);// error pushed
    dic_data.insert(pair<string, vector<string>>("notfound", No_values));//
    data_vec.push_back("noun");
    data_vec.push_back("verb");
    data_vec.push_back("adverb");
    data_vec.push_back("pronoun");
    data_vec.push_back("adjective");
    data_vec.push_back("preposition");
    data_vec.push_back("conjunction");
    data_vec.push_back("interjunction");
int count =0;
    while(1)//star of loop
    {count++;//count user searchs
        cout << "Search [" << count << "] :";
        string UserInput = "";
        //getting user input
        getline(cin, UserInput);
        //used for each to look start and end and change their letter to  lower case to meet the program expectation
        for_each(UserInput.begin(), UserInput.end(), [](char& charcter ) {charcter= ::tolower(charcter);});
        vector<string> Final_result = explode(UserInput, ' ');
        //calling my result and passing map as parameters
        My_Results(Final_result, dic_data);

    }//end of loop
    return 0;
}
