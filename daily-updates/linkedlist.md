# Linked List Menu-Driven Program (C++)

## Code

```cpp
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

using namespace std;

// Structure for Node
struct Node
{
    int data;
    Node *next;
};

// Head pointer
Node *head = NULL;

// 1. Create Linked List
void createList()
{
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter value for node " << i << ": ";
        cin >> value;

        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    cout << "Linked List Created Successfully.\n";
}

// 2. Add Node at Start
void addAtStart()
{
    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = head;

    head = newNode;

    cout << "Node inserted at beginning.\n";
}

// 3. Add Node at Last
void addAtLast()
{
    int value;
    cout << "Enter value to insert at end: ";
    cin >> value;

    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Node inserted at end.\n";
}

// 4. Search an Item
void searchItem()
{
    if (head == NULL)
    {
        cout << "Linked List is empty.\n";
        return;
    }

    int item, position = 1;
    cout << "Enter item to search: ";
    cin >> item;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == item)
        {
            cout << "Item found at position " << position << endl;
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Item not found in the list.\n";
}

// 5. Delete First Node
void deleteFirst()
{
    if (head == NULL)
    {
        cout << "Linked List is empty.\n";
        return;
    }

    Node *temp = head;
    head = head->next;

    delete temp;

    cout << "First node deleted successfully.\n";
}

// 6. Delete Last Node
void deleteLast()
{
    if (head == NULL)
    {
        cout << "Linked List is empty.\n";
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;

        cout << "Last node deleted successfully.\n";
        return;
    }

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;

    cout << "Last node deleted successfully.\n";
}

// 7. Find Maximum Value
void findMax()
{
    if (head == NULL)
    {
        cout << "Linked List is empty.\n";
        return;
    }

    int maxValue = head->data;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data > maxValue)
        {
            maxValue = temp->data;
        }

        temp = temp->next;
    }

    cout << "Maximum value in the list = " << maxValue << endl;
}

// 8. Find Minimum Value
void findMin()
{
    if (head == NULL)
    {
        cout << "Linked List is empty.\n";
        return;
    }

    int minValue = head->data;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data < minValue)
        {
            minValue = temp->data;
        }

        temp = temp->next;
    }

    cout << "Minimum value in the list = " << minValue << endl;
}

// 9. Display All Values
void display()
{
    if (head == NULL)
    {
        cout << "Linked List is empty.\n";
        return;
    }

    Node *temp = head;

    cout << "Linked List Elements are: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    int choice;

    do
    {
        system("cls");
        cout << "\n========== LINKED LIST MENU ==========\n";
        cout << "1. Create Linked List\n";
        cout << "2. Add Node at Start\n";
        cout << "3. Add Node at Last\n";
        cout << "4. Search an Item\n";
        cout << "5. Delete Node from First\n";
        cout << "6. Delete Node from Last\n";
        cout << "7. Find Maximum Value\n";
        cout << "8. Find Minimum Value\n";
        cout << "9. Display All Values\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createList();
            break;

        case 2:
            addAtStart();
            break;

        case 3:
            addAtLast();
            break;

        case 4:
            searchItem();
            break;

        case 5:
            deleteFirst();
            break;

        case 6:
            deleteLast();
            break;

        case 7:
            findMax();
            break;

        case 8:
            findMin();
            break;

        case 9:
            display();
            break;

        case 0:
            cout << "Program terminated successfully.\n";
            break;

        default:
            cout << "Invalid Choice! Please try again.\n";
        }

        getch();

    } while (choice != 0);

    return 0;
}
```
# Linked List Menu-Driven Program (C++)

This program demonstrates basic operations on a **Singly Linked List** using a menu-driven interface.

---

## Output

### Main Menu

```text
========== LINKED LIST MENU ==========

1. Create Linked List
2. Add Node at Start
3. Add Node at Last
4. Search an Item
5. Delete Node from First
6. Delete Node from Last
7. Find Maximum Value
8. Find Minimum Value
9. Display All Values
0. Exit

Enter your choice:
```

---

## 1. Create Linked List

### Input

```text
Enter your choice: 1

Enter number of nodes: 5

Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30
Enter value for node 4: 40
Enter value for node 5: 50
```

### Output

```text
Linked List Created Successfully.
```

---

## 2. Add Node at Start

### Input

```text
Enter your choice: 2

Enter value to insert at beginning: 5
```

### Output

```text
Node inserted at beginning.
```

Current List

```text
5 → 10 → 20 → 30 → 40 → 50
```

---

## 3. Add Node at Last

### Input

```text
Enter your choice: 3

Enter value to insert at end: 60
```

### Output

```text
Node inserted at end.
```

Current List

```text
5 → 10 → 20 → 30 → 40 → 50 → 60
```

---

## 4. Search an Item

### Input

```text
Enter your choice: 4

Enter item to search: 30
```

### Output

```text
Item found at position 4
```

---

### Input

```text
Enter item to search: 100
```

### Output

```text
Item not found in the list.
```

---

## 5. Delete First Node

### Input

```text
Enter your choice: 5
```

### Output

```text
First node deleted successfully.
```

Current List

```text
10 → 20 → 30 → 40 → 50 → 60
```

---

## 6. Delete Last Node

### Input

```text
Enter your choice: 6
```

### Output

```text
Last node deleted successfully.
```

Current List

```text
10 → 20 → 30 → 40 → 50
```

---

## 7. Find Maximum Value

### Input

```text
Enter your choice: 7
```

### Output

```text
Maximum value in the list = 50
```

---

## 8. Find Minimum Value

### Input

```text
Enter your choice: 8
```

### Output

```text
Minimum value in the list = 10
```

---

## 9. Display All Values

### Input

```text
Enter your choice: 9
```

### Output

```text
Linked List Elements are:
10 20 30 40 50
```

---

## 0. Exit

### Input

```text
Enter your choice: 0
```

### Output

```text
Program terminated successfully.
```

---

## Sample Complete Run

```text
========== LINKED LIST MENU ==========

1. Create Linked List
2. Add Node at Start
3. Add Node at Last
4. Search an Item
5. Delete Node from First
6. Delete Node from Last
7. Find Maximum Value
8. Find Minimum Value
9. Display All Values
0. Exit

Enter your choice: 1

Enter number of nodes: 5

Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30
Enter value for node 4: 40
Enter value for node 5: 50

Linked List Created Successfully.

Enter your choice: 2
Enter value to insert at beginning: 5

Node inserted at beginning.

Enter your choice: 3
Enter value to insert at end: 60

Node inserted at end.

Enter your choice: 9

Linked List Elements are:
5 10 20 30 40 50 60

Enter your choice: 4

Enter item to search: 30

Item found at position 4

Enter your choice: 7

Maximum value in the list = 60

Enter your choice: 8

Minimum value in the list = 5

Enter your choice: 5

First node deleted successfully.

Enter your choice: 6

Last node deleted successfully.

Enter your choice: 9

Linked List Elements are:
10 20 30 40 50

Enter your choice: 0

Program terminated successfully.
```
