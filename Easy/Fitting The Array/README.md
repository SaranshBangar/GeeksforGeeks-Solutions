<h2><a href="https://www.geeksforgeeks.org/problems/fitting-the-array1514/1?page=1&category=Arrays&difficulty=Basic,Easy&status=unsolved&sortBy=accuracy">Fitting The Array</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek is playing an array game. He is weak in the concepts of arrays. Geek is given two arrays <strong>arr[ ]</strong> and <strong>brr[ ]</strong> of the same size <strong>n</strong>. The array<strong> arr[ ] </strong>will be said to fit in array <strong>brr[ ] </strong>if by arranging the elements of both arrays, there exists a solution such that&nbsp;i'th element of arr[ ] is <strong>less than or equal</strong> to&nbsp;i'th element of brr[ ], for each i, 0 &lt;= i &lt; n. Help Geek find if the given array <strong>arr[ ]</strong>&nbsp;will&nbsp;fit in array <strong>brr[ ] </strong>or not.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> arr[] = {7, 5, 3, 2},</span>
<span style="font-size:18px">       brr[] = {5, 4, 8, 7} and n = 4</span>
<span style="font-size:18px"><strong>Output:</strong> YES</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Transform arr[] = {2, 3, 5, 7} and</span>
<span style="font-size:18px">brr[] = {4, 5, 7, 8}.
Now, 2&lt;=4, 3&lt;=5, 5&lt;=7 and 7&lt;=8.
So arr[] array will</span> <span style="font-size:18px">fit in brr[] array.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> arr[] = {1, 2, 4},
       brr[] = {1, 2, 3} and n = 3 </span>
<span style="font-size:18px"><strong>Output:</strong> NO
<strong>Explanation:</strong> 
As 1&lt;=1, 2&lt;=2 but 4&gt;3 so, 
arr[] array will not</span> <span style="font-size:18px">fit in brr[] array. 
</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>isFit()</strong> that takes an array <strong>arr[]</strong>,&nbsp;another array <strong>brr[]</strong>, size of the array <strong>n</strong>&nbsp;and returns <strong>true</strong> if array arr[ ] fit in array brr[ ] otherwise returns <strong>false</strong>. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*log(N)).</span><br>
<span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ a[i], b[i] ≤ 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>logical-thinking</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;