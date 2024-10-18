## Competitive Programming Solutions Categorized by Algorithm and Platform

This repository contains my solutions to problems from various competitive programming platforms such as Codeforces, LeetCode, AtCoder, HackerRank, and others. The solutions are organized by the algorithm or data structure used to solve them, making it easy to find solutions based on problem-solving techniques.

### 📂 **Directory Structure**
Each folder in this repository corresponds to a different algorithm or data structure (e.g., Prefix Sum, Dynamic Programming). Inside each folder, solutions are further categorized by platform, and each file contains a problem from that platform.

```
Competitive-Programming-Solutions/
├── Prefix_Sum/
│   ├── Codeforces/
│   │   ├── problem_1.cpp   # Solution for Codeforces Problem 1 using Prefix Sum
│   ├── LeetCode/
│   │   ├── problem_2.cpp   # Solution for LeetCode Problem 2 using Prefix Sum
├── Dynamic_Programming/
│   ├── AtCoder/
│   │   ├── problem_3.cpp   # Solution for AtCoder Problem 3 using Dynamic Programming
│   ├── HackerRank/
│   │   ├── problem_4.cpp   # Solution for HackerRank Problem 4 using Dynamic Programming
└── Greedy_Algorithm/
    ├── Codeforces/
    │   ├── problem_5.cpp
```

### 📝 **How to Use This Repository**

- **Platform Categories**: Within each algorithm folder, you'll find subfolders for different platforms such as Codeforces, LeetCode, AtCoder, etc.
- **Problem Solutions**: Each `.cpp` file corresponds to a solution for a problem. The solution files contain:
  - The problem link from the respective platform.
  - A description of the approach used.
  - The solution code.

Example format of a solution file:

```cpp
// Platform: Codeforces
// Problem: Codeforces 1234A (Link to the problem)
// Approach: Used Prefix Sum to efficiently compute subarray sums.
// Time complexity: O(n), Space complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;

void solve(){
    // Solution code goes here
}

int main() {
}
```

### 🔍 **Problem Index**


| Algorithm/Technique     | Platform     | Problems Solved                                                                |
|-------------------------|--------------|--------------------------------------------------------------------------------|
| **Prefix Sum**           | Codeforces   | [Problem 1](./Prefix_Sum/Codeforces/problem_1.cpp)                             |
|                         | LeetCode     | [Problem 2](./Prefix_Sum/LeetCode/problem_2.cpp)                               |
| **Dynamic Programming**  | AtCoder      | [Problem 3](./Dynamic_Programming/AtCoder/problem_3.cpp)                       |
|                         | HackerRank   | [Problem 4](./Dynamic_Programming/HackerRank/problem_4.cpp)                    |
| **Greedy Algorithms**    | Codeforces   | [Problem 5](./Greedy_Algorithm/Codeforces/problem_5.cpp)                       |
| **Binary Search**        | SPOJ         | [Problem 6](./Binary_Search/SPOJ/problem_6.cpp)                                |

This table provides a quick overview of the problems solved for each platform and algorithm.




### 🚀 **How to Run Solutions**

Each solution is written in C++. To run any program, follow these steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/sojolrana/Competitive-Programming-Solutions.git
   ```
   
2. **Navigate to the directory**:
   ```bash
   cd Competitive-Programming-Solutions/Prefix_Sum/Codeforces
   ```

3. **Compile and run the program**:
   ```bash
   g++ "1807 - D. Odd Queries.cpp" -o odd_queries ./odd_queries
   ```

Make sure you have a C++ compiler installed on your system (such as `g++`).

### 🛠️ **Algorithms and Data Structures Covered**
This repository covers a wide range of algorithms and data structures, including but not limited to:

- **Prefix Sum**: Efficiently computing subarray sums.
- **Dynamic Programming**: Breaking problems into overlapping subproblems.
- **Binary Search**: Searching for elements efficiently in sorted arrays.
- **Greedy Algorithms**: Making locally optimal choices at each stage.
- **Graph Algorithms**: Solving problems involving graph traversal, shortest paths, and more.

Feel free to explore these solutions to gain insights into different problem-solving techniques!

### 🧑‍🏫 **Competitive Platforms Covered**
- **Codeforces**
- **LeetCode**
- **AtCoder**
- **HackerRank**
- **HackerEarth**
- **SPOJ**
- More platforms can be added over time.

### 📜 **License**
This repository is licensed under the MIT License. See the [LICENSE](./LICENSE) file for details.

### 📢 **Contributing**
If you'd like to contribute to this repository by adding solutions from other platforms or improving existing solutions, please feel free to submit a pull request! Follow these guidelines:

1. Ensure that solutions are placed in the appropriate platform and algorithm folders.
2. Include problem links and brief descriptions of your approach.
3. Test your solution thoroughly before submitting.

### 🌟 **Acknowledgments**
- Problems sourced from various competitive programming platforms.
- Special thanks to the competitive programming community for fostering continuous learning and improvement.

---
#### If you find this repository helpful, please consider giving it a :star:
