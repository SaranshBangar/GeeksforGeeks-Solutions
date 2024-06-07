<h2><a href="https://www.geeksforgeeks.org/problems/maximum-occured-integer4602/1">Maximum occured integer</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given <strong>n</strong> integer ranges, the task is to return the <strong>maximum occurring integer</strong> in the given ranges. If more than one such integer exists, return the <strong>smallest</strong> one. <br>The ranges are in two arrays <strong>l</strong>[] and <strong>r[].&nbsp; l[i]</strong> consists of the starting point of the range and <strong>r[i]</strong> consists of the corresponding endpoint of the range &amp; a maxx which is the <strong>maximum </strong>value of r[].</span></p>
<blockquote>
<p><span style="font-size: 18px;">For example, consider the following ranges.<br>l[] = {2, 1, 3}, r[] = {5, 3, 9)<br>Ranges represented by the above arrays are.<br>[2, 5] = {2, <strong>3</strong>, 4, 5}<br>[1, 3] = {1, 2, <strong>3</strong>}<br>[3, 9] = {<strong>3</strong>, 4, 5, 6, 7, 8, 9}<br>The maximum occurred integer in these ranges is 3.</span></p>
</blockquote>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4, l[] = {1,4,3,1}, r[] = {15,8,5,4}, maxx = 15
<strong>Output: </strong>4<strong>
Explanation: </strong>The given ranges are [1,15] [4, 8] [3, 5] [1, 4]. The smallest number that is most common or appears most times in the ranges is 4.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 5, l[] = {1,5,9,13,21}, r[] = {15,8,12,20,30}, maxx = 30
<strong>Output: </strong>5<strong>
Explanation: </strong>The given ranges are [1, 15] [5, 8] [9, 12] [13, 20] [21, 30]. The smallest number that is most common or appears most times in the ranges is 5.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(n+maxx).<br><strong>Expected Auxiliary Space:</strong> O(maxx), <strong>maxx</strong> is maximum element in r[]</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>6</sup><br>0 ≤ l[i], r[i] ≤ 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Mathematical</code>&nbsp;