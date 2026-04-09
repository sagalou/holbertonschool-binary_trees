# Binary Trees

A project implementing binary tree data structures and algorithms in C, as part of the Holberton School curriculum.

## Description

This project covers the fundamentals of binary trees, including creation, traversal, and analysis of tree properties. All functions are implemented in C following the Betty coding style.

## Data Structures

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Requirements

- Ubuntu 20.04 LTS
- gcc with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style compliant
- No global variables
- No more than 5 functions per file

## Tasks

### 0. New node
**File:** `0-binary_tree_node.c`

Creates a binary tree node with a given parent and value. Returns a pointer to the new node, or `NULL` on failure.

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

### 1. Insert left
**File:** `1-binary_tree_insert_left.c`

Inserts a node as the left-child of another node. If the parent already has a left-child, the new node takes its place and the old left-child becomes the left-child of the new node.

```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

### 2. Insert right
**File:** `2-binary_tree_insert_right.c`

Inserts a node as the right-child of another node. If the parent already has a right-child, the new node takes its place and the old right-child becomes the right-child of the new node.

```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

### 3. Delete
**File:** `3-binary_tree_delete.c`

Deletes an entire binary tree, freeing all allocated memory.

```c
void binary_tree_delete(binary_tree_t *tree);
```

### 4. Is leaf
**File:** `4-binary_tree_is_leaf.c`

Checks if a node is a leaf (has no children). Returns `1` if the node is a leaf, `0` otherwise.

```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

### 5. Is root
**File:** `5-binary_tree_is_root.c`

Checks if a node is the root (has no parent). Returns `1` if the node is a root, `0` otherwise.

```c
int binary_tree_is_root(const binary_tree_t *node);
```

### 6. Pre-order traversal
**File:** `6-binary_tree_preorder.c`

Traverses a binary tree using pre-order (Root → Left → Right), calling a function on each node.

```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

### 7. In-order traversal
**File:** `7-binary_tree_inorder.c`

Traverses a binary tree using in-order (Left → Root → Right), calling a function on each node. On a BST, this visits nodes in sorted order.

```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

### 8. Post-order traversal
**File:** `8-binary_tree_postorder.c`

Traverses a binary tree using post-order (Left → Right → Root), calling a function on each node. Useful for freeing memory.

```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

### 9. Height
**File:** `9-binary_tree_height.c`

Measures the height of a binary tree — the number of edges from the node to the deepest leaf.

```c
size_t binary_tree_height(const binary_tree_t *tree);
```

### 10. Depth
**File:** `10-binary_tree_depth.c`

Measures the depth of a node — the number of edges from the root to the node.

```c
size_t binary_tree_depth(const binary_tree_t *tree);
```

### 11. Size
**File:** `11-binary_tree_size.c`

Measures the total number of nodes in a binary tree.

```c
size_t binary_tree_size(const binary_tree_t *tree);
```

### 12. Leaves
**File:** `12-binary_tree_leaves.c`

Counts the number of leaves (nodes with no children) in a binary tree.

```c
size_t binary_tree_leaves(const binary_tree_t *tree);
```

### 13. Nodes
**File:** `13-binary_tree_nodes.c`

Counts the nodes that have at least one child in a binary tree.

```c
size_t binary_tree_nodes(const binary_tree_t *tree);
```

### 14. Balance factor
**File:** `14-binary_tree_balance.c`

Measures the balance factor of a binary tree (height of left subtree minus height of right subtree).

```c
int binary_tree_balance(const binary_tree_t *tree);
```

### 15. Is full
**File:** `15-binary_tree_is_full.c`

Checks if a binary tree is full — every node has either 0 or 2 children.

```c
int binary_tree_is_full(const binary_tree_t *tree);
```

### 16. Is perfect
**File:** `16-binary_tree_is_perfect.c`

Checks if a binary tree is perfect — all levels are completely filled.

```c
int binary_tree_is_perfect(const binary_tree_t *tree);
```

### 17. Sibling
**File:** `17-binary_tree_sibling.c`

Finds the sibling of a node (the other child of the same parent).

```c
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```

### 18. Uncle
**File:** `18-binary_tree_uncle.c`

Finds the uncle of a node (the sibling of the node's parent).

```c
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```

## Authors

- **Adam Zouaoui**
- **Sagal-Louise Haider**