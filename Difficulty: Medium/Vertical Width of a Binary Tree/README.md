<h2><a href="https://www.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1">Vertical Width of a Binary Tree</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Tree. You need to find and return the vertical width of the tree.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>         1
       /    \
      2      3
     / \    /  \
    4   5  6   7
            \   \
             8   9
<strong>Output: </strong>6
<strong>Explanation:</strong> The width of a binary tree is
the number of vertical paths in that tree.</span>

<span style="font-size: 18px;"><img class="alignnone size-full wp-image-356895" src="https://contribute.geeksforgeeks.org/wp-content/uploads/tree2-8.png" alt=""></span>

<span style="font-size: 18px;">The above tree contains <strong>6</strong> vertical lines.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>     1
&nbsp;   /  \
&nbsp;  2    3
<strong>Output: </strong>3<br></span><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation: </strong><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">The above tree has 3 vertical lines, hence the answer is 3.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(nlogn)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(height of the tree).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 &lt;= number of nodes &lt;= 10<sup>4</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Traversal</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;