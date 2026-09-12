<h2><a href="https://cses.fi/problemset/task/3359/">Minimal Grid Path</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18724394](https://cses.fi/problemset/result/18724394/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>You are given an <span class="math math-inline">n \times n</span> grid whose each square contains a letter.</p>
<p>You should move from the upper-left square to the lower-right square. You can only move right or down.</p>
<p>What is the lexicographically minimal string you can construct?</p>
<h1 id="input">Input</h1>
<p>The first line has an integer <span class="math math-inline">n</span>: the size of the grid.</p>
<p>After this, there are <span class="math math-inline">n</span> lines that describe the grid. Each line has <span class="math math-inline">n</span> letters between <code>A</code> and <code>Z</code>.</p>
<h1 id="output">Output</h1>
<p>Print the lexicographically minimal string.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 3000</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>4
AACA
BABC
ABDA
AACA
</pre>
<p>Output:</p>
<pre>AAABACA
</pre>
