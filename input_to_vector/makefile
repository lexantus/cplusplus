disliked_words: disliked_words_dictionary.o
	g++ -Wall disliked_words_dictionary.o -o disliked_words

disliked_words_dictionary.o: disliked_words_dictionary.cpp
	g++ -Wall -g -c disliked_words_dictionary.cpp -I ../lib

input_to_vector: in_to_vect.o
	g++ -Wall in_to_vect.o -o input_to_vector
	
in_to_vect.o: in_to_vect.cpp
	g++ -Wall -g -c in_to_vect.cpp -I ../lib