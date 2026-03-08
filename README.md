# Deadlock Detection using Resource Allocation Graph (RAG)

## Operating Systems Lab Project

### Description
This project demonstrates deadlock detection in an Operating System using a Resource Allocation Graph (RAG).  
The system is represented using an adjacency matrix and Depth First Search (DFS) is used to detect cycles in the graph.

If a cycle exists in the graph, it indicates a **deadlock**.

---

## Deadlock
Deadlock is a situation in which two or more processes are waiting indefinitely for resources held by each other, causing all processes involved to stop executing.

---

## Four Necessary Conditions for Deadlock

1. **Mutual Exclusion**  
A resource can be used by only one process at a time.

2. **Hold and Wait**  
A process holds at least one resource while waiting to acquire additional resources.

3. **No Preemption**  
Resources cannot be forcibly taken away from a process.

4. **Circular Wait**  
A circular chain of processes exists where each process is waiting for a resource held by the next process.

---

## Resource Allocation Graph (RAG)

A Resource Allocation Graph is a directed graph used to represent processes and resources in a system.

Processes are represented as nodes and resources are also represented as nodes.

Edges represent request or allocation relationships.

### Edge Types

| Edge | Meaning |
|-----|--------|
| P → R | Process requests resource |
| R → P | Resource allocated to process |

Deadlock occurs when there is a **cycle in the graph**.

---

## Algorithm

1. Represent the Resource Allocation Graph using an **adjacency matrix**.
2. Perform **Depth First Search (DFS)** traversal.
3. Detect cycles in the graph.
4. If a cycle exists → **Deadlock Detected**.

---

## Example Input
4
0 1 0 0
0 0 1 0
0 0 0 1
1 0 0 0

---

## Example Output
Deadlock Detected

---

## Program File

- `main.c` – Implementation of deadlock detection using DFS

---

## Language Used

- C Programming Language

---

## How to Compile and Run

### Compile
gcc main.c -o deadlock

### Run
./deadlock

---

## Author

**Uday Kumar**  
Operating Systems Lab Project
Updated README with project description
