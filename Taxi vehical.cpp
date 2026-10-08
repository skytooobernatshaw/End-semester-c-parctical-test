#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    int choice;
    string name;

    do
    {
        cout <<"\n  TAXI BOOKING ";
        cout << "\n1. Add Customer";
        cout << "\n2. Assign Taxi";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter name: ";
            cin >> name;
            q.push(name);
        }
        else if(choice == 2)
        {
            if(q.empty())
                cout << "Queue is empty";
            else
            {
                cout << "Taxi assigned to " << q.front();
                q.pop();
            }
        }
        else if(choice == 3)
        {
            if(q.empty())
                cout << "Queue is empty";
            else
                cout << "First customer: " << q.front();
        }

    } while(choice != 4);

    return 0;
}

