<h2><a href="https://www.geeksforgeeks.org/problems/parallel-or-perpendicular4257/1?page=1&difficulty=School&status=unsolved&sortBy=accuracy">Parallel or Perpendicular?</a></h2><h3>Difficulty Level : Difficulty: School</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two force vectors, find out whether they are parallel, perpendicular or neither. Let the first vector be A = a<sub>1</sub>&nbsp;i +a<sub>2</sub>&nbsp;j + a<sub>3</sub>&nbsp;k and the second vector be B = b<sub>1</sub>&nbsp;i + b<sub>2</sub>&nbsp;j + b<sub>3</sub>&nbsp;k.</span></p>
<p><span style="font-size: 18px;">A.B = a<sub>1&nbsp;</sub>* b<sub>1</sub>&nbsp;+ a<sub>2&nbsp;</sub>* b<sub>2</sub>&nbsp;+ a<sub>3&nbsp;</sub></span><span style="font-size: 18px;">* b<sub>3</sub></span></p>
<p><span style="font-size: 18px;">A x B = (a</span><sub style="font-size: 18px;">2&nbsp;</sub><span style="font-size: 18px;">* b</span><sub style="font-size: 18px;">3</sub><span style="font-size: 18px;">&nbsp;- a<sub>3&nbsp;</sub>*&nbsp;b<sub>2</sub>) i - (a<sub>1</sub></span><span style="font-size: 15px;">&nbsp;*&nbsp;</span><span style="font-size: 18px;">b<sub>3</sub></span><span style="font-size: 18px;">&nbsp;- b<sub>1</sub>* a<sub>3</sub>) j + (a<sub>1&nbsp;</sub>* b<sub>2</sub>&nbsp;- a<sub>2&nbsp;</sub>* b<sub>1</sub>) k</span></p>
<p><span style="font-size: 18px;">|A|<sup>2</sup>&nbsp;= a</span><sub style="font-size: 18px;">1</sub><sup style="font-size: 18px;">2</sup><span style="font-size: 18px;">&nbsp;+ a</span><sub style="font-size: 18px;">2</sub><sup style="font-size: 18px;">2</sup><span style="font-size: 18px;">&nbsp;+ a</span><sub style="font-size: 18px;">3</sub><sup style="font-size: 18px;">2</sup></p>
<p><span style="font-size: 18px;">If A.B = 0, then A and B are perpendicular.</span></p>
<p><span style="font-size: 18px;">If |A X B|<sup>2</sup>&nbsp;= 0, then A and B are parallel.</span><br><br><strong style="font-size: 18px;">Example 1:</strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>A = 3i + 2j + k, B = 6i + 4j + 2k
<strong>Output: </strong>1
<strong>Explanation: </strong>|A X B|<sup>2 </sup>= 0</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>A = 4i + 6j + k, B = i - 1j + 2k
<strong>Output: </strong>2
<strong>Explanation: </strong>A.B&nbsp;= 0</span>
</pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>find()</strong>&nbsp;which takes A and B vector as parameter and returns 1 if they are parallel to each other, 2 if they are perpendicular to each other or 0 otherwise. A and B vectors will contain (a1,a2,a3) and (b1,b2,b3) respectively.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(1)<br><strong>Expected Space Complexity:&nbsp;</strong>O(1)</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>-100 &lt;= Component &lt;= 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;
