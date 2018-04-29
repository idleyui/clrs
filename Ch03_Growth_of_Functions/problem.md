### 3-1

![](http://latex.codecogs.com/gif.latex?p(n)=\sum_{i=0}^da_in^i(a_d%3E0))

证明：

- a. 若 k >= d, 则 p(n)=O(n^k)

    证明 p(n)=O(n^k), 等价于证明存在 n0, c, 当 n >= n0 时, p(n) <= cn^k

    不等式两边同时除以 n^d, 得到不等式3-1-1 ![](http://latex.codecogs.com/gif.latex?\frac{a_0}{n^d}+\frac{a_1}{n^{d-1}}+...+a_d%20\leq%20cn^{k-d})

    取 ![](http://latex.codecogs.com/gif.latex?n_0=\max\{\sqrt[n]{a_0},%20\sqrt[n-1]{a_1},%20...%20a_{d-1}\}) 且 >1
    , ![](http://latex.codecogs.com/gif.latex?c=a_d+b(b%3E1))

    此时 不等式 3-1-1 左边 < c <= cn^(k-d) => p(n) = O(n^k)

- b.c.d.e 与之类似

### 3-2

k >= 1, ε > 0 & c > 1

A       |B          | O     | o     | Ω     | w | θ
:---    |:---       | ---   | ---   |---    |---|---
(lgn)^k |n^ε        |y      |y      |y      |y  |n
n^k     |c^n        |y      |y      |n      |n  |n
sqrtn   |n^(sinn)   |n      |n      |n      |n  |n
2^n     |2^(n/2)    |n      |n      |y      |y  |n
n^lgc   |c^lgn      |y      |n      |y      |n  |y
lg(n!)  |lg(n^n)    |y      |n      |y      |n  |y

### 3-3

- a.

    ![](http://latex.codecogs.com/gif.latex?2^{2^{n+1}}\geq%202^{2^{n}}\geq%20(n+1)!%20\geq%20n!\geq%20e^n\geq%20n2^n\geq\\\\%202^n\geq%20(\frac{3}{2})^n\geq%20(lgn)^{lgn}%20=%20n^{lglgn}%20\geq%20(lgn)!%20\geq%20n^3%20\geq\\\\%20n^2%20=%204^{lgn}%20\geq%20nlgn%20\approx%20lg(n!)%20\geq%20n%20=%202^{lgn}\geq\\\\%20(\sqrt2)^{lgn}%20\geq%202^{\sqrt{2lgn}}%20\geq%20lg^2n%20\geq%20lnn%20\geq%20\sqrt{lgn}%20\geq%20lnlnn\geq%20\\\\2^{lg^*n}%20\geq%20lg^*n%20\geq%20lg^*{lgn}=lg{lg^*n}%20\geq%20n^{\frac{1}{lgn}}%20\approx%201)



