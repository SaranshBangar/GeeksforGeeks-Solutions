<h2><a href="https://www.geeksforgeeks.org/problems/sort-the-given-array-after-applying-the-given-equation0304/1?page=4&category=Sorting&status=unsolved&sortBy=submissions">Sort the given array after applying the given equation</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a sorted integer array <strong>Arr[ ]</strong> of size <strong>N</strong>, and three&nbsp;integers <strong>A</strong>,&nbsp;<strong>B,</strong> and <strong>C. </strong>The task is to find&nbsp;a new array&nbsp; where <strong>i<sup>th</sup></strong> element of the new array =&nbsp;<strong>A * Arr[i] * Arr[i] +&nbsp;B * Arr[i] +&nbsp;C </strong>where<strong> </strong><strong><ins>A&nbsp;≠ 0</ins>.&nbsp;</strong>You have to print the new array in sorted (ascending) order.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
A = -1, B = 2, C = -1.
N = 6
Arr[] = {-1, 0, 1, 2, 3, 4}
<strong>Output:</strong> 
-9 -4 -4 -1 -1 0
<strong>Explanation: </strong>After applying the equation 
A * Arr[i] * Arr[i] + B * Arr[i] + C on every 
element Arr[i] we get {-4, -1, 0, -1, -4, -9}.
After sorting, we get {-9, -4, -4, -1, -1, 0}. </span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
A = 1, B = 1, C = 1.
N = 3
Arr[] = {1, 2, 3}
<strong>Output:</strong> 
3 7 13
<strong>Explanation: </strong>After applying the equation
A * Arr[i] * Arr[i] + B * Arr[i] + C on every
element Arr[i] we get&nbsp;{3, 7, 13} which is 
already sorted.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>sortArray()</strong>&nbsp;which takes&nbsp;<strong>Arr[]</strong>,&nbsp;<strong>N, A, B </strong>and<strong>&nbsp;C</strong><strong>&nbsp;</strong>as input parameters&nbsp;and returns the sorted new list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6</sup><br>
-10<sup>5</sup> ≤ arr[i] ≤ 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Sorting</code>&nbsp;<code>Algorithms</code>&nbsp;