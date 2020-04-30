'''
Given a function that should be analyzed using frequency count method.
With list and int=len(list) as input.
Analize it.
'''


# TODO
# Analize the following lines in terms of time so that => f(n) = 2n + 3
# TODO
# What is the degree of above polinomial and waht is it's order?
# TODO
# Analize the function below in terms of space complexity so that => s(n) = n + 3   # noqa
def sum(array, n):
    s = 0
    for i in range(n):
        s += array[i]
    return s


if __name__ == '__main__':
    array = [8, 2, 5, 6, 4]
    print(sum(array, 5))
