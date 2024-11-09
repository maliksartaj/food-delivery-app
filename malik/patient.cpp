#include <iostream>
#include <cstring>

using namespace std;

struct Patient {
    char* name;
    int age;
    char* disease;
};

class PatientManagementSystem {
private:
    Patient* patients;
    int size;
    int capacity;

    void resize() {
        capacity *= 2;
        Patient* newPatients = new Patient[capacity];
        for (int i = 0; i < size; ++i) {
            newPatients[i] = patients[i];
        }
        delete[] patients;
        patients = newPatients;
    }

public:
    PatientManagementSystem(int initialCapacity = 2) {
        size = 0;
        capacity = initialCapacity;
        patients = new Patient[capacity];
    }

    ~PatientManagementSystem() {
        for (int i = 0; i < size; ++i) {
            delete[] patients[i].name;
            delete[] patients[i].disease;
        }
        delete[] patients;
    }

    void addPatient(const char* name, int age, const char* disease) {
        if (size == capacity) {
            resize();
        }

        patients[size].name = new char[strlen(name) + 1];
        strcpy(patients[size].name, name);

        patients[size].age = age;

        patients[size].disease = new char[strlen(disease) + 1];
        strcpy(patients[size].disease, disease);

        ++size;
    }

    void displayPatients() const {
        for (int i = 0; i < size; ++i) {
            cout << "Patient " << i + 1 << ":" << endl;
            cout << "Name: " << patients[i].name << endl;
            cout << "Age: " << patients[i].age << endl;
            cout << "Disease: " << patients[i].disease << endl;
            cout << endl;
        }
    }

    void deletePatientByName(const char* name) {
        for (int i = 0; i < size; ++i) {
            if (strcmp(patients[i].name, name) == 0) {
                delete[] patients[i].name;
                delete[] patients[i].disease;
                for (int j = i; j < size - 1; ++j) {
                    patients[j] = patients[j + 1];
                }
                --size;
                cout << "Patient with name " << name << " deleted." << endl;
                return;
            }
        }
        cout << "Patient with name " << name << " not found." << endl;
    }
};

int main() {
    PatientManagementSystem pms;

    pms.addPatient("John Doe", 30, "Allergy");
    pms.addPatient("Jane Smith", 25, "Flu");

    cout << "All patients:" << endl;
    pms.displayPatients();

    cout << "Deleting patient John Doe." << endl;
    pms.deletePatientByName("John Doe");

    cout << "All patients after deletion:" << endl;
    pms.displayPatients();

    return 0;
}
