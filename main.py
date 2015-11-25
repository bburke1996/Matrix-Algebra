def getColumns():
    
    # Get number of columns (n)
    
    columns = input("How many columns are in the matrix? \n")
    keepGoing = "y"
    while keepGoing == "y":
        try:
            n = int(columns)
            if n > 0:
                keepGoing = "n"
            else:
                columns = input("How many columns are in the matrix? \n")
        except:
            columns = input("ERROR: How many columns are in the matrix? \n")
    return n

def getRows():
    
    # Get number of rows (m)
    
    rows = input("How many rows are in the matrix? \n")
    keepGoing = "y"
    while keepGoing == "y":
        try:
            m = int(rows)
            if m > 0:
                keepGoing = "n"
            else:
                rows = input("How many rows are in the matrix? \n")
        except:
            rows = input("ERROR: How many rows are in the matrix? \n")
    return m

def getMatrix(choice):
    m = getRows()
    n = getColumns()
    
    matrix = []

    # Getting each element of the matrix
    
    for i in range(m):
        for j in range(n):
            keepGoing = "y"
            while keepGoing == "y":
                
                ij = input("Enter the element of row " + str(i +1) + " and column " +str(j +1) +": \n")
                #try:
                Aij = int(ij)
                matrix.insert([i][j], Aij)
                keepGoing = "n"
                #except:
#                ij = input("ERROR: Enter the element of row " + str(i +1) + " and column " +str(j +1) +": \n")

    # Turning matrix list into a nested list (an array of m arrays)
    
    print(matrix)
        
        
def main():
    
    # Print Menu Options
    
    print("Welcome to Brian's Matrix Algebra App!\n")
    print("----------------------------------------\n")
    print("Menu\n")
    print("1) Matrix Addition\n")
    print("2) Scalar Multiplication\n")
    print("3) Matrix Multiplication\n")
    print("\n")

    # Get an option input from user
    
    x = input("Choose an option (1, 2, or 3): \n")
    keepGoing = "y"
    while keepGoing == "y":
        try:
            choice = int(x)
            if choice >= 1 and choice <= 3:
                keepGoing = "n"
            else:
                x = input("Choose an option (1, 2, or 3): \n")
        except:
            x = input("ERROR: Choose an option (1, 2, or 3): \n")
        
    getMatrix(choice)
        
main()
