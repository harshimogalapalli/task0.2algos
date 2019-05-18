#Algorithm 1: Quick sort with random pivot-O(n) time for average scenario,O(n^2) in the worst case
  import random
  def pivotPlace(a,first,last):

      randomIndex=rand.randint(first,last)
      a[randomIndex],a[last]=a[last],a[randomIndex]
      pivot=a[last]
      left=first
      right=last-1
      while True :
          while left<=right and a[left]<=pivot :
             left=left+1
          while left<=right and a[right]>=pivot :
             right=right-1
          if right<left :
             break
          else :
             a[left],a[right]=a[right],a[left]
          a[last],a[left]=a[left],a[last]
          return left

  def quickSort(wireHashMap,first,last):
      a= [k for k in wireHashMap]
      p=pivotPlace(a,first,last)
      quickSort(wireHashMap,first,p-1)
      quickSort(wireHashMap,p+1,last)
      sortedWireHashMap={}
      for i in a:
          sortedWireHashMap[i]=wireHashMap[i]
      return sortedWireHashMap

   # To execute just input the wireHashMap in the main function and type result=quickSort(wireHashMap,0,len(wireHashMap)-1)

 #Algorithm 2:Heap sort-O(nlogn) in the worst case scenario

def maxheapify(a, n, i):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2
    if l < n and a[largest] < a[l]:
        largest = l
    if r < n and a[largest] < a[r]:
        largest = r
    if largest != i:
        a[i],a[largest] = a[largest],a[i]
        maxheapify(a, n, largest)


def heapSort(wireHashMap):
    n = len(wireHashMap)
    a= [k for k in wireHashMap]
    for i in range(n, -1, -1):
        maxheapify(a, n, i)


    for i in range(n-1, 0, -1):
        a[i], a[0] = a[0], a[i]
        maxheapify(a, i, 0)
    sortedWireHashMap={}
    for i in a:
        sortedWireHashMap[i]=wireHashMap[i]
    return sortedWireHashMap
   #The execution is the same as quicksort but here you should call the heapSort function

 #Algorithm 3:mergeSort -O(nlogn) in the worst case scenario

def merge(a, low, pivot, high):
    n1 = pivot - low + 1
    n2 = high - pivot
    L = [0] * (n1)
    R = [0] * (n2)
    for i in range(0 , n1):
        L[i] = a[low + i]
    for j in range(0 , n2):
        R[j] = a[pivot + 1 + j]
    i = 0
    j = 0
    k = low
    while i < n1 and j < n2 :
        if L[i] <= R[j]:
            a[k] = L[i]
            i += 1
        else:
            a[k] = R[j]
            j += 1
        k += 1
    while i < n1:
        a[k] = L[i]
        i += 1
        k += 1
    while j < n2:
        a[k] = R[j]
        j += 1
        k += 1


def mergeSort(wireHashMap,l,r):
    a=[k for k in wireHashMap]
    if l < r:
        m = (l+(r-1))/2
        mergeSort(wireHashMap, l, m)
        mergeSort(wireHashMap, m+1, r)
        merge(a, l, m, r)

    sortedWireHashMap={}
    for i in a:
        sortedWireHashMap[i]=wireHashMap[i]
    return sortedWireHashMap


 #The execution is similar to other algorithms
 
