# Graph Traversal 

This project demonstrates graph traversal algorithms using Breadth-First Search (BFS) and Depth-First Search (DFS) in C++.
Both recursive and iterative versions of DFS are implemented with detailed step-by-step output to visualize the traversal process.

📌 Features

Undirected graph using adjacency list

BFS traversal with:

Queue operations

Visit order tracking

DFS traversal:

Recursive version with backtracking visualization

Iterative version using stack

Step-by-step traversal logs for learning and debugging

🧩 Algorithms Implemented
1. Breadth-First Search (BFS)

Uses a queue

Visits nodes level by level

Marks nodes as visited when enqueued

2. Depth-First Search (DFS – Recursive)

Uses recursion

Shows:

Going deeper into nodes

Backtracking steps

3. Depth-First Search (DFS – Iterative)

Uses an explicit stack

Simulates recursive DFS behavior

Pushes neighbors in reverse order for correct traversal

🛠️ Input Format

Number of vertices V and edges E

E lines containing edges u v (undirected)

Starting node for traversal

Example Input
Enter number of vertices and edges: 5 4
Enter 4 edges (u v):
1 2
1 3
2 4
3 5
Enter starting node: 1

📤 Output

The program prints:

Order of visited nodes

Queue/stack push operations

DFS backtracking steps

Example:

--- BFS Traversal ---
Step 1: Visited 1
   -> Pushed 2 into queue
   -> Pushed 3 into queue
...

⚙️ How to Compile and Run
Compile
g++ -std=gnu++17 -o graph_traversal main.cpp

Run
./graph_traversal

🧠 Concepts Covered

Graph representation using adjacency list

BFS using queue

DFS using recursion and stack

Visited array to avoid cycles

Traversal order control

📚 Suitable For

Learning BFS and DFS

Data Structures & Algorithms practice

Interview preparation

Debugging and visualization of traversals

✨ Author

Paras Rajput
