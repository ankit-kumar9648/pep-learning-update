# Print Linked List in Reverse Order Using Recursion (C++)

## Program

```cpp
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void printReverse(Node *head)
{
    if (head == NULL)
        return;

    printReverse(head->next);
    cout << head->data << " ";
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Linked List in Reverse Order: ";
    printReverse(head);

    return 0;
}
```

---

## Output

```
Linked List in Reverse Order: 40 30 20 10
```

---

## Explanation

- A `Node` class is created with two members:
  - `data` → Stores the value of the node.
  - `next` → Stores the address of the next node.

- The linked list created is:

```
10 -> 20 -> 30 -> 40 -> NULL
```

- The `printReverse()` function uses **recursion**.

### Working

1. The function calls itself until it reaches the last node.
2. When `head == NULL`, the recursion stops.
3. As the recursive calls return, the data is printed.
4. Therefore, the nodes are printed in reverse order.

### Recursive Calls

```
printReverse(10)
      |
      v
printReverse(20)
      |
      v
printReverse(30)
      |
      v
printReverse(40)
      |
      v
printReverse(NULL)
```

### Printing Order

```
40
30
20
10
```

---

## Time Complexity

```
O(n)
```

where **n** is the number of nodes.

---

## Space Complexity

```
O(n)
```

because recursion uses the call stack.
