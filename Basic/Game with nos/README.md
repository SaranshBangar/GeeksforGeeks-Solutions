<h2><a href="https://www.geeksforgeeks.org/problems/game-with-nos3123/1?page=2&difficulty=School,Basic,Easy,Medium&status=unsolved&sortBy=accuracy">Game with nos</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr[]</strong>, and you have to re-construct an&nbsp;array <strong>arr[]</strong>.<br>
The values in <strong>arr[]</strong> are obtained by doing Xor of consecutive elements in the array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> n=5, arr[ ] = {10, 11, 1, 2, 3}
<strong>Output :</strong> 1 10 3 1 3
<strong>Explanation:</strong>
At index 0, arr[0] xor arr[1] = 1
At index 1, arr[1] xor arr[2] = 10
At index 2, arr[2] xor arr[3] = 3
...
At index 4, No element is left So, it will remain as
it is.
New Array will be {1, 10, 3, 1, 3}.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> n=4, arr[ ] = {5, 9, 7, 6}
<strong>Output :</strong>  12 14 1 6
<strong>Explanation:</strong>
At index 0, arr[0] xor arr[1] = 12
At index 1, arr[1] xor arr[2] = 14
At index 2, arr[2] xor arr[3] = 1
At index 3, No element is left So, it will remain as it is.
New Array will be {12, 14, 1, 6}.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>game_with_number()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>&nbsp;and return the array re-constructed array <strong>arr</strong>. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ arr[i] ≤ 10<sup>7</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;