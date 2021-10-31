#include <iostream>
#include <string>

using namespace std;

int missing_number(int x);

int main(){
    cout << missing_number(0) << endl;
    cout << missing_number(1) << endl;
    cout << missing_number(2) << endl;
    cout << missing_number(3) << endl;
    cout << missing_number(4) << endl;
    cout << missing_number(5) << endl;
    cout << missing_number(6) << endl;
    cout << missing_number(7) << endl;
    cout << missing_number(8) << endl;
    cout << missing_number(9) << endl;
    cout << missing_number(10) << endl;
    cout << missing_number(11) << endl;
    cout << missing_number(12);
    return 0;
}

int missing_number(int x){
    if(x == 0){//when x is 0-4, no real pattern
        return 2;
    }
    else if(x == 1){
        return 5;
    }
    else if(x == 2){
        return 35;
    }
    else if(x == 3){
        return 282;
    }
    else if(x == 4){
        return 2600;
    }
    string base = "3162277660168379331998893544432718533719555139325216826857504853";
    if(x % 2 == 0){//x is even
        string solution = "25";
        int amountOfZeros = (x / 2) - 3;
        for(int i = 0; i < amountOfZeros; ++i){
            solution += "0";
        }
        solution += "1000";
        for(int i = 0; i < amountOfZeros; ++i){
            solution += "0";
        }
        return stoi(solution);
    }
    else{//x is odd
        string solution = "25";
        int amountOfZeros = (x / 2) - 2;
        for(int i = 0; i < amountOfZeros; ++i){
            solution += "0";
        }
        int depthOfBase = 3 + ((x - 5) / 2);
        string basePart = base.substr(0, depthOfBase);
        int basePartInt = stoi(basePart) + 1;
        solution += to_string(basePartInt);
        return stoi(solution);
    }
}