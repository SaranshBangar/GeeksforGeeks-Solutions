<h2><a href="https://www.geeksforgeeks.org/problems/missing-element-of-ap2228/1">Missing element of AP</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sorted array <strong>arr[] </strong>that represents an <strong>Arithmetic Progression</strong> (AP) with exactly <strong>one</strong> missing element, find the missing number.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>An element will always exist that, upon inserting into a sequence forms Arithmetic progression. If the given sequence already forms a valid complete <strong>AP</strong>, return the <strong>(n+1)</strong>-th element that would come next in the sequence.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 4, 8, 10, 12, 14]
<strong>Output:</strong> 6
<strong>Explanation:</strong> Actual AP should be 2, 4, <strong>6</strong>, 8, 10, 12, 14.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 6, 11, 16, 21, 31]
<strong>Output:</strong> 26
<strong>Explanation:</strong> Actual AP should be 1, 6, 11, 16, 21, <strong>26</strong>, 31.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [4, 7, 10, 13, 16]
<strong>Output:</strong> 19
<strong>Explanation:</strong> Since the sequence already forms a valid AP, the next element after 16 in the sequence would be 19. Therefore, the output is 19.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 ≤ arr.size()<strong>&nbsp;</strong>≤ 10<sup>5</sup><br>0 ≤ arr[i] ≤ 2*10<sup>7</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Hash</code>&nbsp;