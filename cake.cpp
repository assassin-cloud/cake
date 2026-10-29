#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void mainmenu(){
    cout << "+=======================+" << endl;
    cout << "+    RECEIPT CREATOR    +" << endl;
    cout << "+=======================+" << endl;
    cout << "1. Create Receipt" << endl;
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

void receipt(string name, double amount, string ptr[], double cost[],int numberofitem, double discount[], double originalprice[], double taxrate, double taxamount, double grandtotal, char taxuserinput){
    int sizeofname = string("Name: ").size() + name.size();
    int sizeofamount = string("Subtotal: $").size() + to_string(amount).size();
    int sizeoftax = string("Tax Rate: " + to_string(taxrate) + "%").size();
    int sizeoftaxamount = string("Tax Amount: $").size() + to_string(taxamount).size();
    int sizeoftotal = string("Grand Total: $").size() + to_string(grandtotal).size();
    int maxsizeofitem {};
    for(int i=0;i<numberofitem;i++){
        if(string(to_string(i+1) + '.' + ptr[i] + ": " + "$" + to_string(cost[i])).size()>maxsizeofitem){
            maxsizeofitem = string(to_string(i+1) + '.' + ptr[i] + ": " + "$" + to_string(cost[i])).size();
        }
    }
    int *p = new int[6];
    int width {};
    p[0] = sizeofname;
    p[1] = sizeofamount;
    p[2] = maxsizeofitem;
    p[3] = sizeoftax;
    p[4] = sizeoftaxamount;
    p[5] = sizeoftotal;
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
        cout << "|" << left << setw(width-string("$" + to_string(originalprice[i])).size()) << string(to_string(i+1) + '.' + ptr[i] + ":") << right << string("$" + to_string(originalprice[i])) << "|" << endl;
        if(discount[i]!=0.00){
            cout << "|" << left << setw(width-string(to_string(discount[i]) + '%').size()) << "Discount:" << right << string(to_string(discount[i]) + "%") << "|" << endl;
            cout << "|" << left << setw(width-string('$' + to_string(cost[i])).size()) << "Discounted Price:" << right << string("$" + to_string(cost[i])) << "|" << endl;
        }
        cout << "|" << setw(width+1) << "|" << endl;
    }
    cout << "|" << setfill('*') << setw(width+1) << right << "|" << endl;
    cout << setfill(' ');
    if(taxuserinput == 'y'){
        cout << "|" << left << setw(width) << string("Subtotal: $" + to_string(amount)) << "|" << endl;
        cout << "|" << left << setw(width) << string("Tax Rate: " + to_string(taxrate) + "%") << "|" << endl;
        cout << "|" << left << setw(width) << string("Tax Amount: $" + to_string(taxamount)) << "|" << endl;
        cout << "|" << left << setw(width) << string("Grand Total: $" + to_string(grandtotal)) << "|" << endl;
    }
    else{
        cout << "|" << left << setw(width) << string("Grand Total: $" + to_string(grandtotal)) << "|" << endl;
    } 
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
                                                    ptr[indexofitem] *= (1.0-(discount[indexofitem]/100.0));
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
                                    cout << "Please input tax rate e.g 18%(don't include % sign) or default(5%):" << endl;
                                    cin >> taxrate;
                                    if(taxrate>100 || taxrate<0){
                                        cout << "Tax rate can't be less than 0 or greater than 100!" << endl;
                                    }
                                    else{
                                        taxamount = subtotal*(taxrate/100);
                                        grandtotal = subtotal+taxamount;
                                    }
                                }
                                else{
                                    grandtotal = subtotal;
                                }
                                receipt(name, subtotal, p, ptr, numberofitem, discount, originalprice, taxrate, taxamount, grandtotal, taxuserinput);
                                wait();
                                delete[] originalprice;
                                originalprice = nullptr;
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
                break;
            }
            else{
                cout << "Invalid Input!" << endl;
            }
        }
    }
}