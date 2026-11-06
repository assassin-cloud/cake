#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void mainmenu(){
    int titlesize = string("RECEIPT CREATOR").size();
    cout << "|" << setfill('-') << setw(12+titlesize) << right << "|" << endl;
    cout << setfill(' ');
    cout << "|" << setw(6+titlesize) << "RECEIPT CREATOR" << setw(6) << right << "|" << endl;
    cout << "|" << setfill('-') << setw(12+titlesize) << right << "|" << endl;
    cout << setfill(' ');
    cout << "1. Create Receipt" << endl;
    cout << "2. Option" << endl;
    cout << "3. Exit" << endl;
    cout << "Input:" << endl;
}

void optionmenu(string symbol){
    int titlesize = string("OPTION").size();
    cout << "|" << setfill('-') << setw(12+titlesize) << right << "|" << endl;
    cout << setfill(' ');
    cout << "|" << setw(6+titlesize) << "OPTION" << setw(6) << right << "|" << endl;
    cout << "|" << setfill('-') << setw(12+titlesize) << right << "|" << endl;
    cout << setfill(' ');
    cout << "1. Change currency symbol (Current Symbol: " << symbol << " )" << endl;
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

void receipt(string name, double amount, string ptr[], double cost[],int numberofitem, double discount[], double originalprice[], double taxrate, double taxamount, double grandtotal, char taxuserinput, string str){
    int sizeofname = string("Name: " + name).size();
    int sizeofamount = string("Subtotal: " + str + to_string(amount)).size();
    int sizeoftax = string("Tax Rate: " + to_string(taxrate) + "%").size();
    int sizeoftaxamount = string("Tax Amount: " + str + to_string(taxamount)).size();
    int sizeoftotal = string("Grand Total: " + str + to_string(grandtotal)).size();
    int maxsizeofitem {};
    for(int i=0;i<numberofitem;i++){
        if(string(to_string(i+1) + '.' + ptr[i] + ": " + str + to_string(cost[i])).size()>maxsizeofitem){
            maxsizeofitem = string(to_string(i+1) + '.' + ptr[i] + ": " + str + to_string(cost[i])).size();
        }
    }
    int p[6]{sizeofname, sizeofamount, maxsizeofitem, sizeoftax, sizeoftaxamount, sizeoftotal};
    int width {};
    for(int i=0;i<6;i++){
        if(p[i]>width){
            width = p[i];
        }
    }
    width+=string("Discounted Price:").size();
    cout << "|" << setfill('-') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    cout << "|" << left << setw(width) << "RECEIPT" << "|" << endl;
    cout << "|" << left << setw(width) << "Name: " + name << "|" << endl;
    cout << "|" << left << setw(width-string("Cost:").size()) << "Items:" << right << "Cost:" << "|" << endl;
    cout << "|" << setfill('*') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    for(int i=0;i<numberofitem;i++){
        cout << "|" << left << setw(width-string(str + to_string(originalprice[i])).size()) << string(to_string(i+1) + '.' + ptr[i] + ":") << right << string(str + to_string(originalprice[i])) << "|" << endl;
        if(discount[i]!=0.00){
            cout << "|" << left << setw(width-string(to_string(discount[i]) + "%").size()) << "Discount:" << right << string(to_string(discount[i]) + "%") << "|" << endl;
            cout << "|" << left << setw(width-string(str + to_string(cost[i])).size()) << "Discounted Price:" << right << string(str + to_string(cost[i])) << "|" << endl;
        }
        cout << "|" << setw(width+1) << "|" << endl;
    }
    cout << "|" << setfill('*') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    if(taxuserinput == 'y'){
        cout << "|" << left << setw(width) << string("Subtotal: " + str + to_string(amount)) << "|" << endl;
        cout << "|" << left << setw(width) << string("Tax Rate: " + to_string(taxrate) + "%") << "|" << endl;
        cout << "|" << left << setw(width) << string("Tax Amount: " + str + to_string(taxamount)) << "|" << endl;
        cout << "|" << left << setw(width) << string("Grand Total: " + str + to_string(grandtotal)) << "|" << endl;
    }
    else{
        cout << "|" << left << setw(width) << string("Grand Total: " + str + to_string(grandtotal)) << "|" << endl;
    } 
    cout << "|" << setfill('-') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ') << endl;
}

void wait(){
    cout << "Press ENTER..." << endl;
    cin.ignore(1000,'\n');
    cin.get();
}

int main(){
    string symbol {"$"};
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
                            double *ptr = new double[numberofitem];
                            bool canrun {true};
                            double subtotal {};
                            double discount {};
                            for(int i=0;i<numberofitem;i++){
                                cout << "Input the cost of " << p[i] << ":" << endl;
                                cin >> ptr[i];
                                if(cin.fail()){
                                    cinbugfix();
                                    canrun = false;
                                    break;
                                }
                                else if(ptr[i] < 0){
                                    cout << "Price/cost of item can't be negative!" << endl;
                                    canrun = false;
                                    break;
                                }
                            }
                            if(canrun){
                                double* originalprice = new double[numberofitem];
                                double* discount = new double[numberofitem];
                                for(int i=0;i<numberofitem;i++){
                                    originalprice[i] = ptr[i];
                                    discount[i] = 0.00;
                                }
                                while(true){
                                    cout << "Does any item have discount(y) or no discount(n):" << endl;
                                    char inputfromuser;
                                    cin >> inputfromuser;
                                    if(cin.fail()){
                                        cinbugfix();
                                    }
                                    else{
                                        if(inputfromuser == 'y'){
                                            for(int i=0;i<numberofitem;i++){
                                                cout << i+1 << "." << p[i] << endl;
                                            }
                                            cout << "Input the index of item which you wanna add discount to:" << endl;
                                            int indexofitem {takeinput()};
                                            if(indexofitem<1 || indexofitem>numberofitem){
                                                cout << "Invalid index!" << endl;
                                            }
                                            else{
                                                indexofitem-=1;
                                                cout << "Input the discount percentage e.g 10%(don't include percentage sign in input just type e.g 10):" << endl;
                                                cin >> discount[indexofitem];
                                                if(discount[indexofitem] <= 0 || discount[indexofitem] > 100){
                                                    cout << "Discount can't be greater than 100 or less than or equal to 0" << endl;
                                                }
                                                else{
                                                    ptr[indexofitem] = originalprice[indexofitem]* (1.0-(discount[indexofitem]/100.0));
                                                }
                                            }
                                        }
                                        else if(inputfromuser == 'n'){
                                            break;
                                        }
                                    }
                                }
                                for(int i=0;i<numberofitem;i++){
                                    subtotal+=ptr[i];
                                }
                                cout << "Type (y) to add tax or (n or any char character) to not add tax:" << endl;
                                char taxuserinput;
                                cin >> taxuserinput;
                                double taxrate{};
                                double taxamount {};
                                double grandtotal {};
                                if(taxuserinput=='y'){
                                    while(true){
                                        cout << "Please input tax rate e.g 18%(don't include % sign) or default(5%):" << endl;
                                        cin >> taxrate;
                                        if(cin.fail()){
                                            cinbugfix();
                                            continue;
                                        }
                                        else{
                                            if(taxrate>100 || taxrate<0){
                                                cout << "Tax rate can't be less than 0 or greater than 100!" << endl;
                                                continue;
                                            }
                                            else{
                                                taxamount = subtotal*(taxrate/100);
                                                grandtotal = subtotal+taxamount;
                                                break;
                                            }
                                        }
                                    }
                                }
                                else{
                                    grandtotal = subtotal;
                                }
                                receipt(name, subtotal, p, ptr, numberofitem, discount, originalprice, taxrate, taxamount, grandtotal, taxuserinput, symbol);
                                wait();
                                delete[] originalprice;
                                originalprice = nullptr;
                                delete[] discount;
                                discount = nullptr;
                            }
                            delete[] ptr;
                            ptr = nullptr;
                        }
                        delete[] p;
                        p = nullptr;
                    }
                }
            }
            else if(userinput == 2){
                while(true){
                    optionmenu(symbol);
                    int optioninput {takeinput()};
                    if(cin.fail()){
                        cinbugfix();
                    }
                    else{
                        if(optioninput == 1){
                            cout << "Type a new symbol:" << endl;
                            string new_symbol;
                            cin >> new_symbol;
                            if(cin.fail()){
                                cinbugfix();
                                continue;
                            }
                            else{
                                if(new_symbol.size()>3 ||new_symbol.empty()){
                                    cout << "Currency symbol can only be less than 3 letters/char! or empty(UTF-8 input is not supported for now)" << endl;
                                    continue;
                                }
                                else{
                                    symbol = new_symbol;
                                    cout << "Currency symbol has been changed!" << endl;
                                }
                            }
                        }
                        else if(optioninput == 2){
                            break;
                        }
                        else{
                            cout << "Invalid Input!" << endl;
                        }
                    }
                }
            }
            else if(userinput == 3){
                break;
            }
            else{
                cout << "Invalid Input!" << endl;
            }
        }
    }
}