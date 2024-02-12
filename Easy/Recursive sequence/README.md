<h2><a href="https://www.geeksforgeeks.org/problems/recursive-sequence1611/1">Recursive sequence</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">A function <strong>F</strong> is defined as follows <strong>F(n)= (1) +(2*3) + (4*5*6) ... upto n terms </strong>(look at the examples for better clarity). Given an integer <strong>n,</strong>&nbsp;determine the <strong>F(n)</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Note: </strong>As the answer can be very large, return the answer modulo <strong>10<sup>9</sup>+7</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> n = 5
<strong>Output:</strong> 365527
<strong>Explanation:</strong> <br>F(5) = 1 + 2*3 + 4*5*6 + 7*8*9*10 + 11*12*13*14*15 = 365527.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> n = 7
<strong>Output:</strong> 6006997207
<strong>Explanation:</strong> <br>F(7) = 1 + 2*3 + 4*5*6 + 7*8*9*10 + 11*12*13*14*15 + <br>16*17*18*19*20*21 + 22*23*24*25*26*27*28 = 6006997207.<br>6006997207 % 10<sup>9</sup>+7 = 6997165<br></span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>sequence()</strong> which takes an integer <strong>n </strong>as an input parameter and returns the value of <strong>F(n).</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n<sup>2</sup>)<br><strong>Expected Space Complexity:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>MAQ Software</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Recursion</code>&nbsp;<code>Algorithms</code>&nbsp;