#include <iostream>
#include <fstream>
#include <string> 
#include <cassert>
#include <iomanip>  

using namespace std;

// Struct to hold client data
struct Client {
    string name;
    string pet;
    float balance;
};

// Function Prototypes
int readClients(Client clients[], int maxClients, ifstream &myIn);
void sortClients(Client clients[], int count);
void displayClients(const Client clients[], int count);

int main() {
    const int MAX_CLIENTS = 100;
    Client clients[MAX_CLIENTS];

    // Open file and ensure it opens correctly
    ifstream myIn("clients.dat");

    cout << "--------------------------------------------" << endl; 

    // Check if file opens successfully
    assert(myIn.is_open() && "Error opening file");

    // Read clients from file
    int clientCount = readClients(clients, MAX_CLIENTS, myIn);

    myIn.close();  // Close the file

    // Sort clients by name
    sortClients(clients, clientCount);

    // Display sorted client list
    displayClients(clients, clientCount);
   
    cout << "--------------------------------------------" << endl; 

    return 0;
}

// Function to read client data from file
int readClients(Client clients[], int maxClients, ifstream &myIn) {
    int count = 0;
    while (count < maxClients && myIn >> clients[count].name >> clients[count].pet >> clients[count].balance) {
        count++;
    }
    return count;
}

// Function to sort clients using bubble sort
void sortClients(Client clients[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (clients[j].name > clients[j + 1].name) {
                // Swap clients
                Client temp = clients[j];
                clients[j] = clients[j + 1];
                clients[j + 1] = temp;
            }
        }
    }
}

// Function to display client data with formatted output
void displayClients(const Client clients[], int count) {
    cout << fixed << setprecision(2);  // Set output precision for balance to 2 decimal places
    for (int i = 0; i < count; i++) {
        // Displaying name, pet, and balance in a nice format
        cout << left << setw(13) << clients[i].name 
             << left << setw(23) << clients[i].pet 
             << "$" << clients[i].balance << endl;
    }
}
