<h2><a href="https://www.geeksforgeeks.org/problems/searching-an-element-in-a-sorted-array-ternary-search--141631/1?page=1&category=Design-Pattern&sortBy=submissions">Searching an element in a sorted array (Ternary Search)</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a sorted array <strong>arr[]</strong> of size <strong>N</strong> and an integer <strong>K</strong>. The task is to check if K&nbsp;is present in the array or not using ternary search.<br>
<br>
<a href="http://www.geeksforgeeks.org/ternary-search/"><strong>Ternary Search</strong></a>- It is a divide and conquer algorithm that can be used to find an element in an array. In this algorithm, we divide the given array into three parts and determine which has the key (searched element).</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, K = 6
arr[] = {1,2,3,4,6}
<strong>Output: </strong>1<strong>
Exlpanation: </strong>Since, 6 is present in 
the array at index 4 (0-based indexing),
output is 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, K = 2
arr[] = {1,3,4,5,6}
<strong>Output: </strong>-1<strong>
Exlpanation: </strong>Since, 2 is not present 
in the array, output is -1.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>ternarySearch()</strong> which takes the sorted array <strong>arr[]</strong>, its size <strong>N</strong> and the element <strong>K</strong> as input parameters&nbsp;and returns<strong> 1</strong> if K&nbsp;is present in the array, else it returns <strong>-1</strong>.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Log<sub>3</sub>N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 <u>&lt;</u>&nbsp;N <u>&lt;</u>&nbsp;10<sup>6</sup><br>
1 <u>&lt;</u>&nbsp;K <u>&lt;</u>&nbsp;10<sup>6</sup><br>
1 <u>&lt;</u>&nbsp;arr[i] <u>&lt;</u>&nbsp;10<sup>6</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Design-Pattern</code>&nbsp;<code>Algorithms</code>&nbsp;