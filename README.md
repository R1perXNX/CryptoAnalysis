## Cryptanalysis Toolkit Documentation

This suite comprises four interconnected projects for analyzing and cracking classical ciphers. Below is a detailed breakdown of each component:

----------

### **1. ADFGVX Cracker (C++)**

**Purpose**: Crack the ADFGVX cipher using parallel permutation testing and frequency analysis.  
**Key Features**:

-   **Multi-threaded Permutation Analysis**: Tests transposition keys of lengths 6–10 simultaneously.
    
-   **Index of Coincidence (IC) Scoring**: Ranks decrypted texts by closeness to English IC (0.0667).
    
-   **Interactive Substitution**: Users manually adjust bigram-to-character mappings for refined decryption.
    
-   **Frequency Mapping**: Uses bigram frequencies to guess substitutions.
    

**Code Structure**:

-   `Cracker.h`: Manages threads, permutations, and IC calculations.
    
-   `Cipher.cpp`: Implements ADFGVX encryption logic (for validation).
    
-   `CMakeLists.txt`: Build configuration.
    

**Usage**:

    ./ADFGVXCrackerV2  # Starts interactive cracking session

**Output**: Displays candidate keys and allows real-time substitution adjustments.

----------

### **2. Playfair Cracker (Java)**

**Purpose**: Decrypt Playfair ciphertexts using simulated annealing and quadgram scoring.  
**Key Features**:

-   **Simulated Annealing**: Iteratively refines decryption keys with temperature decay.
    
-   **Quadgram Scoring**: Evaluates text likelihood using precomputed frequency data (`quadgram.h`).
    
-   **Key Manipulation**: Dynamically swaps rows, columns, or characters to explore the key space.
    

**Code Structure**:

-   `Cracker.java`: Implements annealing logic and key manipulation.
    
-   `Main.java`: Hardcodes ciphertext and initializes cracking.
    

**Usage**:

    java PlayfairMain  # Starts automated key optimization

**Output**: Logs high-scoring keys and decrypted text snippets.

----------

### **3. Transposition-Vigenère Cracker (Java)**

**Purpose**: Attack combined Transposition + Vigenère ciphers.  
**Key Features**:

-   **Permutation Generation**: Tests all possible transposition keys (O(n!) complexity).
    
-   **Layered Decryption**: First cracks transposition, then Vigenère using IC filtering (≥0.06).
    
-   **Multi-threading**: Parallelizes work across key lengths 6–10.
    

**Code Structure**:

-   `Cracking.java`: Derives Vigenère keys via frequency analysis.
    
-   `Utils.java`: Handles text rearrangement, IC calculation, and permutations.
    
-   `Executer.java`: Thread logic for parallel execution.
    

**Usage**:

    java Main  # Starts multi-threaded cracking

**Output**: Prints valid transposition/Vigenère key pairs and decrypted plaintext.

----------

### **4. Enigma Machine Simulator & Cracker (Python)**

**Purpose**: Simulate an Enigma machine and provide foundational tools for crib analysis.  
**Key Features**:

-   **Enigma Components**:
    
    -   `rotor.py`: Models rotors with configurable wirings and rotation.
        
    -   `reflector.py`: Implements fixed reflector permutations.
        
    -   `plugboard.py`: Handles letter swaps.
        
-   **Crib Analysis (WIP)**: Uses  `networkx`  to map plaintext-ciphertext relationships.
    

**Code Structure**:

-   `enigma.py`: Combines components to encrypt/decrypt messages.
    
-   `cracker.py`: Early-stage graph-based analysis (non-functional for full decryption).
    
----------

### **Limitations**

1.  **Enigma Cracker**: Not finished. Only simulates encryption; crib analysis is incomplete.
    
2.  **Performance**: Transposition permutation tests become impractical beyond key length 10.
    
3.  **Interoperability**: Components are language-specific (C++/Java/Python).
    

----------

**Note**: This project was created for the University of Antwerp's Code Theory class. Real-world ciphers require more advanced techniques. 

Learning purposes only.
