<h2><a href="https://www.geeksforgeeks.org/problems/count-reverse-pairs/1">Count Reverse Pairs</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given an array <strong>arr[ ]</strong> of positive<strong>&nbsp;</strong>integers, find the count of <strong>reverse pairs</strong>.&nbsp;A pair of indices (i, j) is said to be a&nbsp;<strong>reverse pair</strong>&nbsp;if both the following conditions are met:<br>&nbsp; &nbsp;1.&nbsp; 0 ≤ i &lt; j &lt; arr.size()&nbsp;</span><br><span style="font-size: 14pt;">&nbsp; &nbsp;2.&nbsp; arr[i] &gt; 2 * arr[j]</span></p>
<h4><span style="font-size: 14pt;"><strong>Examples</strong>:</span></h4>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [3, 2, 4, 5, 1, 20]
<strong>Output</strong>: 3
<strong>Explanation</strong>:
The Reverse pairs are 
(0, 4), arr[0] = 3, arr[4] = 1, 3 &gt; 2*1 
(2, 4), arr[2] = 4, arr[4] = 1, 4 &gt; 2*1 
(3, 4), arr[3] = 5, arr[4] = 1, 5 &gt; 2*1 
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [5, 4, 3, 2, 2]
<strong>Output</strong>: 2
<strong>Explanation</strong>:<br>The Reverse pairs are
(0, 3), arr[0] = 5, arr[3] = 2, 5 &gt; 2*2
(0, 4), arr[0] = 5, arr[4] = 2, 5 &gt; 2*2</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:<br></strong>1 ≤ arr.size() ≤ 5*10<sup>4</sup><br>1 ≤ arr[i] ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Bloomberg</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>Uber</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Segment-Tree</code>&nbsp;<code>Binary Indexed Tree</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Merge Sort</code>&nbsp;<code>Arrays</code>&nbsp;