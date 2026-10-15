#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void mainmenu(){
    cout << "+=======================+" << endl;
    cout << "+    RECIEPT CREATOR    +" << endl;
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

void reciept(string name, int amount, string item){
    int sizeofname = string("Name: ").size() + name.size();
    int sizeofitem = string("Item Bought: ").size() + item.size();
    int sizeofamount = string("Amount: $").size() + to_string(amount).size();
    int *p = new int[3];
    int width {};
    p[0] = sizeofname;
    p[1] = sizeofitem;
    p[2] = sizeofamount;
    for(int i=0;i<3;i++){
        if(p[i]>width){
            width = p[i];
        }
    }
    cout << "|" << setfill('-') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    cout << "|" << left << setw(width) << "RECIEPT" << "|" << endl;
    cout << "|" << left << setw(width) << string("Name: " + name) << "|" << endl;
    cout << "|" << left << setw(width) << string("Item Bought: " + item) << "|" << endl;
    cout << "|" << left << setw(width) << string("Amount: $" + to_string(amount)) << "|" << endl;
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
                    cout << "Input Name of item:" << endl;
                    string item1;
                    getline(cin,item1);
                    if(item1.empty()){
                        cout << "Name of item cannot be empty" << endl;
                    }
                    else{
                        cout << "Input amount:" << endl;
                        int amount {takeinput()};
                        if(amount <= 0){
                            cout << "Amount can't be negative or zero" << endl;
                        }
                        else{
                            reciept(name, amount, item1);
                            wait();
                        }
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