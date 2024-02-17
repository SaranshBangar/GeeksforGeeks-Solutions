<h2><a href="https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1">Does array represent Heap</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>arr&nbsp;</strong>of size&nbsp;<strong>n</strong>, the task is to check if the given array can be a level order representation of a&nbsp;<a href="https://www.geeksforgeeks.org/difference-between-min-heap-and-max-heap/">Max Heap</a>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:<br></strong>n = 6<br>arr[] = {90, 15, 10, 7, 12, 2}
<strong>Output: <br></strong>1<br><strong>Explanation:</strong> 
The given array represents below tree
       90
     /    \
   15      10
  /  \     /
7    12  2
The tree follows max-heap property as every
node is greater than all of its descendants.
</span></pre>
<div><span style="font-size: 18px;"><strong>Example 2:</strong></span></div>
<pre><span style="font-size: 18px;"><strong>Input:  <br></strong>n = 6<br>arr[] = {9, 15, 10, 7, 12, 11}
<strong>Output:<br></strong>0
<strong>Explanation:</strong><br>The given array represents below tree
       9
     /    \
   15      10
  /  \     /
7    12  11
The tree doesn't follows max-heap property 9 is
smaller than 15 and 10, and 10 is smaller than 11. </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>isMaxHeap()</strong>&nbsp;which takes the array&nbsp;<strong>arr[]</strong>&nbsp;and its size&nbsp;<strong>n</strong><strong>&nbsp;</strong>as inputs and returns&nbsp;<strong>True</strong>&nbsp;if the given array could represent a valid level order representation of a&nbsp;<strong>Max Heap</strong>, or else, it will return&nbsp;<strong>False</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>1 ≤ arr<sub>i</sub>&nbsp;≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Cisco</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;