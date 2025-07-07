<h2><a href="https://www.geeksforgeeks.org/problems/next-greater-element/1">Next Greater Element in Circular Array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a circular integer array <strong>arr[]</strong>, the task is to determine the next greater element <strong>(NGE)</strong> for each element in the array.</span></p>
<p><span style="font-size: 18px;">The next greater element of an element <strong>arr[i]</strong> is the first element that is greater than <strong>arr[i]</strong> when traversing circularly. If no such element exists, return <strong>-1</strong> for that position.</span></p>
<p><strong><span style="font-size: 18px;">Circular Property:</span></strong></p>
<p><span style="font-size: 18px;">Since the array is circular, after reaching the last element, the search continues from the beginning until we have looked at all elements once.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:&nbsp;</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [1, 3, 2, 4]
<strong>Output</strong>: [3, 4, 4, -1]
<strong>Explanation</strong>:<br></span><span style="font-size: 18px;">The next greater element for 1 is 3.
The next greater element for 3 is 4.
The next greater element for 2 is 4.
The next greater element for 4 does not exist, so return -1.</span></pre>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input</strong><span style="font-size: 18px;">: arr[] = [0, 2, 3, 1, 1]
</span><strong style="font-size: 18px;">Output</strong><span style="font-size: 18px;">: [2, 3, -1, 2, 2]
<strong>Explanation:
</strong>The next greater element for 0 is 2.
The next greater element for 2 is 3.
The next greater element for 3 does not exist, so return -1.
The next greater element for 1 is 2 (from circular traversal).
The next greater element for 1 is 2 (from circular traversal).</span></span></pre>
<p><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><sup><br></sup></span></span><span style="font-size: 18px;"><span style="font-size: 18px;">0 ≤ arr[i] ≤ 10<sup>6</sup></span></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;