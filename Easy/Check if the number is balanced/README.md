<h2><a href="https://www.geeksforgeeks.org/problems/check-if-the-number-is-balanced3014/1?page=9&difficulty=Easy&status=unsolved&sortBy=accuracy">Check if the number is balanced</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer<strong> N </strong>which has odd number of digits, find whether the given number is a balanced or not. </span></p>

<p><span style="font-size:18px">An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit and the sum of all digits to the right of the middle digit is equal.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 1234006
<strong>Output:</strong> 1 
<strong>Explanation:</strong> Total number of digits in
N = 7. Middle digit is 4. LHS = 1+2+3 = 6
and RHS = 0+0+6 = 6. LHS is equal to RHS. </span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 12345
<strong>Output:</strong> 0
<strong>Explanation: </strong>LHS = 1+2 = 3 and RHS = 4+5
= 9. LHS and RHS are not equal.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>balancedNumber() </strong>which takes string <strong>N</strong> as input parameter and returns a boolean value denoting if N is balanced or not.<br>
<strong>Note: </strong>The driver code prints 1 if the returned value is true&nbsp;otherwise&nbsp;0</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(number of digits in N)<br>
<strong>Expected Auxiliary Space: </strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;= N &lt;= 10<sup>100</sup><br>
N will always have odd number of digits.<br>
Since N can be very large, it is given as a string.&nbsp;</span></p>

<p>&nbsp;</p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;