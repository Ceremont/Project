#include <iostream>
#include <string>

class Student {
private:
    // Pole prywatne - dostępne tylko wewnątrz klasy
    std::string name;

protected:
    // Pole chronione - dostępne w klasie i klasach dziedziczących
    int age;

public:
    // Konstruktor klasy
    Student(std::string n, int a) : name(n), age(a) {}

    // Getter dla pola name
    std::string getName() const {
        return name;
    }

    // Setter dla pola name
    void setName(std::string n) {
        name = n;
    }

    // Getter dla pola age
    int getAge() const {
        return age;
    }

    // Setter dla pola age
    void setAge(int a) {
        if (a > 0) { // Przykład prostej walidacji
            age = a;
        } else {
            std::cout << "Wiek musi być większy niż 0!" << std::endl;
        }
    }
};

int main() {
    // Tworzymy obiekt klasy Student
    Student student("Jan", 20);

    // Używamy getterów, aby uzyskać wartości pól
    std::cout << "Imię: " << student.getName() << std::endl;
    std::cout << "Wiek: " << student.getAge() << std::endl;

    // Używamy setterów, aby zmienić wartości pól
    student.setName("Adam");
    student.setAge(25);

    std::cout << "Zaktualizowane imię: " << student.getName() << std::endl;
    std::cout << "Zaktualizowany wiek: " << student.getAge() << std::endl;

    return 0;
}
