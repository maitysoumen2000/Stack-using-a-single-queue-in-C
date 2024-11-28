# Stack Implementation Using Queue in C

## Overview
This program implements a **stack using a single queue** in C. The stack operations (`push`, `pop`, `peek`, and `display`) are implemented using a queue (`enqueue` and `dequeue`) with the help of iterative rearrangement of elements to mimic the stack behavior (LIFO: Last In, First Out).

---

## Features

1. **Stack Operations**:
   - **Push**: Adds an element to the stack.
   - **Pop**: Removes the top element of the stack.
   - **Peek**: Displays the top element of the stack.
   - **Display**: Prints all elements in the stack.

2. **Queue-Based Implementation**:
   - The stack operations are implemented using a single queue (`queue[MAX]`), managed with `enqueue` and `dequeue`.

3. **Fixed Stack Size**:
   - The stack (queue) has a maximum capacity defined by `MAX = 50`.

---

## Files

### `stack_using_queue.c`
This file contains:
- `enqueue(int num)`: Adds an element to the queue.
- `dequeue(void)`: Removes an element from the queue.
- `push(int val)`: Adds an element to the stack.
- `pop(void)`: Removes the top element from the stack.
- `peek(void)`: Retrieves the top element of the stack without removing it.
- `display(void)`: Displays the contents of the stack.

---

## Functions

### 1. `void push(int val)`
- **Purpose**: Adds an element to the stack.
- **Parameters**:
  - `val`: The value to be pushed.
- **Logic**:
  - Uses the `enqueue` function to add the element to the queue.

---

### 2. `void pop(void)`
- **Purpose**: Removes the top element from the stack.
- **Logic**:
  - Iteratively dequeues elements from the front and re-enqueues them at the rear until only the top element remains.
  - Dequeues the top element to simulate stack pop behavior.

---

### 3. `int peek(void)`
- **Purpose**: Displays the top element of the stack.
- **Logic**:
  - Returns the value of the last element in the queue (`queue[rear]`).

---

### 4. `void display(void)`
- **Purpose**: Displays all elements in the stack from top to bottom.
- **Logic**:
  - Iterates through the queue from `front` to `rear` and prints each element.

---

### 5. `void enqueue(int num)`
- **Purpose**: Adds an element to the queue.
- **Parameters**:
  - `num`: The value to be enqueued.
- **Logic**:
  - Adds the element to the end of the queue (`rear`).

---

### 6. `int dequeue(void)`
- **Purpose**: Removes and returns the front element of the queue.
- **Logic**:
  - Retrieves the element at the `front` index and increments the `front` pointer.

---

## Usage

1. **Compilation**: Compile the code using a C compiler:
   ```bash
   gcc -o stack_using_queue stack_using_queue.c
