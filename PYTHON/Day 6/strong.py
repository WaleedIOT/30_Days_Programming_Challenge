import re

def is_strong_password(password):
    # Check if password is at least 8 characters long
    if len(password) < 8:
        return False
    
    # Check if password contains both uppercase and lowercase letters
    if not re.search(r'[a-z]', password) or not re.search(r'[A-Z]', password):
        return False
    
    # Check if password contains at least one digit
    if not re.search(r'[0-9]', password):
        return False
    
    # Check if password contains at least one special character
    if not re.search(r'[^a-zA-Z0-9]', password):
        return False
    
    # If all conditions are met, return True (strong password)
    return True

# Example usage:
password = input("Enter a password: ")
if is_strong_password(password):
    print("Strong password!")
else:
    print("Weak password. Password should contain letters (uppercase and lowercase), numbers, and special characters.")
