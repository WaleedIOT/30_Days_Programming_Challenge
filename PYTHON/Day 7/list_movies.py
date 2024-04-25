movies = []  # Empty list to store favorite movies

while True:
  movie = input("Enter a favorite movie (or 'stop' to finish): ")
  if movie.lower() == "stop":  # Convert input to lowercase for case-insensitive stop
    break
  movies.append(movie)  # Add movie to the list

if movies:  # Check if any movies were entered
  print("\nYour favorite movies:")
  for movie in movies:
    print(movie)
else:
  print("\nYou haven't entered any favorite movies yet.")
