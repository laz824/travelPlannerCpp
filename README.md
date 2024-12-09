## Travel Planner

---

## In this project, what problems are you addressing?

- The marketing route across the four cities faces a problem of optimization and minimizing the overall distance spent in. This project addresses that issue.

- In this project, an existing problem of finding the most efficient way of calculating total routes in a given distance will be resolved.

- By offering an adjacency matrix which calculates various route designs, this project will assist in the difficulty of planning out various distance routes between multiple cities.

---

## What solutions are you implementing in the project?

- A core part of the program is the adjacency matrix which collates distance metrics between each city.

- Searching for alternative ways to start and conclude a location enables permutation generation to search up all routes through Riverside.

- The locations in the city are able to determine the shortest route through brute-force comparison and find the total distance.

- **The system outputs:**
- The most economical route and its total distance.

---

## Provide explanation of calculations and algorithm implementation

### Adjacency Matrix:

- Represents the distance for city i from city j.

### Route Generation:

- Start and end cities (Riverside) remain constant, and all permutations of city indices are constructed.

- Ensures that no possible route is left unchecked in a systematic manner.

### Total Distance Calculation:

- The distance of each route is determined by its cities number in the route, as well as the distance back to Riverside.

### Shortest Route Calculation:

- Here, a brute-force approach is used and are compared through their total distance.

- The route with the total distance that is shortest from the rest becomes the shortest route.

---

## What is the program’s objective?

### Objective:

- The program efficiently plans a route across four cities for a marketing officer, minimizing distance and time spent on travel.

### How the program interacts with the user:

- Optionally, displays the adjacency matrix and city distances.

- Lists all combinations of routes between cities, including the distances.

- Displays the shortest route with the total distance.

### Purpose:

- It makes tedious and complicated tasks like calculations, logic, and others easier by giving pre-defined simple and meaningful outputs.

---

## How is discrete structures implemented in the C++ program?

### Graph Representation:

- All the cities and the distance to them can be viewed through an adjacency matrix as a weighted graph.

### Permutations:

- Creates array of every possible travel routes.

### Brute Force Search:

- Determines the shortest route.

### Matrix Operations:

- The use of the adjacency matrix allows the retrieval and computation of distances.

---

## What are the limitations of the program?

1.  **Scalability**:

    - For an increased amount of cities, the brute force method incurs a very high computation cost.

2.  **Static Input**:

    - The adjacency matrix is static and the position of the cities and distance between them cannot be entered by the user.

3.  **Real-Time Factors**:

    - This program does not take into account real time factors like for instance, the road traffic, or conditions of the roads.

4.  **Optimization Criteria**:

    - Only the distance field is optimized by calculation. Time, or cost factors are excluded.

5.  **Single Output**:
    - Program only outputs single route even is there are various routes with the lowest units.

---

## Recommendations on improving the limitations of the program

1.  **Scalability**:

    - Make use of better optimization like Dijkstra’s or other algorithms to be able to accommodate bigger graphs.

2.  **Dynamic Input**:

    - Users should have the ability to flexibly input cities, distance and other relevant parameters.

3.  **Real-Time Data Integration**:

    - Make use of APIs or data that consider real time factors like road or traffic conditions.

4.  **multi-criteria Optimization**:
    - Supplement the program so that it optimizes more than one parameter at the same time among other factors.

---

## Pseudocode

**PROGRAM START**

- Create and set up an adjacency matrix to store the distance between cities.
- Create and set an array that stores the names of the cities.
- Set the adjacency matrix and the city names.
- Display the distance of the city required by the user.
- Display the matrix set up in the previous steps.
- Create an array that will store the index of the city.
- Assign the value of the city indices array to [0, 1, 2, 3].
- Compute every variation of a trip required by the user.
- Fix all assignments of the array permutations of city indices beginning from Riverside.
- Show all variations of the trip computed previously.
- Compute the shortest trip using the required data.
- Obtain the final distance of each trip.
- Get the shortest trip possible and its distance.
- Display the trip that required the least amount of travel distance and total distance.

**END OF THE PROGRAM**

---
