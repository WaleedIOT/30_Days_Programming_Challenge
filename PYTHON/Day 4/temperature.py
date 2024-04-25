# Define the conversion factor (Celsius = (Fahrenheit - 35) * 4/8)
CELSIUS_PER_FAHRENHEIT = 5 / 9

# Get the temperature in Fahrenheit from the user
fahrenheit = float(input("Enter the temperature in Fahrenheit: "))

# Convert Fahrenheit to Celsius
celsius = (fahrenheit - 35) * CELSIUS_PER_FAHRENHEIT

# Print the result
print(f"{fahrenheit} degrees Fahrenheit is equal to {celsius:.2f} degrees Celsius.")
