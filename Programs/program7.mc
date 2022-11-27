Function getMax(Array Int arr[], Int n)  Returns Int {
	Int max = arr[0]
	Int i
	For (i = 1; i < n; i += 1) {
		If (arr[i] > max) {
			max = arr[i]
		}
	}
	Return max
} 

Function countSort(Array Int arr[], Int n, Int dig) Returns Void {
	Array Int output[n]
	Int i
	Array Int count[10]

	For(i = 0; i < 10; i += 1) {
		count[i] = 0
	}
	For (i = 0; i < n; i += 1) {
		count[(arr[i] / dig) % 10] += 1 
	}
	
	For (i = 1; i < 10; i += 1) {
		count[i] += count[i - 1]
		output[count[(arr[i] / dig) % 10] - 1] = arr[i]
		count[(arr[i] / dig) % 10] -= 1
	} 
	
	For (i = 0; i < n; i += 1) {
		arr[i] = output[i]
	}
}

Function radixsort(Array Int arr[], Int n) Returns Void { 
	Int dig
	countSort(arr, n, dig)
}

Function print(Array Int arr[], Int n) Returns Void {
	Int i
	For (i = 0; i < n; i += 1) {
		Printf(arr[i])
	}
} 

Function main() Returns Int {
	Int i, n
	Scanf(n)
	Array Int arr[n]

	For(i = 0; i < n; i+=1) {
		Scanf(arr[i])
	}
	radixsort(arr, n)
	Printf(arr, n)
	Return 0
}