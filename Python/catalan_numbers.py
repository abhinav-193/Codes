def catalan_numbers(upper_limit: int) -> "list[int]":
   
    if upper_limit < 0:
        raise ValueError("Limit for the Catalan sequence must be ≥ 0")

    catalan_list = [0] * (upper_limit + 1)

   
    catalan_list[0] = 1
    if upper_limit > 0:
        catalan_list[1] = 1
        
    for i in range(2, upper_limit + 1):
        for j in range(i):
            catalan_list[i] += catalan_list[j] * catalan_list[i - j - 1]

    return catalan_list


if __name__ == "__main__":
    print("\n********* Catalan Numbers Using Dynamic Programming ************\n")
    print("\n*** Enter -1 at any time to quit ***")
    print("\nEnter the upper limit (≥ 0) for the Catalan number sequence: ", end="")
    try:
        while True:
            N = int(input().strip())
            if N < 0:
                print("\n********* Goodbye!! ************")
                break
            else:
                print(f"The Catalan numbers from 0 through {N} are:")
                print(catalan_numbers(N))
                print("Try another upper limit for the sequence: ", end="")
    except (NameError, ValueError):
        print("\n********* Invalid input, goodbye! ************\n")

    import doctest

    doctest.testmod()
