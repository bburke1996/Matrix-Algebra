def matrixAdd(matrix1):
   print("Enter the information of the matrix that will be added to the matrix that you just entered.\n")
   print("Note that the two matricies to be added must have the same dimensions.\n")
   matrix2 = getMatrix
   newMatrix = []
   for 

def rowInputVerification(i, n):
    keepGoing = "y"
    while keepGoing == "y":
        row = input("Enter the elements in row " + str(i + 1) + ". Separare each element by a single space: ").split()
        try:
            for x in range(n):
                row[x] = int(row[x])
            if len(row) == n:
                keepGoing = "n"
            else:
                print("Each row can only have as many elements as there are columns in the matrix.")
                row = input("Enter the elements in row " + str(i + 1) + ". Separare each element by a single space: ").split()
        except:
            row = input("ERROR: Enter the elements in row " + str(i + 1) + ". Separare each element by a single space: ").split()
    return row        
        

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

def getMatrix():
    m = getRows()
    n = getColumns()
    
    matrix = []

    # Getting each individual row of the matrix

    for i in range(m):
        row = rowInputVerification(i, n)
        matrix.append(row)
        print("Row " + str(i + 1) + ": " + str(matrix[i]))
    
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
        
    matrix1 = getMatrix()
    
    if choice == 1:
        result = matrixAdd(matrix1)
    elif choice == 2:
        result = scalarMulti(matrix1)
    else:
        result = matrixMult(matrix1)

    print(result)
        
main()
