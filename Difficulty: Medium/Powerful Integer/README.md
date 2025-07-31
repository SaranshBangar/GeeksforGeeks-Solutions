<h2><a href="https://www.geeksforgeeks.org/problems/powerfull-integer--170647/1">Powerful Integer</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a 2D integer array <strong>intervals[][]</strong> of length <strong>n</strong>, where each <strong>intervals[i] = [start, end]</strong> represents a closed interval (i.e., all integers from start to end, inclusive). You are also given an integer <strong>k</strong>. An integer is called <strong>Powerful</strong> if it appears in at least <strong>k</strong> intervals. Find the <strong>maximum Powerful</strong> Integer.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: If no integer occurs at least <strong>k</strong> times return <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>n = 3, intervals[][] = [[1, 3], [4, 6], [3, 4]], k = 2
<strong>Output: </strong>4
<strong>Explanation: </strong></span><span style="font-size: 18px;">Integers 3 and 4 appear in 2 intervals. The maximum is 4.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input : </strong>n = 4, intervals[][] = [[1, 4], [12, 45], [3, 8], [10, 12]], k = 3
<strong>Output: </strong>-1
<strong>Explanation: </strong>No integer appears in at least 3 intervals.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input : </strong>n = 5, intervals[][] = [[16, 21], [5, 8], [12, 17], [17, 29], [9, 24]], k = 3
<strong>Output: </strong>21
<strong>Explanation: </strong>Integers 16, 17, 18, 19, 20 and 21 appear in at least 3 intervals. The maximum is 21.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>1 ≤ intervals[i][0] ≤ intervals[i][1] ≤ 10<sup>9</sup><br>1 ≤ k ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Sorting</code>&nbsp;<code>Map</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;