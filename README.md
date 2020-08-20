  # Google_Coding_challenge_2  
**The maximum subarray**

```
You are given an array of N elements.You are also given an integer K.You can select any subarray of the given array,delete that subarray from the array and join the remaining array elements.you can perform this operation at most once.
For example,if the array is [5,7,5,4,5,8,2] and you selcet [5,4,5] as the subarray that is deleted,then the resultant array becomes[5,7,8,2].
 
 You are required to find the lenth of the largest resultant array that contains an equal number of elements that are strictly greater and smaller than K.
 
 **NOTE:** A subarray is a continuous set of elemets of an array.
 Input format
 The first line contain T denoting the number of test cases
 The first line of each test case contains two space separated integers N and K.
 The next line of each test case contains N space seperated integers denoting array elements as arr1.
 Sample Input 1
 3
 6 5
 5 9  7 8 2 4
 7 5 
 5 7 5 4 5 8 2 
 8 5 
 5 7 2 8 7 4 5 9
 Sample Output 1
 5
 7
 6
 
 Sample Input 2 
 3
 6 4 
 15 15 16 4 15 9
 14 8
 8 7 8 8 5 11 13 19 15 3 15 5 11 20
 15 15 
 18 10 19 19 5 19 16 17 18 18 10 18 17 9 19
 Sample Output 2
 0
 11 
 4
 ```
 
       
