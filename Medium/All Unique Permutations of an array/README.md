<h2><a href="https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1">All Unique Permutations of an array</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[] </strong>of length <strong>n. </strong>Find all possible <strong>unique permutations </strong>of the array in <strong>sorted order</strong>. A sequence <strong>A </strong>is greater than sequence <strong>B</strong> if there is an index <strong>i </strong>for which <strong>A<sub>j</sub> = B<sub>j</sub></strong> for all <strong>j&lt;i </strong>and&nbsp;</span><strong><span style="font-size: 18px;">A</span><sub>i</sub><span style="font-size: 18px;"> &gt; B</span><sub>i</sub></strong>.</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
n = 3
arr[] = {1, 2, 1}
<strong>Output</strong>: 
1 1 2
1 2 1
2 1 1
<strong>Explanation</strong>:
These are the only possible unique permutations
for the given array.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
n = 2
arr[] = {4, 5}
<strong>Output</strong>: 
Only possible 2 unique permutations are<br>4 5
5 4
</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong> uniquePerms()&nbsp;</strong>that takes an integer <strong>n</strong>, and an array <strong>arr </strong>of size <strong>n </strong>as input and returns <strong>a sorted list of lists </strong>containing all <strong>unique permutations </strong>of the array.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> &nbsp;O(n*n!)<br><strong>Expected Auxilliary Space:</strong> O(n*n!)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 ≤ n ≤ 9<br>1 ≤ arr<sub>i</sub> ≤ 10</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;