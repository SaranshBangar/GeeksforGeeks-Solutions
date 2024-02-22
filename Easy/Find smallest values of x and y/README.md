<h2><a href="https://www.geeksforgeeks.org/problems/find-smallest-values-of-x-and-y-such-that-ax-by-01433/1?page=11&difficulty=Easy&status=unsolved&sortBy=latest">Find smallest values of x and y</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two values <strong>‘a’</strong> and <strong>‘b’</strong> that represent coefficients in “<strong>ax – by = 0</strong>”, find the smallest values of x and y that satisfy the equation. It may also be assumed that x &gt; 0, y &gt; 0, a &gt; 0 and b &gt; 0.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> a = 25, b = 35
<strong>Output:</strong> 7 5
<strong>Explaination:</strong> 25*7 - 35*5 = 0. And x = 7 
and y = 5 are the least possible values 
of x and y to get the equation solved.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> a = 3, b = 7
<strong>Output:</strong> 7 3
<strong>Explaination:</strong> For this case x = 7 and 
y = 3 are the least values of x and y 
to satisfy the equation.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>findXY()</strong> which takes a and b as input parameters and returns the least possible values of x and y to satisfy the equation.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(log(max(a, b)))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ a, b ≤ 10<sup>4</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;