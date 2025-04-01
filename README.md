# client_data_sorter.cpp

# Client Data Sorter

This C++ program is designed to read, sort, and display client data from a file. Each client has a name, a pet, and a balance, all of which are read from the file `clients.dat`.

## Features

- **File Reading:** Opens the file `clients.dat`, checks if it opens correctly, and reads client data into an array of `Client` structures.
- **Sorting:** Sorts the clients alphabetically by their names using the bubble sort algorithm.
- **Displaying Data:** Displays the sorted list of clients with their names, pets, and balances in a formatted manner.
- **Error Handling:** Uses `assert` to ensure that the file opens correctly before reading data.

## How It Works

1. The program opens `clients.dat` and checks if it was successfully opened using `assert`.
2. It reads client data into an array of `Client` structures.
3. The program then sorts the array using the bubble sort algorithm based on the client names.
4. After sorting, the program displays the sorted list with the client's name, pet, and balance in a neatly formatted manner using `iomanip` for proper alignment.

```bash
   g++ client_data_sorter.cpp -o client_data_sorter
--------------------------------------------
ABledsoe     Python                 $432.32
BSinard      Poodles                $880.50
FDouglas     Ferret                 $0.00
GThompson    ScottishFold           $250.00
JKang        MaineCoon              $50.20
JSmith       Ragdoll                $524.35
KEddleman    Pig                    $245.60
LJames       Parrot                 $256.75
NBhuva       Bulldogs               $650.00
SGant        German-Shepherds       $1500.00
TJohnson     Retriever              $32.56
--------------------------------------------
