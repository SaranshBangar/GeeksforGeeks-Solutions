<h2><a href="https://www.geeksforgeeks.org/problems/sequence-of-sequence1155/1">Sequence of Sequence</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given two integers <strong>m</strong> and <strong>n</strong>, try making a <strong>special sequence </strong>of numbers <strong>seq</strong> of length <strong>n</strong> such that </span></p>
<ul>
<li><span style="font-size: 14pt;"><strong>seq</strong><sub><strong>i</strong>+1</sub> &gt;= 2*</span><strong><span style="font-size: 18.6667px;">seq</span><sub>i</sub>&nbsp;</strong></li>
<li><strong><span style="font-size: 18.6667px;">seq</span></strong><sub><strong>i</strong>&nbsp;</sub><span style="font-size: 14pt;">&gt; 0</span></li>
<li><strong><span style="font-size: 18.6667px;">seq</span><sub>i&nbsp;</sub></strong><span style="font-size: 14pt;">&lt; <strong>m</strong></span></li>
</ul>
<p><span style="font-size: 14pt;">Your task is to determine total number of such <strong>special sequences </strong>possible.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>m = 10<br>n = 4
<strong>Output:</strong> <br>4
<strong>Explaination:</strong> <br>There should be n elements and 
value of last element should be at-most m. 
The sequences are {1, 2, 4, 8}, {1, 2, 4, 9}, 
{1, 2, 4, 10}, {1, 2, 5, 10}.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>m = 5<br>n = 2
<strong>Output:</strong> <br>6
<strong>Explaination:</strong> <br>The sequences are {1, 2}, 
{1, 3}, {1, 4}, {1, 5}, {2, 4}, {2, 5}.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>numberSequence()</strong> which takes the number <strong>m</strong> and <strong>n</strong> as input parameters and returns the <strong>number of possible special sequences</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(m*n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ m, n ≤ 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Divide and Conquer</code>&nbsp;<code>Algorithms</code>&nbsp;