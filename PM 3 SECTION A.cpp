#include <iostream>
#include <string>
using namespace std;

// =====================================
// PA0101 Parent Class: Father
// =====================================
class Father {
protected:
    string surname;
    int age;

public:
    // PA0105 Constructor
    Father(string s, int a) {
        surname = s;
        age = a;
    }

    void displayFatherInfo() {
        cout << "Surname: " << surname << endl;
        cout << "Age: " << age << endl;
    }

    // PA0108 Method for overriding
    virtual void introduce() {
        cout << "I am the Father." << endl;
    }
};

// =====================================
// Child Class: Son
// =====================================
class Son : public Father {
private:
    string hobby;

public:
    Son(string s, int a, string h)
        : Father(s, a) {
        hobby = h;
    }

    void displaySon() {
        displayFatherInfo();
        cout << "Hobby: " << hobby << endl;
    }

    void introduce() override {
        cout << "I am the Son." << endl;
    }
};

// =====================================
// Child Class: Daughter
// =====================================
class Daughter : public Father {
private:
    string favouriteSubject;

public:
    Daughter(string s, int a, string subject)
        : Father(s, a) {
        favouriteSubject = subject;
    }

    void displayDaughter() {
        displayFatherInfo();
        cout << "Favourite Subject: "
             << favouriteSubject << endl;
    }

    void introduce() override {
        cout << "I am the Daughter." << endl;
    }
};

// =====================================
// PA0107 Rectangle Class
// =====================================
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
};

// =====================================
// PA0110 Book Class
// =====================================
class Book {
private:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void displayBook() {
        cout << "Title: " << title
             << ", Author: " << author
             << endl;
    }
};

// =====================================
// PA0111 State of Object (Speed)
// =====================================
class Vehicle {
private:i

public:
    Vehicle() {
        speed = 0;
    }

    void accelerate(int value) {
        speed += value;
    }

    void brake(int value) {
        speed -= value;

        if (speed < 0) {
            speed = 0;
        }
    }

    void displaySpeed() {
        cout << "Current Speed: "
             << speed << " km/h" << endl;
    }
};

// =====================================
// Main Program
// =====================================
int main() {

    cout << "=== Father Family Example ===\n" << endl;

    // PA0101 Create objects from child classes
    Son son1("Mokoena", 18, "Soccer");
    Daughter daughter1("Mokoena", 16, "Mathematics");

    cout << "--- Son Object ---" << endl;
    son1.displaySon();
    son1.introduce();

    cout << "\n--- Daughter Object ---" << endl;
    daughter1.displayDaughter();
    

    // PA0107 Rectangle
    cout << "\n=== Rectangle ===" << endl;
    Rectangle rect(12, 8);

    cout << "Length = 12" << endl;
    cout << "Width = 8" << endl;
    cout << "Area = "
         << rect.calculateArea() << endl;

    // PA0109 Create objects
    cout << "\n=== Father Objects ===" << endl;

    Father father1("Mokoena", 45);
    Father father2("Nkosi", 50);

    father1.displayFatherInfo();
    cout << endl;
    father2.displayFatherInfo();

    // PA0110 Three Boo
    cout << "\n=== Books ===" << endl;

    Book book1("C++ Basics", "John Smith");
    Book book2("OOP Concepts", "Mary Jones");
    Book book3("Programming Logic", "Peter Brow
    book1.displayBook();
    book2.displayBook();
    book3.displayBook();

    // PA0111 State of Object
    cout << "\n=== Vehicle Speed State ===" << endl;

    Vehicle car;

    car.displaySpeed();

    car.accelerate(40);
    car.displaySpeed();

    car.accelerate(30);
    car.displaySpeed();

    car.brake(20);
    car.displaySpeed();

    return 0;
}
