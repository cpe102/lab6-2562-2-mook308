#include <iostream>
using namespace std;

//Dialog of the first example is given below.



int main() {
    string name,ID,movie,date,goodbye;
    int GEAR1,GEAR2;
    int year;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name.";
    cout << "\nFahsai: I think you are Engineering student. What is your student ID?\n" << name << ": ";
    getline(cin,ID);
    GEAR1 = ID[0]-48;
    GEAR2 = ID[1]-48;
    year = ((GEAR1*10)+GEAR2)-12;
    cout << "Fahsai: I think you may be GEAR " << year << " that is a really cool name.";
    cout << "Fahsai: Let's go to cinema together!!!";
    cout << "\nFahsai: What movie do you want to watch?\n" << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n" << name << ": ";
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watch " << movie <<" with you.\n" << name << ": ";
    getline(cin,goodbye);
    cout << "Fahsai: 555+ see you Next " << date << ". Bye Bye \(^ ^)/";



    return 0;
}
