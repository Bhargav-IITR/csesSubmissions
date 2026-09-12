<h2><a href="https://cses.fi/problemset/task/1638">Grid Paths I</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18468210](https://cses.fi/problemset/result/18468210/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>Consider an <span class="math math-inline">n \times n</span> grid whose squares may have traps. It is not allowed to move to a square with a trap.</p>
<p>Your task is to calculate the number of paths from the upper-left square to the lower-right square. You can only move right or down.</p>
<h1 id="input">Input</h1>
<p>The first input line has an integer <span class="math math-inline">n</span>: the size of the grid.</p>
<p>After this, there are <span class="math math-inline">n</span> lines that describe the grid. Each line has <span class="math math-inline">n</span> characters: <code>.</code> denotes an empty cell, and <code>*</code> denotes a trap.</p>
<h1 id="output">Output</h1>
<p>Print the number of paths modulo <span class="math math-inline">10^9+7</span>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 1000</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>4
....
.*..
...*
*...
</pre>
<p>Output:</p>
<pre>3
</pre>
