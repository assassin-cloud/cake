#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void mainmenu(){
    cout << "+=======================+" << endl;
    cout << "+    RECEIPT CREATOR    +" << endl;
    cout << "+=======================+" << endl;
    cout << "1. Create Reciept" << endl;
    cout << "2. Exit" << endl;
    cout << "Input:" << endl;
}

int takeinput(){
    int x;
    cin >> x;
    return x;
}

void cinbugfix(){
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}

void receipt(string name, double amount, string ptr[], int numberofitem){
    int sizeofname = string("Name: ").size() + name.size();
    int sizeofitem = string("Items Bought: ").size();
    int sizeofamount = string("Amount: $").size() + to_string(amount).size();
    int maxsizeofitem {};
    for(int i=0;i<numberofitem;i++){
        if(ptr[i].size()>maxsizeofitem){
            maxsizeofitem = ptr[i].size();
        }
    }
    int *p = new int[4];
    int width {};
    p[0] = sizeofname;
    p[1] = sizeofitem;
    p[2] = sizeofamount;
    p[3] = maxsizeofitem;
    for(int i=0;i<4;i++){
        if(p[i]>width){
            width = p[i];
        }
    }
    cout << "|" << setfill('-') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    cout << "|" << left << setw(width) << "RECEIPT" << "|" << endl;
    cout << "|" << left << setw(width) << "Name: " + name << "|" << endl;
    cout << "|" << left << setw(width) << "Items: " << "|" << endl;
    cout << "|" << setfill('*') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    for(int i=0;i<numberofitem;i++){
        cout << "|" << left << setw(width) << string(to_string(i+1) + '.' + ptr[i]) << "|" << endl;
    }
    cout << "|" << setfill('*') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    cout << "|" << left << setw(width) << "Total Amount: $" + to_string(amount) << "|" << endl;
    cout << "|" << setfill('-') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ') << endl;
    delete[] p;
    p = nullptr;
}

void wait(){
    cout << "Press ENTER..." << endl;
    cin.ignore(1000,'\n');
    cin.get();
}

int main(){
    while(true){
        mainmenu();
        int userinput {takeinput()};
        if(cin.fail()){
            cinbugfix();
        }
        else{
            if(userinput == 1){
                cout << "Input Name:" << endl;
                string name;
                cin.ignore(1000,'\n');
                getline(cin,name);
                if(name.empty()){
                    cout << "Name cannot be empty" << endl;
                }
                else{
                    cout << "How many items bought:" << endl;
                    int numberofitem {};
                    cin >> numberofitem;
                    if(numberofitem <= 0){
                        cout << "Number of items can't be negative or zero!" << endl;
                    }
                    else{
                        string *p = new string[numberofitem];
                        bool itemempty {false};
                        cin.ignore(1000,'\n');
                        for(int i=0;i<numberofitem;i++){
                            cout << "Type the name of item:" << endl;
                            getline(cin,p[i]);
                            if(p[i].empty()){
                                cout << "Name of item can't be empty!" << endl;
                                itemempty = true;
                                break;
                            }
                        }
                        if(!(itemempty)){
                            cout << "Input the total amount:" << endl;
                            double amount {};
                            cin >> amount;
                            if(amount < 0){
                                cout << "Total amount can't be negative!" << endl;
                            }
                            else{
                                receipt(name, amount, p, numberofitem);
                                wait();
                            }
                        }
                        delete[] p;
                        p = nullptr;
                    }
                }
            }
            else if(userinput == 2){
                break;
            }
            else{
                cout << "Invalid Input!" << endl;
            }
        }
    }
}