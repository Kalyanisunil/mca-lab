def factorial(n):
    """
    Calculate the factorial of a number.
    """
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

def series_sum(x, n):
    """
    Calculate the sum of the series 1/1! + 4/2! + 27/3! + ... + x^n/n!
    """
    total_sum = 0

    for i in range(1, n + 1):
        term = (x ** i) / factorial(i)
        total_sum += term

    return total_sum

# Example usage
x_value =  int(input("enter the value::"))
n_terms = int(input("enter the number of terms:"))

result = series_sum(x_value, n_terms)
print(f"The sum of the series is: {result}")
