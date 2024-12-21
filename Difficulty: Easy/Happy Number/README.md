<h2><a href="https://www.geeksforgeeks.org/problems/happy-number1408/1?page=1&difficulty=Basic,Easy&status=unsolved&sortBy=submissions">Happy Number</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number <strong>N</strong>&nbsp;find whether its a happy number or not.<strong>&nbsp;</strong><br>
A number is called happy if it leads to 1 after a sequence of steps wherein each step, the number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1.<br>
<br>
<strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 19
<strong>Output: </strong>
1
<strong>Explanation:</strong>
19 is a Happy Number,
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
As we reached to 1, 
19 is a Happy Number.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 20
<strong>Output: </strong>
0
<strong>Explanation: </strong>
We can never reach to 1
by repeating the mentioned
steps.</span></pre>

<p><br>
<strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function <strong>isHappy()</strong>&nbsp;which takes&nbsp;an integer <strong>N</strong>&nbsp;as input parameter&nbsp;and returns 1 if N is a happy number or 0 otherwise.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(sqrt(N))<br>
<strong>Expected Space Complexity:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>4</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;