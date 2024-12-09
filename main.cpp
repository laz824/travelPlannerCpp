/************************************************/
/*       Solar Marketing Travel Planner         */
/************************************************/
#include <iostream>
#include <string>
#include <climits> // For INT_MAX
#include <algorithm> // For next_permutation
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
/*                 Prototypes                   */
/************************************************/
void printMatrix();
void printTripsWithCosts();
void findShortestPath();

int main() {
    cout << "Welcome to the Travel Planner!\n\n";

    // Step 1: Show distances
    cout << "Distance Chart (Cities):\n";
    printMatrix();

    // Step 2: Show trip options
    cout << "\nAll Possible Trips from Riverside:\n";
    printTripsWithCosts();

    // Step 3: Show shortest trip
    cout << "\nFinding the Shortest Trip:\n";
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

// Calculate total distance of a trip
int calculateTripCost(const int trip[], int size) {
    int totalCost = 0;
    for (int i = 0; i < size - 1; i++) {
        totalCost += distances[trip[i]][trip[i + 1]];
    }
    totalCost += distances[trip[size - 1]][trip[0]]; // Return to Riverside
    return totalCost;
}

// Show all trips and their distances 
void printTripsWithCosts() {
    int trip[NUM_CITIES] = {0, 1, 2, 3}; // Indices of cities
    do {
        cout << "Riverside -> ";
        for (int i = 1; i < NUM_CITIES; i++) {
            cout << cities[trip[i]] << " -> ";
        }
        cout << "Riverside";

        int cost = calculateTripCost(trip, NUM_CITIES);
        cout << " | Distance: " << cost << " units\n";

    } while (next_permutation(trip + 1, trip + NUM_CITIES)); // Keep Riverside at the start
}

// Find and show the shortest trip
void findShortestPath() {
    int trip[NUM_CITIES] = {0, 1, 2, 3};
    int bestTrip[NUM_CITIES + 1];
    int minCost = INT_MAX;

    do {
        int currentCost = calculateTripCost(trip, NUM_CITIES);
        if (currentCost < minCost) {
            minCost = currentCost;
            for (int i = 0; i < NUM_CITIES; i++) {
                bestTrip[i] = trip[i];
            }
            bestTrip[NUM_CITIES] = trip[0]; // Return to Riverside
        }
    } while (next_permutation(trip + 1, trip + NUM_CITIES)); // Keep Riverside at the start

    // Show the shortest trip
    cout << "Shortest Trip: Riverside -> ";
    for (int i = 1; i < NUM_CITIES; i++) {
        cout << cities[bestTrip[i]] << " -> ";
    }
    cout << "Riverside\n";
    cout << "Distance: " << minCost << " units\n";
}