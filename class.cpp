#include <iostream>
#include <string>

using namespace std;

class Chajnik {
private:
    string name;
    string forma;
    string type;
    int year;
    int maxliter;

public:
    void data(string n, string f, string t, int y, int ml) {
        name = n;
        forma = f;
        type = t;
        year = y;
        maxliter = ml;
    }
    void PrintInfo(){
        cout << "Name: " << name << "\n" << "Forma: " << forma << "\n" << "Type: "
            << type << "\n" << "Year: " << year <<"\n "<< "Max liter : " << maxliter << " ml";

    }

    void chajnik_on() {
        cout << "Chajnik ON";

    }

    void chajnik_off() {
        cout << "Chajnik OFF";
    }


   


};


class Fan {
private:
    string name;
    string material;
    string producer;
    int year;
    int power;
    bool state;
public:
    void getdata_fun(string n, string m, string pr, int y, int p, bool s) {
        name = n;
        material = m;
        producer = pr;
        year = y;
        power = p;
        state = s;
    }

    void on_fan() {
        state = true;
        cout << "Fan ON\n";

    }

    void off_fan() {
        state = false;
        cout << "Fan OFF\n";

    }

    void PrintInfo() {
        cout << "Name: " << name << "\n" << "Material: " << material << "\n" << "Producer: " << producer << "\n"
            << "Year: " << year << "\n" << "Power: " << power << " Wt" << "\n";
        cout << "state: ";
        if (state) {
            cout << "ON\n";

        }
        else {
            cout << "OFF\n";
        }
    }

    bool on(){
        return state;
    }
    

};

class Chair {
private:
    string material;
    string color;
    int legs;
    bool back;
    int year;
public:
    void setData(string m, string c, int l, bool b, int y) {
        material = m;
        color = c;
        legs = l;
        back = b;
        year = y;
    }

    void printInfo() {
        cout << "Material: " << material << "\n"
            << "Color: " << color << "\n"
            << "Legs: " << legs << "\n"
            << "Year: " << year << "\n";
        cout << "Back:";
        if (back) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }

    }

    void sitDown() {
        cout << "You sit on chair\n";
    }

    void standUp() {
        cout << "You stand up from chair\n";
    }

    bool comfort() {
        return back;
    }
};


int main()
{
    Chajnik mychajnik;

    mychajnik.data("Maestro", "Round", "Electrical", 2023, 2.5);
    mychajnik.PrintInfo();
    cout << "\n";
    mychajnik.chajnik_on();
    cout << "\n";
    mychajnik.chajnik_off();
    cout << "\n";
    cout << "\n";

    Fan my_fan;

    my_fan.getdata_fun("Milla house", "Metal", "China", 2024, 50, false);
    my_fan.on_fan();
    if (my_fan.on()) {
        cout << "Fan is ON\n";
    }
    else {
        cout << "Fan is OFF\n";
    }
    my_fan.PrintInfo();

    cout << "\n";
    cout << "\n";

    Chair my_chair;

    my_chair.setData("Plastic", "White", 4, true, 2019);
    my_chair.printInfo();

    my_chair.sitDown();

    if (my_chair.comfort()) {
        cout << "Chair is comfortable\n";
    }
    else {
        cout << "Chair is not comfortable\n";
    }

    my_chair.standUp();

}

