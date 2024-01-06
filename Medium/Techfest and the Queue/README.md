<h2><a href="https://www.geeksforgeeks.org/problems/techfest-and-the-queue1044/1">Techfest and the Queue</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">A Techfest is underway, and each participant is given a ticket with a unique number. Organizers decide to award prize points to everyone who has a ticket ID between <strong>a</strong> and <strong>b</strong> (<strong>inclusive</strong>). The points given to a participant with ticket number <strong>x</strong> will be the <strong>sum of powers of the prime factors </strong>of <strong>x</strong>.</span></p>
<p><span style="font-size: 18px;">For instance, if points are to be awarded to a participant with ticket number <strong>12</strong>, the amount of points given out will be equal to <strong>the sum of powers in the prime factorization </strong>of <strong>12</strong> (<strong>2<sup>2</sup> × 3<sup>1</sup></strong>), which will be <strong>2 + 1 = 3</strong>.</span></p>
<p><span style="font-size: 18px;">Given <strong>a</strong> and <strong>b</strong>, determine the sum of all the points that will be awarded to the participants with ticket numbers between <strong>a</strong> and <strong>b</strong> (<strong>inclusive</strong>).</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br>a</strong> = 9<br><strong>b</strong> = 12
<strong>Output: <br></strong>8
<strong>Explanation: <br></strong>For 9, prime factorization is:3<sup>2</sup> <br>So, sum of the powers of primes is: 2
For 10, prime factorization is : 2<sup>1</sup>x5<sup>1</sup> 
So, sum of the powers of primes is: 2
For 11, prime factorization is : 11<sup>1</sup> 
So, sum of the powers of primes is: 1
For 12, prime factorization is : 2<sup>2</sup>x 3<sup>1</sup>&nbsp;
So, sum of powers of primes is: 3
Therefore the total sum is 2+2+1+3=8.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>a = 24, b = 27
<strong>Output: <br></strong>11
<strong>Explanation: <br></strong>For 24, prime factorization is: 2<sup>3</sup>x3<sup>1 <br></sup>So, sum of the powers of primes is: 4
For 25, prime factorization is : 5<sup>2</sup> <br>So, sum of the powers of primes is: 2
For 26, prime factorization is : 13<sup>1</sup>x2<sup>1</sup> <br>So, sum of the powers of primes is: 2
For 27, prime factorization is : 3<sup>3</sup> &nbsp;<br>So, sum of powers of primes is: 3
Therefore the total sum is 4+2+2+3=11.</span></pre>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Your Task:</strong><br><span style="font-size: 18px;">You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>sumOfPowers</strong></span><strong style="font-size: 18px;">() </strong><span style="font-size: 18px;">which takes </span><strong style="font-size: 18px;">a</strong><span style="font-size: 18px;"> and </span><strong style="font-size: 18px;">b</strong><span style="font-size: 18px;"> as input parameters and returns the </span><strong style="font-size: 18px;">sum </strong><span style="font-size: 18px;">of the power of </span><strong style="font-size: 18px;">primes </strong><span style="font-size: 18px;">that occur in </span><strong style="font-size: 18px;">prime factorization </strong><span style="font-size: 18px;">of the numbers between </span><strong style="font-size: 18px;">a </strong><span style="font-size: 18px;">to </span><strong style="font-size: 18px;">b (inclusive)</strong><span style="font-size: 18px;">.</span></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O( b*log(b) )<br><strong>Expected Space Complexity: </strong>O( b*log(b) )</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= a &lt;= b &lt;= 2x10<sup>5</sup><br>1 &lt;= b-a &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Prime Number</code>&nbsp;<code>sieve</code>&nbsp;