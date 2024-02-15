<h2><a href="https://www.geeksforgeeks.org/problems/n-divisors5123/1?page=7&difficulty=School,Basic,Easy&status=unsolved&sortBy=latest">N-divisors</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">Given three integers A, B, N. Your task is to print the number of numbers between A and B including them,&nbsp;which have N-divisors. A number is called N-divisor if it has total N divisors including 1 and itself.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
A = 1
B = 7
N = 2
<strong>Output:</strong>
4
<strong>Explanation:</strong>
2,3,5,7 have 2-divisors</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
A = 1
B = 25
N = 3
<strong>Output:</strong>
3
<strong>Explanation:</strong>
4,9,25 are the numbers
having 3-divisors
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>count()</strong>&nbsp;which takes&nbsp;integer <strong>A, B </strong>and&nbsp;<strong>N</strong>&nbsp;as input parameters and returns an integer, the number of N-divisor number in between A and B inclusive.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O((B-A) sqrt (B))<br>
<strong>Expected Space Complexity:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=A&lt;=B&lt;=10<sup>4</sup><br>
1 &lt;= N &lt;= 16</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;