<h2><a href="https://cses.fi/problemset/task/1097/">Removal Game</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18724646](https://cses.fi/problemset/result/18724646/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>There is a list of <span class="math math-inline">n</span> numbers and two players who move alternately. On each move, a player removes either the first or last number from the list, and their score increases by that number. Both players try to maximize their scores.</p>
<p>What is the maximum possible score for the first player when both players play optimally?</p>
<h1 id="input">Input</h1>
<p>The first input line contains an integer <span class="math math-inline">n</span>: the size of the list.</p>
<p>The next line has <span class="math math-inline">n</span> integers <span class="math math-inline">x_1,x_2,\ldots,x_n</span>: the contents of the list.</p>
<h1 id="output">Output</h1>
<p>Print the maximum possible score for the first player.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 5000</span></li>
<li><span class="math math-inline">-10^9 \le x_i \le 10^9</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>4
4 5 1 3
</pre>
<p>Output:</p>
<pre>8
</pre>
