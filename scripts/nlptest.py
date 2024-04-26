import numpy as np
from sklearn.metrics import jaccard_score


def string_to_vector(s, character_set):
    """Convert a string to a binary vector based on the presence of characters in a given set."""
    return np.array([int(char in s) for char in character_set])




def calculate_jaccard_similarity(path, keywords):
    # Splitting the path by "/"
    path_parts = path.split("/")

    # Creating a set of all unique characters in the keywords and path parts
    all_chars = set(''.join(keywords + path_parts))

    # Converting keywords and path parts to binary vectors
    keywords_vectors = {keyword: string_to_vector(keyword, all_chars) for keyword in keywords}
    path_parts_vectors = [string_to_vector(part, all_chars) for part in path_parts]

    # Calculating Jaccard similarity for each part against each keyword using scikit-learn
    jaccard_scores = {
        keyword: [jaccard_score(keywords_vectors[keyword], part_vector, average='binary') for part_vector in
                  path_parts_vectors]
        for keyword in keywords
    }

    return jaccard_scores

path = "libz"
keywords = ["makefile", "readme", "zlib"]
result = calculate_jaccard_similarity(path, keywords)
print(result)