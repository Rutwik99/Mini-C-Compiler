Function main() Returns Int {
    Int n, i, j, temp
    Array Int arr[n]
 
    Scanf(n)
 
    For (i = 0; i < n; i += 1)
    {
        Scanf(arr[i])
    }
    For (i = 1 ; i <= n - 1; i += 1)
    {
	    j = i
            While (j > 0 And arr[j-1] > arr[j])
            {	        
                temp     = arr[j]
                arr[j]   = arr[j-1]
                arr[j-1] = temp
                j-=1
            }
    }
    Printf("Sorted list in ascending order:\n")
    For (i = 0; i <= n - 1; i += 1)
    {
        Printf(arr[i])
    }
    Return 0
}