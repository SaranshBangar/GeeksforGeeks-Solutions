<h2><a href="https://www.geeksforgeeks.org/problems/print-an-array-in-pendulum-arrangement4004/1?page=1&difficulty=School&sortBy=submissions">Print an array in Pendulum Arrangement</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr</strong> of size <strong>n</strong>.<strong> </strong>Arrange the elements of the array&nbsp;in a way similar to the to-and-fro movement of a Pendulum.</span></p>

<ul>
	<li><span style="font-size:18px">The minimum element out of the list of integers, must come in center position of array. If there are even elements, then minimum element should be moved to (n-1)/2 index (considering that indexes start from 0)</span></li>
	<li><span style="font-size:18px">The next number (next to minimum) in the ascending order, goes to the right, the next to next number goes to the left of minimum number and it continues like a Pendulum.</span></li>
	<li><span style="font-size:18px">As higher numbers are reached, one goes to one side in a to-and-fro manner similar to that of a Pendulum</span></li>
</ul>

<div><span style="font-size:18px"><strong>Example 1:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input : 
</strong>n = 5
arr[] = {1, 3, 2, 5, 4}
<strong>Output :
</strong>5 3 1 2 4
<strong>Explanation: </strong>
The minimum element is 1, so it is 
moved to the middle. The next higher
element 2  is moved to the right of 
the middle element while the next 
higher element 3 is moved to the left 
of the middle element and this process
is continued.</span></pre>

<div><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input :
</strong>n = 5 
arr[] = {11, 12, 31, 14, 5}
<strong>Output :</strong>
31 12 5 11 14
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>pendulumArrangement()</strong>&nbsp;which takes the array <strong>arr[]</strong> and its size <strong>n </strong>as inputs and returns &nbsp;the vector array in Pendulum Arrangement.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n. Log(n))<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= n &lt;= 10<sup>5</sup></span></li>
	<li><span style="font-size:18px">0 &lt;= arr[i] &lt;= 10</span><sup><span style="font-size:15px">5</span></sup></li>
</ul>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>FactSet</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;