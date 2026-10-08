#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> passengers;
    int choice;
    string name;

    do{
        cout << "\n--- Bus Boarding Queue ---\n";
        cout << "1. Add Passenger\n";
        cout << "2. Board First Passenger\n";
        cout << "3. Display Remaining Passenger\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    switch (choice){
    case 1:
        cout << "Enter passenger name: ";
                cin >> name;
                passengers.push(name);
                cout << name << " added to the queue.\n";
                break;
    case 2:
        if(passengers.empty()){
            cout<<"Cannot board!Queue is empty, No Passenger to board.\n";
            }else {
            cout << passengers.front() << " has boarded the bus.\n";
            passengers.pop();
            }
                break;

            case 3:
                if (passengers.empty()) {
                cout << "Queue is empty. No remaining passengers.\n";
                } else {
                cout << "Remaining passengers:\n";

                queue<string> temp = passengers;
                while (!temp.empty()) {
                    cout << temp.front() << endl;
                    temp.pop();
                    }
                }
                break;

            case 4:
                cout << " Have a safe trip\n";
                break;

            default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
