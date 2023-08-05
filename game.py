import tkinter as tk
from tkinter import messagebox
import random

class GuessNumberGame:
    def __init__(self, root):
        self.root = root
        self.root.title("Guess the Number Game")

        self.number_to_guess = random.randint(1, 100)
        self.attempts = 0

        self.label = tk.Label(root, text="Guess a number between 1 and 100:")
        self.label.pack()

        self.entry = tk.Entry(root)
        self.entry.pack()

        self.button = tk.Button(root, text="Submit Guess", command=self.check_guess)
        self.button.pack()

    def check_guess(self):
        player_guess = int(self.entry.get())
        self.attempts += 1

        if player_guess < self.number_to_guess:
            result = "Too low! Try again."
        elif player_guess > self.number_to_guess:
            result = "Too high! Try again."
        else:
            result = f"Congratulations! You've guessed the number {self.number_to_guess} in {self.attempts} attempts!"
            self.number_to_guess = random.randint(1, 100)
            self.attempts = 0

        messagebox.showinfo("Result", result)
        self.entry.delete(0, tk.END)

if __name__ == "__main__":
    root = tk.Tk()
    game = GuessNumberGame(root)
    root.mainloop()
