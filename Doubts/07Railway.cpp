#include <iostream>
#include <cstring>
using namespace std;

class Train {
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;  // Static member to keep track of the number of trains

public:
    Train() {
        // Default constructor initializes data members to default values
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
        trainCount++;
    }

    Train(int number, const char* name, const char* src, const char* dest, const char* time) {
        trainNumber = number;
        strncpy(trainName, name, sizeof(trainName) - 1);
        strncpy(source, src, sizeof(source) - 1);
        strncpy(destination, dest, sizeof(destination) - 1);
        strncpy(trainTime, time, sizeof(trainTime) - 1);
        trainCount++;
    }

    ~Train() {
        trainCount--;
    }

    // Getters and Setters
    int getTrainNumber() const { return trainNumber; }
    void setTrainNumber(int number) { trainNumber = number; }

    const char* getTrainName() const { return trainName; }
    void setTrainName(const char* name) { strncpy(trainName, name, sizeof(trainName) - 1); }

    const char* getSource() const { return source; }
    void setSource(const char* src) { strncpy(source, src, sizeof(source) - 1); }

    const char* getDestination() const { return destination; }
    void setDestination(const char* dest) { strncpy(destination, dest, sizeof(destination) - 1); }

    const char* getTrainTime() const { return trainTime; }
    void setTrainTime(const char* time) { strncpy(trainTime, time, sizeof(trainTime) - 1); }

    static int getTrainCount() { return trainCount; }

    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();  // To ignore the newline character left in the input buffer

        cout << "Enter Train Name: ";
        cin.getline(trainName, sizeof(trainName));

        cout << "Enter Source: ";
        cin.getline(source, sizeof(source));

        cout << "Enter Destination: ";
        cin.getline(destination, sizeof(destination));

        cout << "Enter Train Time: ";
        cin.getline(trainTime, sizeof(trainTime));
    }

    void displayTrainDetails() const {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
    }
};

// Initialize static member
int Train::trainCount = 0;

class RailwaySystem {
private:
    Train trains[100]; // Array to store multiple train objects
    int totalTrains;   // To keep track of the total number of trains

public:
    RailwaySystem() : totalTrains(0) {}

    void addTrain() {
        if (totalTrains < 100) {
            Train newTrain;
            newTrain.inputTrainDetails();
            trains[totalTrains++] = newTrain;
            cout << "Train added successfully." << endl;
        } else {
            cout << "Cannot add more trains. Maximum limit reached." << endl;
        }
    }

    void displayAllTrains() const {
        if (totalTrains == 0) {
            cout << "No train records available." << endl;
            return;
        }
        for (int i = 0; i < totalTrains; ++i) {
            cout << "Train " << (i + 1) << " details:" << endl;
            trains[i].displayTrainDetails();
            cout << endl;
        }
    }

    void searchTrainByNumber(int number) const {
        bool found = false;
        for (int i = 0; i < totalTrains; ++i) {
            if (trains[i].getTrainNumber() == number) {
                cout << "Train found:" << endl;
                trains[i].displayTrainDetails();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Train with number " << number << " not found!" << endl;
        }
    }
};

int main() {
    RailwaySystem system;
    int choice;
    int trainNumber;

    // Initial train records
    system.addTrain(); // Manually add at least three initial records

    do {
        cout << "--- Railway Reservation System Menu ---" << endl;
        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Ignore newline character left in input buffer

        switch (choice) {
            case 1:
                system.addTrain();
                break;
            case 2:
                system.displayAllTrains();
                break;
            case 3:
                cout << "Enter Train Number to search: ";
                cin >> trainNumber;
                cin.ignore();  // Ignore newline character left in input buffer
                system.searchTrainByNumber(trainNumber);
                break;
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}