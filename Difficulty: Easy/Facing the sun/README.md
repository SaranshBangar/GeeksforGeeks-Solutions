<h2><a href="https://www.geeksforgeeks.org/problems/facing-the-sun2126/1">Facing the sun</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>height</strong> representing the heights of buildings. You have to count the buildings that will see the sunrise (Assume the sun rises on the side of the array starting point).<br><em>Note:</em> The height of the building should be strictly greater than the height of the buildings left in order to see the sun.</span><br><span style="font-size: 18px;"><img style="height: 442px; width: 617px;" src="https://contribute.geeksforgeeks.org/wp-content/uploads/Building.png" alt=""></span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> height = [7, 4, 8, 2, 9]
<strong>Output:</strong> 3
<strong>Explanation:</strong> As 7 is the first element, it can see the sunrise. 4 can't see the sunrise as 7 is hiding it. 8 can see. 2 can't see the sunrise. 9 also can see<br>the sunrise.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> height = [2, 3, 4, 5]
<strong>Output:</strong> 4
<strong>Explanation:</strong> As 2 is the first element, it can see the sunrise.  3 can see the sunrise as 2 is not hiding it. Same for 4 and 5, they also can see the sunrise.
</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ height.size() ≤ 10<sup>6</sup><br>1 ≤ height<sub>i</sub> ≤ 10<sup>8</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;