def reverse_words_manual(sentence):
    # Convert string to a mutable list of characters
    chars = list(sentence)
    
    # Helper function to reverse a portion of the list in-place
    def reverse_string(start, end):
        while start < end:
            # Python allows us to swap variables in one line!
            chars[start], chars[end] = chars[end], chars[start]
            start += 1
            end -= 1

    n = len(chars)
    
    # Step 1: Reverse the entire list of characters
    reverse_string(0, n - 1)
    
    # Step 2: Reverse each individual word
    start = 0
    for i in range(n + 1):
        # If we hit a space or the end of the list, reverse the word we just passed
        if i == n or chars[i] == ' ':
            reverse_string(start, i - 1)
            start = i + 1 # Move start pointer to the next word
            
    # Convert the list of characters back into a string
    return "".join(chars)

# Test it
print(reverse_words_manual("programming in Python is fun"))
