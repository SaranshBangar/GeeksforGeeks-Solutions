<h2><a href="https://www.geeksforgeeks.org/problems/combination-sum-iii--111703/1">Unique K-Number Sum</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two integers <strong>n</strong> and <strong>k</strong>, the task is to find all valid combinations of <strong>k</strong> numbers that adds up to <strong>n</strong> based on the following conditions:</span></p>
<ul>
<li><span style="font-size: 18px;"><strong>Only</strong> numbers from the range [1, 9] used.</span></li>
<li><span style="font-size: 18px;">Each number can only be used <strong>at most</strong> once.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Note:</strong> You can return the combinations in any order, the driver code will print them in sorted order.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> </span><span style="font-size: 18px;">n = 9, k = 3</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">[[1, 2, 6], [1, 3, 5], [2, 3, 4]]</span>
<span style="font-size: 14pt;"><strong>Explanation: </strong>There are three valid combinations of 3 numbers that sum to 9: [1 ,2, 6], [1, 3, 5] and [2, 3, 4].</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> </span><span style="font-size: 18px;">n = 3, k = 3</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">[]</span>
<strong><span style="font-size: 18px;">Explanation: </span></strong><span style="font-size: 18px;">It is not possible to pick 3 distinct numbers from 1 to 9 that sum to 3, so no valid combinations exist.</span></pre>
<p><strong><span style="font-size: 18px;">Constraints:</span></strong><br><span style="font-size: 18px;">1 ≤ n ≤ 50<br>1 ≤&nbsp;k ≤ 9</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Bloomberg</code>&nbsp;<code>Google</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Backtracking</code>&nbsp;<code>Arrays</code>&nbsp;<code>Recursion</code>&nbsp;