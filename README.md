# Leetcode-872.-Leaf-Similar-Trees
🍃 Leaf-Similar Trees – C++ Solution

Given two binary trees, this program checks whether their leaf traversal sequences are the same 📜.
Two trees are considered leaf-similar if their leaves appear in the same order from left to right 🌿➡️🌿.

---

📘 Problem Description
You are given two binary trees root1 and root2.
Return true if and only if the leaf sequence of both trees is the same.

A leaf is a node with no children.

---

💡 Approach
---
We recursively collect all leaf values in left-to-right order using a helper function 🛠️ and compare the resulting vectors:

Traverse each tree and collect all its leaf nodes into a vector 📦.

Compare the two vectors element by element 🔍.

---

⏱️ Time Complexity
---
O(n + m) where:

n = number of nodes in root1

m = number of nodes in root2

We visit every node once.

---

💾 Space Complexity
-
O(h1 + h2 + L) where:

h1, h2 = heights of the trees (for recursion stack)

L = number of leaf nodes (stored in vectors)

---

👨‍💻 Author
-

Ridham Garg

🎓 B.Tech Computer Engineering

🏫 Thapar University, Patiala

🆔 Roll Number: 102203014

