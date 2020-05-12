"""
Functions to analyze the time complexity
"""

# TODO
# Given a function below, analyze it's time complexity in terms of f(n). SO that f(n) = n^2
# And what is it's order?


def ex_1(n):
    for i in range(n):
        for j in range(i):
            print(j)


# TODO
# Given a function below, analyze it's time complexity in terms of f(n). So that f(n) = √2
# And what is it's order?

# int `i` is always incrementing
# At every loop step int `i` is added to int `p`
def ex_2(n, p=0, i=1):
    while p <= n:
        p = p + i
        i += 1
    return p


if __name__ == '__main__':
    pass
