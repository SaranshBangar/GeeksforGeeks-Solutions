<h2><a href="https://www.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1">Paths from root with a specified sum</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary tree and a sum&nbsp;<strong>S</strong>, print all the paths, <strong>starting from root</strong>, that sums upto the given sum. Path <strong>not necessarily</strong>&nbsp;end on a leaf node.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>
sum = 8
Input tree
         1
       /   \
     20      3
           /    \
         4       15   
        /  \     /  \
       6    7   8    9      

<strong>Output :</strong>
1 3 4
<strong>Explanation : </strong>
Sum of path 1, 3, 4 = 8.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>
sum = 38<br>Input tree
          10
       /     \
     28       13
           /     \
         14       15
        /   \     /  \
       21   22   23   24
<strong>Output :</strong>
10 28
10 13 15  
<strong>Explanation :</strong>
Sum of path 10, 28 = 38 and
Sum of path 10, 13, 15 = 38.</span></pre>
<div><strong><span style="font-size: 18px;">Your task :</span></strong></div>
<div><span style="font-size: 18px;">You don't have to read input or print anything. Your task is to complete the function <strong>printPaths()</strong> that takes the root of the tree and sum as input and returns a vector of vectors containing the paths that lead to the sum.</span></div>
<div>&nbsp;</div>
<div><strong><span style="font-size: 18px;">Expected Time Complexity: </span></strong><span style="font-size: 18px;">O(N)</span></div>
<div><strong><span style="font-size: 18px;">Expected Space Complexity: </span></strong><span style="font-size: 18px;">O(N<sup>2</sup>)</span></div>
<div>&nbsp;</div>
<div><strong><span style="font-size: 18px;">Your Task :</span></strong></div>
<div><span style="font-size: 18px;">1 &lt;= N &lt;= 2*10<sup>3</sup></span></div>
<div><span style="font-size: 18px;">-10<sup>3</sup>&nbsp;&lt;= sum, Node.key &lt;= 10<sup>3</sup></span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;