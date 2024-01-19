<h2><a href="https://www.geeksforgeeks.org/problems/top-k-numbers3425/1">Top k numbers in a stream</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given <strong>N</strong> numbers in an array, your task is to keep <strong>at most </strong>the <strong>top K </strong>numbers with respect to their <strong>frequency</strong>.</span></p>
<p><span style="font-size: 18px;">In other words, you have to iterate over the array, and <strong>after each index</strong>, determine the <strong>top K most frequent numbers </strong>until that iteration and store them in an array in <strong>decreasing order of frequency</strong>. An array will be formed for each iteration and stored in <strong>an array of arrays</strong>. If the total number of distinct elements is less than <strong>K</strong>, then keep all the distinct numbers in the array. If two numbers have <strong>equal frequency</strong>, place the <strong>smaller number first </strong>in the array.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N=5, K=4
arr[] = {5, 2, 1, 3, 2} 
<strong>Output:</strong> <br>5 <br>2 5 <br>1 2 5 <br>1 2 3 5 <br>2 1 3 5&nbsp;
<strong>Explanation</strong>:
Firstly there was 5 whose frequency
is max till now. So resulting sequence is {5}.
Then came 2, which is smaller than 5 but
their frequencies are same so resulting sequence is {2, 5}.<br>Then came 1, which is the smallest among all the
numbers arrived, so resulting sequence is {1, 2, 5}.<br>Then came 3 , so resulting sequence is {1, 2, 3, 5}<br>Then again 2, which has the highest
frequency among all numbers, <br>so resulting sequence {2, 1, 3, 5}.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N=6, K=3
arr[] = {2, 1, 2, 1, 2, 1} 
<strong>Output:</strong> <br>2 <br>1 2 <br>2 1 <br>1 2 <br>2 1<br>1 2<br><strong>Explanation:<br></strong>As total number of distinct values never<br>exceeds 2, you have to return only those two<br>values. In the case where frequency of 1 gets<br>equal with the frequency of 2, you have to <br>keep 1 before 2 in the array.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>kTop()</strong> that takes <strong>array a</strong>,&nbsp;<strong>integer n</strong> <strong>and integer&nbsp;k</strong> as parameters and returns the array of arrays.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N*K).<br><strong>Expected Auxiliary Space:</strong> O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>4<br></sup></span><span style="font-size: 18px;">1 ≤ K ≤ 10<sup>2</sup><sup><br></sup>1 ≤ a[i] ≤ 10<sup>2</sup><sup>&nbsp;</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Media.net</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Map</code>&nbsp;<code>priority-queue</code>&nbsp;<code>Data Structures</code>&nbsp;