# INSERTION-SORT(A)
#   for j ← 1 to length(A) - 1
# 	do key ← A[j]
# 		i ← j – 1
#
# 		while i >= 0 and A[i] > key
# 			do A[i + 1] ← A[i]
# 				i ← i – 1
#
# 		A[i + 1] ← key

def insertionSort(array):
    for j in range(1, len(array)):
        key = array[j]

        i = j - 1

        while i >= 0 and array[i] > key:
            array[i + 1] = array[i]
            i -= 1

        array[i + 1] = key


def main():
    arr = [3, 7, 9, 11, 0, 1, 2, 9, 4]

    insertionSort(arr)

    print()

    for i in range(len(arr)):
        print(arr[i], end=" ")

    print()


if __name__ == '__main__':
    main()
