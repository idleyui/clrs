### 2-1

- a.
对于每个子表中的序列，插入排序的最坏情况为 θ(k^2)，k 个表一共花费

    ![](http://latex.codecogs.com/gif.latex?\theta((n/k)*k^2)=\theta(nk))

- b.
当子表取值为 k 时，树的高度下降 k，得到公式

    ![](http://latex.codecogs.com/gif.latex?\theta([(lgn+1)-(lgk+1)]n)=\theta(nlg(n/k)))

- c.


- d.

### 2-2

- a.

- b.
循环不变式：子数组 A[j+1...A.length] 中的元素均小于 A[j]

    证明：

    初始化：初始化的时候子数组中没有元素，故一定成立

    保持：每次迭代将 A[j] 与 A[j-1] 作比较，如果 A[j] < A[j-1] 则交换值，在循环不变式的基础上
    保持了 A[j...A.length] 的元素均小于 A[j-1]，在将 j 左移一位后保持循环不定式成立

    终止：终止条件是 j = i+1，当最后一步执行完成后 A[i+1...A.length] 中的元素均小于 A[i]，
    故算法正确

- c.
循环不变式：子数组 A[1...i-1] 中的元素有序且其中的最大值<= A[i...A.length] 中的最小值

    证明：

    初始化：初始化的时候子数组中没有元素，一定成立

    保持：每次迭代执行 b 中的过程从后往前选出 A[1...A.length] 中的最小值，与 A[i] 交换，此时
    max(A[1...i-1]) <= A[i] <= min(A[i+1...A.length])，在下一次 i+1 后子数组将包括 A[i]，
    继续保持循环不变式成立

    终止：当迭代到最后一步时，子数组 A[1...A.length-1]一定有序且均小于等于 A[A.length]，于是
    终止时也成立

- d.
也是 θ(n^2)

### 2-3

- a.
θ(n)

- b.
    ```
    MULTI(A, x)
    result = A[1]
    for i=2 to A.length
        power = 1
        for j=1 to i-1
            power = power * x
        result = result + power * A[i]
    return result
    ```




