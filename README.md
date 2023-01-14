# WordLadder
A word ladder game is a word game where the player is given a starting word and an ending word, and the goal is to find a chain of words, where each word in the chain differs from the previous word by only one letter. The player must change one letter at a time to create the next word in the chain, and the final word in the chain must be the ending word. The objective is to find the shortest chain of words that goes from the starting word to the ending word. It's also known as "word ladder puzzle" or "word ladder challenge"

<p align="center">
<img width="187" alt="wordaldder pic" src="https://user-images.githubusercontent.com/114533891/212440311-e8620bec-6431-4cb6-8f98-e6f9009f5127.png">

In this program we have 4 different text files containing thousands of words. One for 4 letter words,5 letter words, 6 letter
words and 7 letter words. We just need to run the program enter the text file base on how many letters there is and then the start word and the end word of choice with the same number of letters.

 > ## How to run it?
g++ -W -Wall -Werror -g -std=c++11 main.cpp WordLadder.cpp -o run

./run words*.txt <start word> <end word>
 
Example: ./a.out words4.txt abut aver

# Screenshots
Here are some of the examples of the world ladder of different number of letter words.
 
<p align="center">
![Examples word ladder](https://user-images.githubusercontent.com/114533891/212277908-6c5371f7-4f66-4491-a4cb-6018346135ac.jpg)
