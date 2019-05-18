## The Sorting algorithms
One thing common to the 3 algorithms is the fact that these store the keys in a list and sorts this list.
Then, a new dictionary is defined and the key value pairs are added in the order of that in a(sorted).

#Randomised Quick sort
In quicksort algorithms, a pivot is chosen from the list.Then the correct position of this pivot is found out first.The element of this position and the element at the initial position of the pivot is swapped.Then we can come to a conclusion that all the elements of the right side of this new pivot is greater than the element in it. So the quicksort function can be called recursively to the left side of the pivot and the right side. In randomised quicksort, a random integer less than the size of the list is chosen and the element at this random index is swapped with that of the last index. Then the correct position of this element is found out by the function pivotPlace (by using low and high variables). Once this is done, their places are swapped and the similar procedure for quicksort is followed. This is very efficient as it takes only O(n) time in the average case.

#Heap sort

Binary tree is special case of tree data structure in which each node has atmost 2 child nodes. Maxheap is a special case of binary tree where each node's value is greater than it's child node's value. In heap sort algorithm, a max heap is made from a given list. We can come to a conclusion that the root node is now the largest value.Swap the positions of the first and last indices and repeat the procedure for the list excluding the last element. This algorith takes only O(nlogn) time even in the worst case scenario.

#Merge sort

This consits of two functions-merge and mergeSort. The role of the merge function is that it can take in two arrays(in this case both arrays are from the same parent array which has to be sorted) and return a single array which contains the elements of both the arrays but is sorted. The mergeSort function continuosly splits the parent array into smaller subarrays and once it reaches the stage where the subarrays have 1 element each it merges one by one continuosly producing a sorted array. This is also an effective algorithm with O(nlogn) at the worst case scenario. 
