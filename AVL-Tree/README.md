# AVL Tree
AVL Tree implementation in C++ using classes and templates.

AVL (Georgy Adelson-Velsky and Landis) tree is a self-balancing binary search tree in which each node maintains extra information called a balance factor whose value is either -1, 0 or +1.

AVL Tree class methods:

<ul>
  <li>NodeHeight - return node's height </li>
  <li>getMax -  return the maximal node</li>
  <li>BalanceFactor - balance factor process</li>
  <li>LLRotation, RRRotation, LRRotation,RLRotation - <a href="#rotations">click here for an exlpanation</a></li>
  <li>GetPredecessor, GetSuccessor</li>
  <li>insert</li>
</ul>

<b>Balancing</b>:
<div id="rotations">
There are 4 cases:

Case 1:

        y                              x
       / \      Right Rotation        / \
      x   C     -------------->      A   y
     / \                                / \
    A   B                              B   C
    
Case 2:

    
       x                              y
      / \       Left Rotation        / \
      A   y      ------------->      x   C
         / \                        / \
        B   C                      A   B
        
        
Case 3:

        y                              y
       / \       Left Rotation        / \
      x   h      ------------->      z   h
     / \             on x           / \
    h  h/h+1                      h+1 h/h+1
    
Then,
```
        y                              x
       / \      Right Rotation        / \
      x   h     -------------->     h+1  y
     / \             on y               / \
   h+1 h/h+1                         h/h+1 h

``` 
   
Case 4:

        y                              y
       / \      Right Rotation        / \
      h   x     -------------->      h   z
         / \        on x                / \
      h/h+1 h                       h/h+1 h+1
      
      
Then,

        y                              z
       / \       Left Rotation        / \
      h   z      ------------->      y  h+1
         / \         on y           / \
      h/h+1 h+1                    h h/h+1
