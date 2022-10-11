

#Selection Sort
def selection_Sort(Array):

    for i in range(len(Array)):
        min_index = i
        for j in range(i+1,len(Array)):
            if Array[min_index] > Array[j]:
                min_index = j
        Array[i],Array[min_index] = Array[min_index],Array[i]
    print(Array)


#Bubble Sort
def Bubble_Sort(A):
    for i in range(0,len(A)):
        for j in range(0,len(A)-i-1):
            if A[j]>A[j+1]:
                A[j],A[j+1]=A[j+1],A[j]

    print(A)   

#example
Ex1=[11,55,7,89,45,13,10,55]
selection_Sort(Ex1)
Bubble_Sort(Ex1)   g