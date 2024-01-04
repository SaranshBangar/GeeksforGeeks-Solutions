<h2><a href="https://www.geeksforgeeks.org/problems/mind-game3637/1?page=1&difficulty=School,Basic&status=unsolved&sortBy=accuracy">Mind Game</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Someone is asked to perform the following operations on a randomly chosen number between 1 and 10.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px">Step 1: Double the chosen number.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px">Step 2: Add a number <strong>K</strong>(even number given as input) to the number obtained after&nbsp;Step1</span></p>

<p><span style="font-size:18px">Step 3: Divide the obtained number in Step 2 by 2.</span></p>

<p><span style="font-size:18px">Step 4: Now subtract the obtained number in Step 3 with the original chosen number N</span></p>

<p><span style="font-size:18px">Your task is to find the answer obtained at the end of Step 4 ,i.e,at the end of all the mentioned operations&nbsp;performed on the number chosen.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>K = </strong>10</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">5</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">Suppose chosen number is 3, then after
Step 1: number=6
Step 2: number=6+10=16
Step 3: number=16/2=8
Step 4: 8-3=5(required answer).</span>
<span style="font-size:18px">No matter what number Rohan chooses
the answer always comes to be 5.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>K = </strong>2</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">1</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">Suppose chosen number is 8, then after
Step 1: number=16
Step 2: number=16+2=18
Step 3: number=18/2=9
Step 4: 9-8=1(required answer).</span>
<span style="font-size:18px">No matter what number Rohan chooses
the answer always comes to be 1.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>mindGame()</strong> which takes an Integer K as input and returns the answer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">2 &lt;= K &lt;= 10<sup>8</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;