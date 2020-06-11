'''
Given function that takes 2 matrix lists and `int`
Returns the addition result of two matrix lists in range of `int` argument
'''

result = [
    [0, 0, 0],
    [0, 0, 0],
    [0, 0, 0],
]


def add(matrix_1, matrix_2, n):
    for i in range(n):
        for j in range(n):
            result[i][j] = matrix_1[i][j] + matrix_2[i][j]
    return result

# TODO
# Analyse `time` complexity for above procedure. So that f(n) = 2n^2 + 2n + 1:
    # What is the time function?
    # What is the highest degree?
    # What is the Order?

# TODO
# Analyse `space` complexity for above procedure. So that S(n) = 3n^2 + 3:
    # What are the variables?
    # What is the highest degree?
    # What is the Order?


if __name__ == '__main__':
    m_1 = [
        [1, 2, 3],
        [1, 2, 3],
        [1, 2, 3],
    ]
    m_2 = [
        [3, 2, 1],
        [3, 2, 1],
        [3, 2, 1],
    ]
    result = add(m_1, m_2, 3)
    print(f'The result matrix addition of lists: \n \
          {m_1} \n \
          {m_2} \n \
          is: {result}')
