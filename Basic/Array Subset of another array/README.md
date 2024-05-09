<h2><a href="https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=3&sortBy=submissions">Array Subset of another array</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two arrays: <strong>a1[0..n-1]</strong> of size <strong>n</strong> and <strong>a2[0..m-1] </strong>of size <strong>m</strong>, where both arrays may contain duplicate elements. The task is to determine whether array a2 is a subset of array a1. It's important to note that both arrays can be sorted or unsorted. Additionally, each occurrence of a duplicate element within an array is considered as a separate element of the set.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
a2[] = {11, 3, 7, 1, 7}
<strong>Output</strong>:
Yes
<strong>Explanation:</strong>
a2[] is a subset of a1[]</span></pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
a1[] = {1, 2, 3, 4, 4, 5, 6}
a2[] = {1, 2, 4}
<strong>Output</strong>:
Yes
<strong>Explanation:</strong>
a2[] is a subset of a1[]</span></pre>
<p><br><span style="font-size: 18px;"><strong>Example 3:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
a1[] = {10, 5, 2, 23, 19}
a2[] = {19, 5, 3}<strong>
Output</strong>:
No<strong>
Explanation:</strong>
a2[] is not a subset of a1[]</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>isSubset()</strong>&nbsp;which takes the array <strong>a1[]</strong>, <strong>a2[]</strong>, its size <strong>n </strong>and <strong>m </strong>as inputs and return "Yes" if arr2 is subset of arr1 else return "No" if arr2 is not subset of arr1.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(max(n,m))<br><strong>Expected Auxiliary Space:</strong> O(n)<br><br><strong>Constraints:</strong><br>1 &lt;= n,m &lt;= 10<sup>5</sup><br>1 &lt;= a1[i], a2[j] &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Qualcomm</code>&nbsp;<code>GE</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Hash</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;