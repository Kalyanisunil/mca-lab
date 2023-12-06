def compare(S1, S2, n):
    """
    Compare the first n characters of two strings.

    Parameters:
    - S1 (str): The first string.
    - S2 (str): The second string.
    - n (int): The number of characters to compare.

    Returns:
    bool: True if the first n characters are the same, else False.
    """
    # Use string slicing to get the first n characters of each string
    substring_S1 = S1[:n]
    substring_S2 = S2[:n]

    # Compare the substrings
    return substring_S1 == substring_S2

# Example usage
string1 = "example1"
string2 = "example2"
n_characters = 4

result = compare(string1, string2, n_characters)

# Display the result
print(f"The first {n_characters} characters are the same: {result}")
