

/************************************************/
/*       Solar Marketing Travel Planner         */
/************************************************/
#include <iostream>
#include <string>
#include <climits> // For INT_MAX
using namespace std;

const int NUM_CITIES = 4;
const string cities[NUM_CITIES] = {"Riverside", "Moreno Valley", "Perris", "Hemet"};
const int distances[NUM_CITIES][NUM_CITIES] = {
    {0, 16, 24, 33}, 
    {16, 0, 18, 26}, 
    {24, 18, 0, 30}, 
    {33, 26, 30, 0}
};

/************************************************/
/*           Function Prototypes                */
/************************************************/
void printMatrix();
void printTrip(int path[], int size);
void findShortestPath();
void findTripVariations();

int main() {t
    cout << "Welcome to the Solar Marketing Travel Planner\n\n";

    // Step 1: Print adjacency matrix
    cout << "Adjacency Matrix (Distances between cities):\n";
    printMatrix();

    // Step 2: Display trip variations
    cout << "\nPossible Trip Variations from Riverside:\n";
    findTripVariations();

    // Step 3: Find and display the shortest path
    cout << "\nCalculating Shortest Path from Riverside...\n";
    findShortestPath();

    return 0;
}

/************************************************/
/*             Helper Functions                 */
/************************************************/

void printMatrix() {
    for (int i = 0; i < NUM_CITIES; i++) {
        for (int j = 0; j < NUM_CITIES; j++) {
            cout << distances[i][j] << "\t";
        }
        cout << "\n";
    }
}

// Display all possible trip variations starting from Riverside
void findTripVariations() {
    int path[NUM_CITIES] = {0, 1, 2, 3}; // Indices of cities
    do {
        cout << "Riverside -> ";
        for (int i = 1; i < NUM_CITIES; i++) {
            cout << cities[path[i]] << " -> ";
        }
        cout << "Riverside\n";
    } while (next_permutation(path + 1, path + NUM_CITIES)); // Fix Riverside at the start
}

// Calculate and display the shortest path
void findShortestPath() {
    int path[NUM_CITIES] = {0, 1, 2, 3};
    int shortestPath[NUM_CITIES + 1];
    int minCost = INT_MAX;

    do {
        int currentCost = 0;
        for (int i = 0; i < NUM_CITIES - 1; i++) {
            currentCost += distances[path[i]][path[i + 1]];
        }
        currentCost += distances[path[NUM_CITIES - 1]][path[0]]; // Return to start

        if (currentCost < minCost) {
            minCost = currentCost;
            for (int i = 0; i < NUM_CITIES; i++) {
                shortestPath[i] = path[i];
            }
            shortestPath[NUM_CITIES] = path[0]; // Return to start
        }
    } while (next_permutation(path + 1, path + NUM_CITIES)); // Fix Riverside at the start

    // Display shortest path
    cout << "Shortest Path: ";
    for (int i = 0; i <= NUM_CITIES; i++) {
        cout << cities[shortestPath[i]] << " -> ";
    }
    cout << "\nTotal Distance: " << minCost << " units\n";
}


