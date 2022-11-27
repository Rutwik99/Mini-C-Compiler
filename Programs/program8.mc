Function merge(Array Int arr[], Int l, Int m, Int r) Returns Void
{ 
    Int i, j, k
    Int n1
    n1 = m - l + 1
    Int n2
    n2 = r - m
  
    Array Int L[n1], R[n2]
  
    For (i = 0; i < n1; i+=1) {
        L[i] = arr[l + i]
    }
    For (j = 0; j < n2; j+=1) {
        R[j] = arr[m + 1 + j]
    }
  
    i = 0
    j = 0
    k = l  
    While (i < n1 And j < n2) { 
        If (L[i] <= R[j]) { 
            arr[k] = L[i]
            i+=1
        } 
        Else { 
            arr[k] = R[j]
            j+=1
        } 
        k+=1
    } 
  
    While (i < n1) { 
        arr[k] = L[i]
        i+=1 
        k+=1 
    } 
  
    While (j < n2) { 
        arr[k] = R[j] 
        j+=1
        k+=1 
    } 
} 
  
Function mergeSort(Array Int arr[], Int l, Int r) Returns Void
{
    If (l < r) { 
        Int m
        m = l + (r - l) / 2
  
        mergeSort(arr, l, m) 
        mergeSort(arr, m + 1, r)
  
        merge(arr, l, m, r)
    } 
}  

Function main() Returns Int
{ 
    Scanf(arr_size)
    Array Int arr[arr_size]
    For (i = 0 ; i < arr_size; i += 1 ) {
        Scanf(num[i])
    }
  
    mergeSort(arr, 0, arr_size - 1)
  
    Printf("\nSorted array is \n") 

    Int i
    For (i = 0; i < arr_size; i+=1) {
        Printf(arr[i])
    }
    Printf("\n")
    Return 0
} 