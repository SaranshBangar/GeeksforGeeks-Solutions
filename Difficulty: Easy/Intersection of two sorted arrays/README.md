<h2><a href="https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1?page=3&difficulty=Basic,Easy&status=unsolved&sortBy=submissions">Intersection of two sorted arrays</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">&nbsp;Given two sorted arrays <strong>arr1</strong>[] and <strong>arr</strong>2[]. Your task is to return the <strong>intersection </strong>of both arrays.</span></p>
<blockquote>
<p><span style="font-size: 18px;">Intersection of two arrays is said to be elements that are common in both arrays.&nbsp;</span><span style="font-size: 18px;">The intersection should not count duplicate elements.</span></p>
</blockquote>
<p><span style="font-size: 18px;">Note</span><span style="font-size: 18px;">:</span><span style="font-size: 18px;">&nbsp;</span><span style="color: #1e2229; font-family: Nunito; font-size: 14pt; background-color: #ffffff;">If there is no intersection then return an empty array.</span></p>
<p><span style="font-size: 18px;"><strong>Examples</strong></span><strong style="font-size: 18px;">:</strong></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr1[] = [1, 2, 3, 4], arr2[] = [2, 4, 6, 7, 8]
<strong>Output</strong>: [2, 4]
<strong>Explanation</strong>: 2 and 4 are only common elements in both the arrays.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr1[] = [1, 2, 2, 3, 4], arr2[] = [2, 2, 4, 6, 7, 8]
<strong>Output</strong>: [2, 4]
<strong>Explanation</strong>: 2 and 4 are the only common elements.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr1[] = [1, 2], arr2[] = [3, 4]
<strong>Output</strong>: []
<strong>Explanation</strong>: No common elements.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n + m)<br><strong>Expected Auxiliary Space:</strong> O(min(n,m))</span><br><br>&nbsp;<span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= arr1.size(),arr2.size() &lt;= 10<sup>5</sup><br>1 &lt;= arr1[i], arr2[i] &lt;= 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;