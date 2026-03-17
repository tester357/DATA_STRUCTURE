<h1>Data Structures</h1>

<h2>Vector Implementation</h2>

<p>
This project demonstrates how a vector works internally 
and how some STL vector functions are implemented behind the scenes.
Instead of using the built-in functions directly, 
we reimplement them manually to understand how they operate.
</p>

<h3>Implemented Functions</h3>

<ul>
  <li><b>pop()</b> → Removes the last element from the vector.</li>
  
  <li><b>left_rotate()</b> → Moves the last element to the first position.</li>
  
  <li><b>right_rotate()</b> → Moves the first element to the last position.</li>
  
  <li><b>right_rotate_with_steps(k)</b> → Rotates the vector to the right by k steps.</li>
  
  <li><b>find_transposition(value)</b> → Searches for a value and swaps it with the previous element (self-organizing technique).</li>
</ul>
<h2>Singly Linked List</h2>

<p>
This section demonstrates the implementation of a Singly Linked List
and some basic operations on it without using built-in libraries.
The goal is to understand how nodes are connected and manipulated
in memory.
</p>

<h3>Implemented Functions</h3>

<ul>
  <li><b>insert_last(value)</b> → Adds a new element to the end of the linked list.</li>

  <li><b>delete_by_value(value)</b> → Removes a node from the list by specifying its value.</li>

  <li><b>display()</b> → Prints all elements of the linked list.</li>

<li>
<b>delete_first()</b> → Removes the first element of the linked list.
The head pointer is moved to the next node, and the previous first node is deleted from memory.
</li>
</ul>
