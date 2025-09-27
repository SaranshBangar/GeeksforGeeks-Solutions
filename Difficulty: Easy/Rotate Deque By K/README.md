<h2><a href="https://www.geeksforgeeks.org/problems/rotate-deque-by-k/1?timeMachineDate=2025-09-26">Rotate Deque By K</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given a deque <strong>dq </strong>(double-ended queue) containing non-negative integers, along with two positive integer&nbsp;<strong>type&nbsp;</strong>and&nbsp;<strong>k</strong>. The task is to rotate the deque circularly by&nbsp;<strong>k</strong> positions.<br></span><span style="font-size: 14pt;">There are two types of rotation operations:</span></p>
<p><span style="font-size: 14pt;"> </span></p>
<p><span style="font-size: 14pt;"> </span></p>
<ul>
<li data-start="370" data-end="531"><span style="font-size: 14pt;"><strong data-start="370" data-end="400">Right Rotation (Clockwise)</strong>: If <strong>type = 1</strong>, rotate the deque to the right. This means moving the last element to the front, and repeating the process k times.</span></li>
<li data-start="535" data-end="699"><span style="font-size: 14pt;"><strong data-start="535" data-end="569">Left Rotation (Anti-Clockwise)</strong>: If <strong>type = 2</strong>, rotate the deque to the left. This means moving the first element to the back, and repeating the process k times.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>dq = [1, 2, 3, 4, 5, 6], type = 1, k = 2
<strong>Output:</strong> [5, 6, 1, 2, 3, 4]&nbsp;
<strong>Explanation:</strong> The type is 1 and k is 2. So, we need to right rotate dequeue by 2 times.<br>In first right rotation we get [6, 1, 2, 3, 4, 5].<br>In second right rotation we get [5, 6, 1, 2, 3, 4].</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> dq = [10, 20, 30, 40, 50], type = 2, k = 3 
<strong>Output:</strong> [40, 50, 10, 20, 30]&nbsp;
<strong>Explanation:</strong> The type is 2 and k is 3. So, we need to left rotate dequeue by 3 times.<br>In first left rotation we get [20, 30, 40, 50, 10]. <br>In second left rotation we get [30, 40, 50, 10, 20].<br>In third left rotation we get [40, 50, 10, 20, 30].</span></pre>
<p><strong><span style="font-size: 18px;">Constraints:</span></strong><br><span style="font-size: 18px;">1 ≤ dq.size() ≤ 10<sup>5&nbsp;<br></sup>1 ≤ k ≤ 10<sup>5&nbsp;<br></sup>1 ≤ type ≤ 2</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Data Structures</code>&nbsp;<code>Deque</code>&nbsp;