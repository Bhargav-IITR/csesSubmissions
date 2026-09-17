<h2><a href="https://cses.fi/problemset/task/1653/">Elevator Rides</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18775767](https://cses.fi/problemset/result/18775767/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>There are <span class="math math-inline">n</span> people who want to get to the top of a building which has only one elevator. You know the weight of each person and the maximum allowed weight in the elevator. What is the minimum number of elevator rides?</p>
<h1 id="input">Input</h1>
<p>The first input line has two integers <span class="math math-inline">n</span> and <span class="math math-inline">x</span>: the number of people and the maximum allowed weight in the elevator.</p>
<p>The second line has <span class="math math-inline">n</span> integers <span class="math math-inline">w_1,w_2,\dots,w_n</span>: the weight of each person.</p>
<h1 id="output">Output</h1>
<p>Print one integer: the minimum number of rides.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 20</span></li>
<li><span class="math math-inline">1 \le x \le 10^9</span></li>
<li><span class="math math-inline">1 \le w_i \le x</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>4 10
4 8 6 1
</pre>
<p>Output:</p>
<pre>2
</pre>
