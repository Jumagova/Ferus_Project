
# import time
# import random
# import string

# # Open the file in write mode
# with open('lv_conf.h', 'w') as file:
#     # Infinite loop    
#        while True:
#         # Generate a random letter
#         letter = random.choice(string.ascii_lowercase)

#         # Write the letter to the file
#         file.write(letter)

#         # Flush the buffer to ensure immediate writing
#         file.flush()

#         # Print the random letter
#         print(f"A random letter '{letter}' has been copied to the file.")

#         time.sleep(1)
import random
import string
import time

while True:
# Open the file in write mode
    with open('main.cpp', 'w') as file:
        # Get the start time
        start_time = time.time()

        # Run the loop for 20 seconds
        while time.time() - start_time < random.randint(15,60):
            # Generate a random letter
            letter = random.choice(string.ascii_lowercase)

            # Write the letter to the file
            file.write(letter)

            file.flush()

            time.sleep(random.randint(2,7)/10)

            # Print the random letter
            print(f"A random letter '{letter}' has been copied to the file.")

    time.sleep(10)



