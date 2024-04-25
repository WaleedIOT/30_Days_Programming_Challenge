def main():
    # Initialize an empty list to store fruits
    fruits = []

    # Prompt the user to enter 5 fruits
    print("Please enter 5 fruits, one at a time:")
    for i in range(5):
        fruit = input(f"Enter fruit {i+1}: ")
        fruits.append(fruit)  # Add the entered fruit to the list

    # Print the list of fruits using a for loop
    print("\nList of fruits:")
    for fruit in fruits:
        print(fruit)

if __name__ == "__main__":
    main()

